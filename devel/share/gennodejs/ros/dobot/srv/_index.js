
"use strict";

let GetHOMEParams = require('./GetHOMEParams.js')
let GenerateAbnormalTorque = require('./GenerateAbnormalTorque.js')
let SetPTPCommonParams = require('./SetPTPCommonParams.js')
let GetPTPJumpParams = require('./GetPTPJumpParams.js')
let ContPickAndPlace = require('./ContPickAndPlace.js')
let GetEndEffectorSuctionCup = require('./GetEndEffectorSuctionCup.js')
let WriteReg = require('./WriteReg.js')
let SetEndEffectorParams = require('./SetEndEffectorParams.js')
let MotorControl = require('./MotorControl.js')
let GetPTPCommonParams = require('./GetPTPCommonParams.js')
let SetJOGCommonParams = require('./SetJOGCommonParams.js')
let SetCPCmd = require('./SetCPCmd.js')
let GetJOGCoordinateParams = require('./GetJOGCoordinateParams.js')
let SetPTPJointParams = require('./SetPTPJointParams.js')
let GetIODO = require('./GetIODO.js')
let InitMotorControlApp = require('./InitMotorControlApp.js')
let SetDeviceName = require('./SetDeviceName.js')
let ReadReg = require('./ReadReg.js')
let SetPTPJumpParams = require('./SetPTPJumpParams.js')
let GetIOADC = require('./GetIOADC.js')
let ContMotorControl = require('./ContMotorControl.js')
let SetDynamixelSpeed = require('./SetDynamixelSpeed.js')
let OneTimePickAndPlace = require('./OneTimePickAndPlace.js')
let InitDobotArmAgent = require('./InitDobotArmAgent.js')
let GetDeviceName = require('./GetDeviceName.js')
let GetInfraredSensor = require('./GetInfraredSensor.js')
let GetDeviceSN = require('./GetDeviceSN.js')
let SetInfraredSensor = require('./SetInfraredSensor.js')
let SetQueuedCmdClear = require('./SetQueuedCmdClear.js')
let SetIODO = require('./SetIODO.js')
let GetJOGCommonParams = require('./GetJOGCommonParams.js')
let GetPTPCoordinateParams = require('./GetPTPCoordinateParams.js')
let SetHOMECmd = require('./SetHOMECmd.js')
let GetPose = require('./GetPose.js')
let GetJOGJointParams = require('./GetJOGJointParams.js')
let GetIOPWM = require('./GetIOPWM.js')
let SetEndEffectorGripper = require('./SetEndEffectorGripper.js')
let GenerateNormalTorque = require('./GenerateNormalTorque.js')
let SetJOGCoordinateParams = require('./SetJOGCoordinateParams.js')
let GetAlarmsState = require('./GetAlarmsState.js')
let GetEndEffectorGripper = require('./GetEndEffectorGripper.js')
let SetEndEffectorLaser = require('./SetEndEffectorLaser.js')
let SetPTPCmd = require('./SetPTPCmd.js')
let SetJOGCmd = require('./SetJOGCmd.js')
let InitPickAndPlaceApp = require('./InitPickAndPlaceApp.js')
let SetCmdTimeout = require('./SetCmdTimeout.js')
let PickAndPlace = require('./PickAndPlace.js')
let GetEndEffectorLaser = require('./GetEndEffectorLaser.js')
let GetCPCmd = require('./GetCPCmd.js')
let SetTRIGCmd = require('./SetTRIGCmd.js')
let SetJOGJointParams = require('./SetJOGJointParams.js')
let ClearAllAlarmsState = require('./ClearAllAlarmsState.js')
let SetARCCmd = require('./SetARCCmd.js')
let GetEndEffectorParams = require('./GetEndEffectorParams.js')
let GetPTPJointParams = require('./GetPTPJointParams.js')
let SetHOMEParams = require('./SetHOMEParams.js')
let SetQueuedCmdStopExec = require('./SetQueuedCmdStopExec.js')
let SetARCParams = require('./SetARCParams.js')
let GetCPParams = require('./GetCPParams.js')
let GetIOMultiplexing = require('./GetIOMultiplexing.js')
let SetWAITCmd = require('./SetWAITCmd.js')
let SetPTPCoordinateParams = require('./SetPTPCoordinateParams.js')
let SetEMotor = require('./SetEMotor.js')
let SetIOMultiplexing = require('./SetIOMultiplexing.js')
let SetEndEffectorSuctionCup = require('./SetEndEffectorSuctionCup.js')
let GetQueuedCmdCurrentIndex = require('./GetQueuedCmdCurrentIndex.js')
let SetQueuedCmdForceStopExec = require('./SetQueuedCmdForceStopExec.js')
let GetColorSensor = require('./GetColorSensor.js')
let InitDobotServerAgent = require('./InitDobotServerAgent.js')
let OneTimeMotorControl = require('./OneTimeMotorControl.js')
let SetCPParams = require('./SetCPParams.js')
let SetColorSensor = require('./SetColorSensor.js')
let SetIOPWM = require('./SetIOPWM.js')
let SetQueuedCmdStartExec = require('./SetQueuedCmdStartExec.js')
let GetDeviceVersion = require('./GetDeviceVersion.js')
let InitConveyorBeltAgent = require('./InitConveyorBeltAgent.js')
let GetIODI = require('./GetIODI.js')
let GetARCParams = require('./GetARCParams.js')

