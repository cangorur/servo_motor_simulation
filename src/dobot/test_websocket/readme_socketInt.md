Web Socket Interface
====================

To test the system's socket connections use the `src/dobot/test_websocket/client_test.py`. By changing the .json files and the websocket link in the python script, you can receive the sensor results and able to control the motor.

TODO: Update here with the latest version of the .json files.

---

# Information on Web Socket connection

port# = 8887

# JSON File Formats

## Simulated Conveyor Belts with Servo
by conveyor_gateway agent

Two types of request: Speed (a continuous request like ramp or one time like stepwise) and Torque Load (with different types and params as commented below). For each request, these data types should be provided. In case you do not want to change one another, the data field should be left empty (see the example .json file [here](./conveyorBelt.json)).

At every request, regardless of any control message, the field "motorData" is filled with the current motor readings as a response (see the *Response* part of the message).

To create new requests or to update the interface, please refer to the source file: [ConveyorGateway.cpp](../src/conveyor_gateway/ConveyorGateway.cpp)

```
{
  "payload":
  {
      "requester": {
          "id": "simulated-conveyor-driver"
      },
      "requestee": {
          "id": "conveyor-1"      // from 1 to ... <integer motor id> just to double-check for security reasons. It is important that the ID matches with the requested conveyor_agent ID on the requested port
      },
      "request": {      // for NO torque and speed request, leave them empty, "".
          "switch": "on",
          "speed": {
              "contSpeedReq": {     // leave this empty for oneTime speed req.
                  "starting_speed": "5.0",
                  "ending_speed": "35.0",
                  "numberofsteps": "30.0",
                  "step_time": "2.0"
              },
              "oneTimeSpeedReq": "35.0"   // leave this empty for continous speed reqs.
          },
          "motorData": "",
          "torqueRequest": {      // abnormal is for maintenance tests
              "abnormal":{
                "type": "log",    // others: exp, ramp, step
                "param1": "0.1",  // torque = -log(param1*x + param2)
                "param2": "1.0",
                "holdTime": "3.0"
              },
              "normal": "0.2" // a normal load installed on the conveyor
          }
      },
      "response": {
          "conveyor-service-1": {   // from 1 to ...
              "status": "on",
              "speed": "53.6444366027839", // the same as under motorData
              "motorData": {
                "sensor": "http://10.0.2.83:8001/sensor/1/",
                "log_list_id": 0,
                "timestamp": 13.363,
                "acceleration": 0.027874690631694,
                "speed": 53.6444366027839,
                "temperature": 50.0,
                "current": 0.221145663484359,
                "power_in": 1.98004988138504,
                "load_torque": 0.0
              }
          }
      }
  }
}
```

### Motor Current Sensor
by conveyor_gateway agent
We created a separate request for only reading currents.
```
{
  "payload":
  {
      "requester": {
          "id": "current-sensor-driver"   //one sensor for real motor. Also available under conveyor motorData.
      },
      "requestee": {
          "id": "current-sensor-service"
      },
      "request": {
          "current": ""
      },
      "response": {
          "current-sensor-service": {
              "current": "0.2211"
          }
      }
  }
}
```
