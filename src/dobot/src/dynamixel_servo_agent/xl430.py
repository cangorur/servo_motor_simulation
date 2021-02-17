'''
This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more detailport.
You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/
Use it at your own risk. Assume that I have no idea what I am doing.

Based on the script to control dynamixel ax12 motors by Jesse Merritt.  Found here:
https://github.com/jes1510/python_dynamixels
-> The scipt was re-written to work with xl430 instead of ax12.

-> The script assumes that it is connected to the servo through a buffer
such as a 74LS241.  The communication direction is controlled through
a GPIO pin.

-> If a Raspberry Pi is being used then the startup config needs to be done such as  freein up ttyAMA0 for our use
To do that, follow instructions on  https://github.com/RPi-Distro/repo/issues/31#issuecomment-220776609 (without bluetooth to use stable one)

- Oguz Ozdemir
'''
import xlConst
import serial
import time
import struct
import RPi.GPIO as GPIO

import inspect

class xl430:
    addresses = xlConst.XL430Constants['XLAddresses']
    lengths = xlConst.XL430Constants['XLMsglengths']
    instructions = xlConst.XL430Constants['XLInstructions']
    ins_pckt_index = xlConst.XL430Constants['InstructionPacketIndex']
    sta_pckt_index = xlConst.XL430Constants['StatusPacketIndex']
    sta_pckt_error = xlConst.XL430Constants['StatusPacketError']

    # Configuring and starting Serial communication
    port = serial.Serial() # Creating serial port object
    port.baudrate = 57600
    port.port = "/dev/ttyAMA0" # Port being used
    #port.parity=serial.PARITY_NONE
    port.stopbits = serial.STOPBITS_ONE
    port.timeout = 0.004 # 0.004 ideal for baud 57600
    port.open()

    # Configuring GPIO
    GPIO.setwarnings(False)
    GPIO.setmode(GPIO.BCM)
    rx = GPIO.LOW # LOW for RX mode
    tx = GPIO.HIGH # HIGH for TX mode
    directionPin = 18 # GPIO pin connected to Enable pins on buffer
    GPIO.setup(directionPin, GPIO.OUT)
    IDLE_TIME =2e-4 # 0.0002 # 0.0002 per bit in the message sent is enough and works

    shutdownErrorCodes = {1: 'Input Voltage Error',
                          4: 'Overheating Error',
                          8: 'Motor Encoder Error',
                          16:'Electrical Shock or Insufficient Power',
                          32:'Overload Error',}
    # Custom error class to report servo Errors
    class xlError(Exception) : pass

    # Unspecified Error
    class generalError(Exception) : pass

    # Servo timeout
    class timeoutError(Exception) : pass

    # Helper functions (Not related to motor)
    def intlist2float(self,input) :
        strofchr=''.join(chr(x) for x in input)
        return float(struct.unpack('<i',strofchr)[0])

    def shortlist2float(self,input) :
        strofchr=''.join(chr(x) for x in input)
        return float(struct.unpack('<h',strofchr)[0])

    def returnCalledFunction(self) :
        return inspect.stack()[1][3]
    # CRC calculator

    def updateCRC(self, crc_accum, data_blk_ptr, data_blk_size):
        crc_table = [0x0000,
                     0x8005, 0x800F, 0x000A, 0x801B, 0x001E, 0x0014, 0x8011,
                     0x8033, 0x0036, 0x003C, 0x8039, 0x0028, 0x802D, 0x8027,
                     0x0022, 0x8063, 0x0066, 0x006C, 0x8069, 0x0078, 0x807D,
                     0x8077, 0x0072, 0x0050, 0x8055, 0x805F, 0x005A, 0x804B,
                     0x004E, 0x0044, 0x8041, 0x80C3, 0x00C6, 0x00CC, 0x80C9,
                     0x00D8, 0x80DD, 0x80D7, 0x00D2, 0x00F0, 0x80F5, 0x80FF,
                     0x00FA, 0x80EB, 0x00EE, 0x00E4, 0x80E1, 0x00A0, 0x80A5,
                     0x80AF, 0x00AA, 0x80BB, 0x00BE, 0x00B4, 0x80B1, 0x8093,
                     0x0096, 0x009C, 0x8099, 0x0088, 0x808D, 0x8087, 0x0082,
                     0x8183, 0x0186, 0x018C, 0x8189, 0x0198, 0x819D, 0x8197,
                     0x0192, 0x01B0, 0x81B5, 0x81BF, 0x01BA, 0x81AB, 0x01AE,
                     0x01A4, 0x81A1, 0x01E0, 0x81E5, 0x81EF, 0x01EA, 0x81FB,
                     0x01FE, 0x01F4, 0x81F1, 0x81D3, 0x01D6, 0x01DC, 0x81D9,
                     0x01C8, 0x81CD, 0x81C7, 0x01C2, 0x0140, 0x8145, 0x814F,
                     0x014A, 0x815B, 0x015E, 0x0154, 0x8151, 0x8173, 0x0176,
                     0x017C, 0x8179, 0x0168, 0x816D, 0x8167, 0x0162, 0x8123,
                     0x0126, 0x012C, 0x8129, 0x0138, 0x813D, 0x8137, 0x0132,
                     0x0110, 0x8115, 0x811F, 0x011A, 0x810B, 0x010E, 0x0104,
                     0x8101, 0x8303, 0x0306, 0x030C, 0x8309, 0x0318, 0x831D,
                     0x8317, 0x0312, 0x0330, 0x8335, 0x833F, 0x033A, 0x832B,
                     0x032E, 0x0324, 0x8321, 0x0360, 0x8365, 0x836F, 0x036A,
                     0x837B, 0x037E, 0x0374, 0x8371, 0x8353, 0x0356, 0x035C,
                     0x8359, 0x0348, 0x834D, 0x8347, 0x0342, 0x03C0, 0x83C5,
                     0x83CF, 0x03CA, 0x83DB, 0x03DE, 0x03D4, 0x83D1, 0x83F3,
                     0x03F6, 0x03FC, 0x83F9, 0x03E8, 0x83ED, 0x83E7, 0x03E2,
                     0x83A3, 0x03A6, 0x03AC, 0x83A9, 0x03B8, 0x83BD, 0x83B7,
                     0x03B2, 0x0390, 0x8395, 0x839F, 0x039A, 0x838B, 0x038E,
                     0x0384, 0x8381, 0x0280, 0x8285, 0x828F, 0x028A, 0x829B,
                     0x029E, 0x0294, 0x8291, 0x82B3, 0x02B6, 0x02BC, 0x82B9,
                     0x02A8, 0x82AD, 0x82A7, 0x02A2, 0x82E3, 0x02E6, 0x02EC,
                     0x82E9, 0x02F8, 0x82FD, 0x82F7, 0x02F2, 0x02D0, 0x82D5,
                     0x82DF, 0x02DA, 0x82CB, 0x02CE, 0x02C4, 0x82C1, 0x8243,
                     0x0246, 0x024C, 0x8249, 0x0258, 0x825D, 0x8257, 0x0252,
                     0x0270, 0x8275, 0x827F, 0x027A, 0x826B, 0x026E, 0x0264,
                     0x8261, 0x0220, 0x8225, 0x822F, 0x022A, 0x823B, 0x023E,
                     0x0234, 0x8231, 0x8213, 0x0216, 0x021C, 0x8219, 0x0208,
                     0x820D, 0x8207, 0x0202]
        for j in range(0, data_blk_size):
            i = ((crc_accum >> 8) ^ data_blk_ptr[j]) & 0xFF
            crc_accum = ((crc_accum << 8) ^ crc_table[i]) & 0xFFFF
        return crc_accum

    def checkReceivedCRC(self,statusPacket) :
        length_ = len(statusPacket)
        CRC=self.updateCRC(0,statusPacket,length_-2)
        if length_ >=2 :
            if (statusPacket[length_-2]==(CRC&0xFF)) and (statusPacket[length_-1]==((CRC >>8) & 0xFF)) :
                return 1
            else:
                return 0 # meaning CRC error

    # Sets direction of the data (either rx or tx)
    def setDirection(self, direction):
        GPIO.output(xl430.directionPin, direction)

    # A function to send XLInstructions
    def sendInstruction(self, id, instruction, params):
        numberofparameters=len(params)
        xl430.port.flushInput()
        self.setDirection(xl430.tx)
        instructionPacket=[0]*(10+numberofparameters)
        instructionPacket[0]=0xFF
        instructionPacket[1]=0xFF
        instructionPacket[2]=0xFD
        instructionPacket[3]=0x00
        instructionPacket[4]=id
        instructionPacket[5]=(numberofparameters+3)
        instructionPacket[6]=0x00
        instructionPacket[7]=instruction
        for x in range(numberofparameters):
            instructionPacket[8+x]=params[x]
        CRC=self.updateCRC(0,instructionPacket,(5+3+numberofparameters))
        instructionPacket[8+numberofparameters]= CRC & 0xFF
        instructionPacket[9+numberofparameters] = (CRC >>8) & 0xFF
        y= xl430.port.write(instructionPacket)
        time.sleep((9+numberofparameters)*xl430.IDLE_TIME)
        self.setDirection(xl430.rx)
        return instructionPacket

    # A function that receives status that motor sends.
    def getStatus(self,id) :
        self.setDirection(xl430.rx)
        vals = list()
        vals2 = list()
        _params = list()
        vals = xl430.port.read(16)
        for i in range(len(vals)):
            vals2.append(ord(vals[i]))
        try:
            vals2.pop() # Suprisingly, serial reads an additional null bit at the end, thats why discarding it.
        except:
            pass
        if(self.checkReceivedCRC(vals2)) :
            if (vals2[0] == 255 ) and (vals2[1] == 255 ) and (vals2[2] == 253 ) :
                _id = vals2[4]
                _len = vals2[5]+vals2[6]*256
                _err = vals2[8]
                for i in range(_len-4) :
                    _params.append(vals2[9+i])
                if _err != 0 :                     # If the error is not 0 then bail with an error code
                     e = "Error from servo: " + xl430.sta_pckt_error[_err]
                     print(e)
                     self.getHardwareErrorStatus(1)
                     #raise xl430.xlError(e)  # raise the error
                return _params
            else:
                e = "Timeout on servo / received package has broken header "
                raise xl430.timeoutError(e) # raise a timeout error
        else :
            raise xl430.generalError("CRC ERROR",vals2)
        self.setDirection(xl430.tx)

    def getHardwareErrorStatus(self, id):
        self.sendInstruction(id,xl430.instructions['READ_DATA'],[70,0,1,0])
        self.setDirection(xl430.rx)
        vals = list()
        vals2 = list()
        _params = list()
        vals = xl430.port.read(16)
        for i in range(len(vals)):
            vals2.append(ord(vals[i]))
        # 9. register is the data register of the returned status register of the shutdown error status
        if not vals2[9]&1 == 0:
            print(xl430.shutdownErrorCodes[1])
        if not vals2[9]&4 == 0:
            print(xl430.shutdownErrorCodes[4])
        if not vals2[9]&8 == 0:
            print(xl430.shutdownErrorCodes[8])
        if not vals2[9]&16 == 0:
            print(xl430.shutdownErrorCodes[16])
        if not vals2[9]&32 == 0:
            print(xl430.shutdownErrorCodes[32])
        if not vals2[9]&64 == 0:
            print(xl430.shutdownErrorCodes[64])

    def readReg(self, id, reg_address, data_length) :
        self.sendInstruction(id, xl430.instructions['READ_DATA'], [reg_address, 0x00, data_length, 0x00] )
        #try:
        return self.getStatus(id)
        #except Exception as e:
             #print e.args[0] + str(e.args[1])+ " in the function : " + self.returnCalledFunction()

    def writeReg(self, id, reg_address, data) : # LSB First
        try:
            self.sendInstruction(id,xl430.instructions['WRITE_DATA'], [reg_address, 0x00 ] + data )
            self.getStatus(id)
            return True
        except:
            return False

    def sendPing(self, id) :
        self.sendInstruction(id,xl430.instructions['PING'],[])
        return self.getStatus(id)

    def sendReboot(self, id) :
        return self.sendInstruction(id, xl430.instructions['REBOOT'],[])

    def sendFactoryReset(self,id) :
        return self.sendInstruction(id, xl430.instructions['RESET'],[0xFF])

    def updateBaudrate(self,id,baud_index) : # look at http://emanual.robotis.com/docs/en/dxl/x/xl430-w250/#baud-rate for corresponding indexes
        return self.writeReg(id,xl430.addresses['BAUD_RATE'],[baud_index]) # 3 for 1M, 1 for 57600

    def setStatusReturnLevel(self,id,level): # check level from control table given in e-manuel
        return self.writeReg(id,xl430.addresses['STATUS_RETURN_LEVEL'],[level])

    def getVelocity(self, id) : # in RPM
        response = self.readReg(id,xl430.addresses['PRESENT_VELOCITY'], xl430.lengths['PRESENT_VELOCITY']) # /0.229
        velocity = self.intlist2float(response)*0.229
        return velocity

    def getPosition(self, id) :
        response = self.readReg(id,xl430.addresses['PRESENT_POSITION'], xl430.lengths['PRESENT_POSITION'])
        position = self.intlist2float(response)*0.088
        return position

    def getTemperature(self, id) : # in C degrees
        response = self.readReg(id, xl430.addresses['PRESENT_TEMPERATURE'],xl430.lengths['PRESENT_TEMPERATURE'])
        temperature =float(response[0])
        return temperature

    def getPwm (self,id) :
        response = self.readReg(id,xl430.addresses['PRESENT_PWM'],xl430.lengths['PRESENT_PWM'])
        pwm = self.shortlist2float(response) * 0.113
        return pwm

    def getVoltage (self,id) :
        response = self.readReg(id,xl430.addresses['PRESENT_INPUT_VOLTAGE'],xl430.lengths['PRESENT_INPUT_VOLTAGE'])
        voltage = self.shortlist2float(response) * 0.1
        return voltage

    def setGoalVelocity(self, id, velocity) :
        goal_velocity=struct.pack('<i',int(round(velocity/0.229)))
        return self.writeReg(id,xl430.addresses['GOAL_VELOCITY'],[ord(goal_velocity[0]),ord(goal_velocity[1]),ord(goal_velocity[2]),ord(goal_velocity[3])]) # velocity*0.229

    def setModeVelocity(self,id) :
        return self.writeReg(id,xl430.addresses['OPERATING_MODE'],[1])

    def torqueEnableDisable(self,id,state) :
        return self.writeReg(id,xl430.addresses['TORQUE_ENABLE'],[state])
    def motorLed(self,id,state) :
        return self.writeReg(1,xl430.addresses['LED'],[state])
