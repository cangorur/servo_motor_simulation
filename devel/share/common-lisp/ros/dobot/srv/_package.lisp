(cl:defpackage dobot-srv
  (:use )
  (:export
   "CLEARALLALARMSSTATE"
   "<CLEARALLALARMSSTATE-REQUEST>"
   "CLEARALLALARMSSTATE-REQUEST"
   "<CLEARALLALARMSSTATE-RESPONSE>"
   "CLEARALLALARMSSTATE-RESPONSE"
   "CONTMOTORCONTROL"
   "<CONTMOTORCONTROL-REQUEST>"
   "CONTMOTORCONTROL-REQUEST"
   "<CONTMOTORCONTROL-RESPONSE>"
   "CONTMOTORCONTROL-RESPONSE"
   "CONTPICKANDPLACE"
   "<CONTPICKANDPLACE-REQUEST>"
   "CONTPICKANDPLACE-REQUEST"
   "<CONTPICKANDPLACE-RESPONSE>"
   "CONTPICKANDPLACE-RESPONSE"
   "GENERATEABNORMALTORQUE"
   "<GENERATEABNORMALTORQUE-REQUEST>"
   "GENERATEABNORMALTORQUE-REQUEST"
   "<GENERATEABNORMALTORQUE-RESPONSE>"
   "GENERATEABNORMALTORQUE-RESPONSE"
   "GENERATENORMALTORQUE"
   "<GENERATENORMALTORQUE-REQUEST>"
   "GENERATENORMALTORQUE-REQUEST"
   "<GENERATENORMALTORQUE-RESPONSE>"
   "GENERATENORMALTORQUE-RESPONSE"
   "GETARCPARAMS"
   "<GETARCPARAMS-REQUEST>"
   "GETARCPARAMS-REQUEST"
   "<GETARCPARAMS-RESPONSE>"
   "GETARCPARAMS-RESPONSE"
   "GETALARMSSTATE"
   "<GETALARMSSTATE-REQUEST>"
   "GETALARMSSTATE-REQUEST"
   "<GETALARMSSTATE-RESPONSE>"
   "GETALARMSSTATE-RESPONSE"
   "GETCPCMD"
   "<GETCPCMD-REQUEST>"
   "GETCPCMD-REQUEST"
   "<GETCPCMD-RESPONSE>"
   "GETCPCMD-RESPONSE"
   "GETCPPARAMS"
   "<GETCPPARAMS-REQUEST>"
   "GETCPPARAMS-REQUEST"
   "<GETCPPARAMS-RESPONSE>"
   "GETCPPARAMS-RESPONSE"
   "GETCOLORSENSOR"
   "<GETCOLORSENSOR-REQUEST>"
   "GETCOLORSENSOR-REQUEST"
   "<GETCOLORSENSOR-RESPONSE>"
   "GETCOLORSENSOR-RESPONSE"
   "GETDEVICENAME"
   "<GETDEVICENAME-REQUEST>"
   "GETDEVICENAME-REQUEST"
   "<GETDEVICENAME-RESPONSE>"
   "GETDEVICENAME-RESPONSE"
   "GETDEVICESN"
   "<GETDEVICESN-REQUEST>"
   "GETDEVICESN-REQUEST"
   "<GETDEVICESN-RESPONSE>"
   "GETDEVICESN-RESPONSE"
   "GETDEVICEVERSION"
   "<GETDEVICEVERSION-REQUEST>"
   "GETDEVICEVERSION-REQUEST"
   "<GETDEVICEVERSION-RESPONSE>"
   "GETDEVICEVERSION-RESPONSE"
   "GETENDEFFECTORGRIPPER"
   "<GETENDEFFECTORGRIPPER-REQUEST>"
   "GETENDEFFECTORGRIPPER-REQUEST"
   "<GETENDEFFECTORGRIPPER-RESPONSE>"
   "GETENDEFFECTORGRIPPER-RESPONSE"
   "GETENDEFFECTORLASER"
   "<GETENDEFFECTORLASER-REQUEST>"
   "GETENDEFFECTORLASER-REQUEST"
   "<GETENDEFFECTORLASER-RESPONSE>"
   "GETENDEFFECTORLASER-RESPONSE"
   "GETENDEFFECTORPARAMS"
   "<GETENDEFFECTORPARAMS-REQUEST>"
   "GETENDEFFECTORPARAMS-REQUEST"
   "<GETENDEFFECTORPARAMS-RESPONSE>"
   "GETENDEFFECTORPARAMS-RESPONSE"
   "GETENDEFFECTORSUCTIONCUP"
   "<GETENDEFFECTORSUCTIONCUP-REQUEST>"
   "GETENDEFFECTORSUCTIONCUP-REQUEST"
   "<GETENDEFFECTORSUCTIONCUP-RESPONSE>"
   "GETENDEFFECTORSUCTIONCUP-RESPONSE"
   "GETHOMEPARAMS"
   "<GETHOMEPARAMS-REQUEST>"
   "GETHOMEPARAMS-REQUEST"
   "<GETHOMEPARAMS-RESPONSE>"
   "GETHOMEPARAMS-RESPONSE"
   "GETIOADC"
   "<GETIOADC-REQUEST>"
   "GETIOADC-REQUEST"
   "<GETIOADC-RESPONSE>"
   "GETIOADC-RESPONSE"
   "GETIODI"
   "<GETIODI-REQUEST>"
   "GETIODI-REQUEST"
   "<GETIODI-RESPONSE>"
   "GETIODI-RESPONSE"
   "GETIODO"
   "<GETIODO-REQUEST>"
   "GETIODO-REQUEST"
   "<GETIODO-RESPONSE>"
   "GETIODO-RESPONSE"
   "GETIOMULTIPLEXING"
   "<GETIOMULTIPLEXING-REQUEST>"
   "GETIOMULTIPLEXING-REQUEST"
   "<GETIOMULTIPLEXING-RESPONSE>"
   "GETIOMULTIPLEXING-RESPONSE"
   "GETIOPWM"
   "<GETIOPWM-REQUEST>"
   "GETIOPWM-REQUEST"
   "<GETIOPWM-RESPONSE>"
   "GETIOPWM-RESPONSE"
   "GETINFRAREDSENSOR"
   "<GETINFRAREDSENSOR-REQUEST>"
   "GETINFRAREDSENSOR-REQUEST"
   "<GETINFRAREDSENSOR-RESPONSE>"
   "GETINFRAREDSENSOR-RESPONSE"
   "GETJOGCOMMONPARAMS"
   "<GETJOGCOMMONPARAMS-REQUEST>"
   "GETJOGCOMMONPARAMS-REQUEST"
   "<GETJOGCOMMONPARAMS-RESPONSE>"
   "GETJOGCOMMONPARAMS-RESPONSE"
   "GETJOGCOORDINATEPARAMS"
   "<GETJOGCOORDINATEPARAMS-REQUEST>"
   "GETJOGCOORDINATEPARAMS-REQUEST"
   "<GETJOGCOORDINATEPARAMS-RESPONSE>"
   "GETJOGCOORDINATEPARAMS-RESPONSE"
   "GETJOGJOINTPARAMS"
   "<GETJOGJOINTPARAMS-REQUEST>"
   "GETJOGJOINTPARAMS-REQUEST"
   "<GETJOGJOINTPARAMS-RESPONSE>"
   "GETJOGJOINTPARAMS-RESPONSE"
   "GETPTPCOMMONPARAMS"
   "<GETPTPCOMMONPARAMS-REQUEST>"
   "GETPTPCOMMONPARAMS-REQUEST"
   "<GETPTPCOMMONPARAMS-RESPONSE>"
   "GETPTPCOMMONPARAMS-RESPONSE"
   "GETPTPCOORDINATEPARAMS"
   "<GETPTPCOORDINATEPARAMS-REQUEST>"
   "GETPTPCOORDINATEPARAMS-REQUEST"
   "<GETPTPCOORDINATEPARAMS-RESPONSE>"
   "GETPTPCOORDINATEPARAMS-RESPONSE"
   "GETPTPJOINTPARAMS"
   "<GETPTPJOINTPARAMS-REQUEST>"
   "GETPTPJOINTPARAMS-REQUEST"
   "<GETPTPJOINTPARAMS-RESPONSE>"
   "GETPTPJOINTPARAMS-RESPONSE"
   "GETPTPJUMPPARAMS"
   "<GETPTPJUMPPARAMS-REQUEST>"
   "GETPTPJUMPPARAMS-REQUEST"
   "<GETPTPJUMPPARAMS-RESPONSE>"
   "GETPTPJUMPPARAMS-RESPONSE"
   "GETPOSE"
   "<GETPOSE-REQUEST>"
   "GETPOSE-REQUEST"
   "<GETPOSE-RESPONSE>"
   "GETPOSE-RESPONSE"
   "GETQUEUEDCMDCURRENTINDEX"
   "<GETQUEUEDCMDCURRENTINDEX-REQUEST>"
   "GETQUEUEDCMDCURRENTINDEX-REQUEST"
   "<GETQUEUEDCMDCURRENTINDEX-RESPONSE>"
   "GETQUEUEDCMDCURRENTINDEX-RESPONSE"
   "INITCONVEYORBELTAGENT"
   "<INITCONVEYORBELTAGENT-REQUEST>"
   "INITCONVEYORBELTAGENT-REQUEST"
   "<INITCONVEYORBELTAGENT-RESPONSE>"
   "INITCONVEYORBELTAGENT-RESPONSE"
   "INITDOBOTARMAGENT"
   "<INITDOBOTARMAGENT-REQUEST>"
   "INITDOBOTARMAGENT-REQUEST"
   "<INITDOBOTARMAGENT-RESPONSE>"
   "INITDOBOTARMAGENT-RESPONSE"
   "INITDOBOTSERVERAGENT"
   "<INITDOBOTSERVERAGENT-REQUEST>"
   "INITDOBOTSERVERAGENT-REQUEST"
   "<INITDOBOTSERVERAGENT-RESPONSE>"
   "INITDOBOTSERVERAGENT-RESPONSE"
   "INITMOTORCONTROLAPP"
   "<INITMOTORCONTROLAPP-REQUEST>"
   "INITMOTORCONTROLAPP-REQUEST"
   "<INITMOTORCONTROLAPP-RESPONSE>"
   "INITMOTORCONTROLAPP-RESPONSE"
   "INITPICKANDPLACEAPP"
   "<INITPICKANDPLACEAPP-REQUEST>"
   "INITPICKANDPLACEAPP-REQUEST"
   "<INITPICKANDPLACEAPP-RESPONSE>"
   "INITPICKANDPLACEAPP-RESPONSE"
   "MOTORCONTROL"
   "<MOTORCONTROL-REQUEST>"
   "MOTORCONTROL-REQUEST"
   "<MOTORCONTROL-RESPONSE>"
   "MOTORCONTROL-RESPONSE"
   "ONETIMEMOTORCONTROL"
   "<ONETIMEMOTORCONTROL-REQUEST>"
   "ONETIMEMOTORCONTROL-REQUEST"
   "<ONETIMEMOTORCONTROL-RESPONSE>"
   "ONETIMEMOTORCONTROL-RESPONSE"
   "ONETIMEPICKANDPLACE"
   "<ONETIMEPICKANDPLACE-REQUEST>"
   "ONETIMEPICKANDPLACE-REQUEST"
   "<ONETIMEPICKANDPLACE-RESPONSE>"
   "ONETIMEPICKANDPLACE-RESPONSE"
   "PICKANDPLACE"
   "<PICKANDPLACE-REQUEST>"
   "PICKANDPLACE-REQUEST"
   "<PICKANDPLACE-RESPONSE>"
   "PICKANDPLACE-RESPONSE"
   "READREG"
   "<READREG-REQUEST>"
   "READREG-REQUEST"
   "<READREG-RESPONSE>"
   "READREG-RESPONSE"
   "SETARCCMD"
   "<SETARCCMD-REQUEST>"
   "SETARCCMD-REQUEST"
   "<SETARCCMD-RESPONSE>"
   "SETARCCMD-RESPONSE"
   "SETARCPARAMS"
   "<SETARCPARAMS-REQUEST>"
   "SETARCPARAMS-REQUEST"
   "<SETARCPARAMS-RESPONSE>"
   "SETARCPARAMS-RESPONSE"
   "SETCPCMD"
   "<SETCPCMD-REQUEST>"
   "SETCPCMD-REQUEST"
   "<SETCPCMD-RESPONSE>"
   "SETCPCMD-RESPONSE"
   "SETCPPARAMS"
   "<SETCPPARAMS-REQUEST>"
   "SETCPPARAMS-REQUEST"
   "<SETCPPARAMS-RESPONSE>"
   "SETCPPARAMS-RESPONSE"
   "SETCMDTIMEOUT"
   "<SETCMDTIMEOUT-REQUEST>"
   "SETCMDTIMEOUT-REQUEST"
   "<SETCMDTIMEOUT-RESPONSE>"
   "SETCMDTIMEOUT-RESPONSE"
   "SETCOLORSENSOR"
   "<SETCOLORSENSOR-REQUEST>"
   "SETCOLORSENSOR-REQUEST"
   "<SETCOLORSENSOR-RESPONSE>"
   "SETCOLORSENSOR-RESPONSE"
   "SETDEVICENAME"
   "<SETDEVICENAME-REQUEST>"
   "SETDEVICENAME-REQUEST"
   "<SETDEVICENAME-RESPONSE>"
   "SETDEVICENAME-RESPONSE"
   "SETDYNAMIXELSPEED"
   "<SETDYNAMIXELSPEED-REQUEST>"
   "SETDYNAMIXELSPEED-REQUEST"
   "<SETDYNAMIXELSPEED-RESPONSE>"
   "SETDYNAMIXELSPEED-RESPONSE"
   "SETEMOTOR"
   "<SETEMOTOR-REQUEST>"
   "SETEMOTOR-REQUEST"
   "<SETEMOTOR-RESPONSE>"
   "SETEMOTOR-RESPONSE"
   "SETENDEFFECTORGRIPPER"
   "<SETENDEFFECTORGRIPPER-REQUEST>"
   "SETENDEFFECTORGRIPPER-REQUEST"
   "<SETENDEFFECTORGRIPPER-RESPONSE>"
   "SETENDEFFECTORGRIPPER-RESPONSE"
   "SETENDEFFECTORLASER"
   "<SETENDEFFECTORLASER-REQUEST>"
   "SETENDEFFECTORLASER-REQUEST"
   "<SETENDEFFECTORLASER-RESPONSE>"
   "SETENDEFFECTORLASER-RESPONSE"
   "SETENDEFFECTORPARAMS"
   "<SETENDEFFECTORPARAMS-REQUEST>"
   "SETENDEFFECTORPARAMS-REQUEST"
   "<SETENDEFFECTORPARAMS-RESPONSE>"
   "SETENDEFFECTORPARAMS-RESPONSE"
   "SETENDEFFECTORSUCTIONCUP"
   "<SETENDEFFECTORSUCTIONCUP-REQUEST>"
   "SETENDEFFECTORSUCTIONCUP-REQUEST"
   "<SETENDEFFECTORSUCTIONCUP-RESPONSE>"
   "SETENDEFFECTORSUCTIONCUP-RESPONSE"
   "SETHOMECMD"
   "<SETHOMECMD-REQUEST>"
   "SETHOMECMD-REQUEST"
   "<SETHOMECMD-RESPONSE>"
   "SETHOMECMD-RESPONSE"
   "SETHOMEPARAMS"
   "<SETHOMEPARAMS-REQUEST>"
   "SETHOMEPARAMS-REQUEST"
   "<SETHOMEPARAMS-RESPONSE>"
   "SETHOMEPARAMS-RESPONSE"
   "SETIODO"
   "<SETIODO-REQUEST>"
   "SETIODO-REQUEST"
   "<SETIODO-RESPONSE>"
   "SETIODO-RESPONSE"
   "SETIOMULTIPLEXING"
   "<SETIOMULTIPLEXING-REQUEST>"
   "SETIOMULTIPLEXING-REQUEST"
   "<SETIOMULTIPLEXING-RESPONSE>"
   "SETIOMULTIPLEXING-RESPONSE"
   "SETIOPWM"
   "<SETIOPWM-REQUEST>"
   "SETIOPWM-REQUEST"
   "<SETIOPWM-RESPONSE>"
   "SETIOPWM-RESPONSE"
   "SETINFRAREDSENSOR"
   "<SETINFRAREDSENSOR-REQUEST>"
   "SETINFRAREDSENSOR-REQUEST"
   "<SETINFRAREDSENSOR-RESPONSE>"
   "SETINFRAREDSENSOR-RESPONSE"
   "SETJOGCMD"
   "<SETJOGCMD-REQUEST>"
   "SETJOGCMD-REQUEST"
   "<SETJOGCMD-RESPONSE>"
   "SETJOGCMD-RESPONSE"
   "SETJOGCOMMONPARAMS"
   "<SETJOGCOMMONPARAMS-REQUEST>"
   "SETJOGCOMMONPARAMS-REQUEST"
   "<SETJOGCOMMONPARAMS-RESPONSE>"
   "SETJOGCOMMONPARAMS-RESPONSE"
   "SETJOGCOORDINATEPARAMS"
   "<SETJOGCOORDINATEPARAMS-REQUEST>"
   "SETJOGCOORDINATEPARAMS-REQUEST"
   "<SETJOGCOORDINATEPARAMS-RESPONSE>"
   "SETJOGCOORDINATEPARAMS-RESPONSE"
   "SETJOGJOINTPARAMS"
   "<SETJOGJOINTPARAMS-REQUEST>"
   "SETJOGJOINTPARAMS-REQUEST"
   "<SETJOGJOINTPARAMS-RESPONSE>"
   "SETJOGJOINTPARAMS-RESPONSE"
   "SETPTPCMD"
   "<SETPTPCMD-REQUEST>"
   "SETPTPCMD-REQUEST"
   "<SETPTPCMD-RESPONSE>"
   "SETPTPCMD-RESPONSE"
   "SETPTPCOMMONPARAMS"
   "<SETPTPCOMMONPARAMS-REQUEST>"
   "SETPTPCOMMONPARAMS-REQUEST"
   "<SETPTPCOMMONPARAMS-RESPONSE>"
   "SETPTPCOMMONPARAMS-RESPONSE"
   "SETPTPCOORDINATEPARAMS"
   "<SETPTPCOORDINATEPARAMS-REQUEST>"
   "SETPTPCOORDINATEPARAMS-REQUEST"
   "<SETPTPCOORDINATEPARAMS-RESPONSE>"
   "SETPTPCOORDINATEPARAMS-RESPONSE"
   "SETPTPJOINTPARAMS"
   "<SETPTPJOINTPARAMS-REQUEST>"
   "SETPTPJOINTPARAMS-REQUEST"
   "<SETPTPJOINTPARAMS-RESPONSE>"
   "SETPTPJOINTPARAMS-RESPONSE"
   "SETPTPJUMPPARAMS"
   "<SETPTPJUMPPARAMS-REQUEST>"
   "SETPTPJUMPPARAMS-REQUEST"
   "<SETPTPJUMPPARAMS-RESPONSE>"
   "SETPTPJUMPPARAMS-RESPONSE"
   "SETQUEUEDCMDCLEAR"
   "<SETQUEUEDCMDCLEAR-REQUEST>"
   "SETQUEUEDCMDCLEAR-REQUEST"
   "<SETQUEUEDCMDCLEAR-RESPONSE>"
   "SETQUEUEDCMDCLEAR-RESPONSE"
   "SETQUEUEDCMDFORCESTOPEXEC"
   "<SETQUEUEDCMDFORCESTOPEXEC-REQUEST>"
   "SETQUEUEDCMDFORCESTOPEXEC-REQUEST"
   "<SETQUEUEDCMDFORCESTOPEXEC-RESPONSE>"
   "SETQUEUEDCMDFORCESTOPEXEC-RESPONSE"
   "SETQUEUEDCMDSTARTEXEC"
   "<SETQUEUEDCMDSTARTEXEC-REQUEST>"
   "SETQUEUEDCMDSTARTEXEC-REQUEST"
   "<SETQUEUEDCMDSTARTEXEC-RESPONSE>"
   "SETQUEUEDCMDSTARTEXEC-RESPONSE"
   "SETQUEUEDCMDSTOPEXEC"
   "<SETQUEUEDCMDSTOPEXEC-REQUEST>"
   "SETQUEUEDCMDSTOPEXEC-REQUEST"
   "<SETQUEUEDCMDSTOPEXEC-RESPONSE>"
   "SETQUEUEDCMDSTOPEXEC-RESPONSE"
   "SETTRIGCMD"
   "<SETTRIGCMD-REQUEST>"
   "SETTRIGCMD-REQUEST"
   "<SETTRIGCMD-RESPONSE>"
   "SETTRIGCMD-RESPONSE"
   "SETWAITCMD"
   "<SETWAITCMD-REQUEST>"
   "SETWAITCMD-REQUEST"
   "<SETWAITCMD-RESPONSE>"
   "SETWAITCMD-RESPONSE"
   "WRITEREG"
   "<WRITEREG-REQUEST>"
   "WRITEREG-REQUEST"
   "<WRITEREG-RESPONSE>"
   "WRITEREG-RESPONSE"
  ))
