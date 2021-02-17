import sys, time
 
from board import SCL, SDA
import busio
 
import adafruit_ina219
 
i2c_bus = busio.I2C(SCL, SDA)


ina219 = adafruit_ina219.INA219(i2c_bus)

while True:
    print(ina219.current)
    sys.stdout.flush()
    time.sleep(0.2)