module.exports = {
  GetHOMEParams: GetHOMEParams,
  GenerateAbnormalTorque: GenerateAbnormalTorque,
  SetPTPCommonParams: SetPTPCommonParams,
  GetPTPJumpParams: GetPTPJumpParams,
  ContPickAndPlace: ContPickAndPlace,
  GetEndEffectorSuctionCup: GetEndEffectorSuctionCup,
  WriteReg: WriteReg,
  SetEndEffectorParams: SetEndEffectorParams,
  MotorControl: MotorControl,
  GetPTPCommonParams: GetPTPCommonParams,
  SetJOGCommonParams: SetJOGCommonParams,
  SetCPCmd: SetCPCmd,
  GetJOGCoordinateParams: GetJOGCoordinateParams,
  SetPTPJointParams: SetPTPJointParams,
  GetIODO: GetIODO,
  InitMotorControlApp: InitMotorControlApp,
  SetDeviceName: SetDeviceName,
  ReadReg: ReadReg,
  SetPTPJumpParams: SetPTPJumpParams,
  GetIOADC: GetIOADC,
  ContMotorControl: ContMotorControl,
  SetDynamixelSpeed: SetDynamixelSpeed,
  OneTimePickAndPlace: OneTimePickAndPlace,
  InitDobotArmAgent: InitDobotArmAgent,
  GetDeviceName: GetDeviceName,
  GetInfraredSensor: GetInfraredSensor,
  GetDeviceSN: GetDeviceSN,
  SetInfraredSensor: SetInfraredSensor,
  SetQueuedCmdClear: SetQueuedCmdClear,
  SetIODO: SetIODO,
  GetJOGCommonParams: GetJOGCommonParams,
  GetPTPCoordinateParams: GetPTPCoordinateParams,
  SetHOMECmd: SetHOMECmd,
  GetPose: GetPose,
  GetJOGJointParams: GetJOGJointParams,
  GetIOPWM: GetIOPWM,
  SetEndEffectorGripper: SetEndEffectorGripper,
  GenerateNormalTorque: GenerateNormalTorque,
  SetJOGCoordinateParams: SetJOGCoordinateParams,
  GetAlarmsState: GetAlarmsState,
  GetEndEffectorGripper: GetEndEffectorGripper,
  SetEndEffectorLaser: SetEndEffectorLaser,
  SetPTPCmd: SetPTPCmd,
  SetJOGCmd: SetJOGCmd,
  InitPickAndPlaceApp: InitPickAndPlaceApp,
  SetCmdTimeout: SetCmdTimeout,
  PickAndPlace: PickAndPlace,
  GetEndEffectorLaser: GetEndEffectorLaser,
  GetCPCmd: GetCPCmd,
  SetTRIGCmd: SetTRIGCmd,
  SetJOGJointParams: SetJOGJointParams,
  ClearAllAlarmsState: ClearAllAlarmsState,
  SetARCCmd: SetARCCmd,
  GetEndEffectorParams: GetEndEffectorParams,
  GetPTPJointParams: GetPTPJointParams,
  SetHOMEParams: SetHOMEParams,
  SetQueuedCmdStopExec: SetQueuedCmdStopExec,
  SetARCParams: SetARCParams,
  GetCPParams: GetCPParams,
  GetIOMultiplexing: GetIOMultiplexing,
  SetWAITCmd: SetWAITCmd,
  SetPTPCoordinateParams: SetPTPCoordinateParams,
  SetEMotor: SetEMotor,
  SetIOMultiplexing: SetIOMultiplexing,
  SetEndEffectorSuctionCup: SetEndEffectorSuctionCup,
  GetQueuedCmdCurrentIndex: GetQueuedCmdCurrentIndex,
  SetQueuedCmdForceStopExec: SetQueuedCmdForceStopExec,
  GetColorSensor: GetColorSensor,
  InitDobotServerAgent: InitDobotServerAgent,
  OneTimeMotorControl: OneTimeMotorControl,
  SetCPParams: SetCPParams,
  SetColorSensor: SetColorSensor,
  SetIOPWM: SetIOPWM,
  SetQueuedCmdStartExec: SetQueuedCmdStartExec,
  GetDeviceVersion: GetDeviceVersion,
  InitConveyorBeltAgent: InitConveyorBeltAgent,
  GetIODI: GetIODI,
  GetARCParams: GetARCParams,
};
