// Auto-generated. Do not edit!

// (in-package dobot.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class GetInfraredSensorRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.infraredPort = null;
    }
    else {
      if (initObj.hasOwnProperty('infraredPort')) {
        this.infraredPort = initObj.infraredPort
      }
      else {
        this.infraredPort = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetInfraredSensorRequest
    // Serialize message field [infraredPort]
    bufferOffset = _serializer.uint8(obj.infraredPort, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetInfraredSensorRequest
    let len;
    let data = new GetInfraredSensorRequest(null);
    // Deserialize message field [infraredPort]
    data.infraredPort = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/GetInfraredSensorRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b773c543edcf0d59db1a149cb28a1e80';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 infraredPort
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetInfraredSensorRequest(null);
    if (msg.infraredPort !== undefined) {
      resolved.infraredPort = msg.infraredPort;
    }
    else {
      resolved.infraredPort = 0
    }

    return resolved;
    }
};

class GetInfraredSensorResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.result = null;
      this.value = null;
    }
    else {
      if (initObj.hasOwnProperty('result')) {
        this.result = initObj.result
      }
      else {
        this.result = 0;
      }
      if (initObj.hasOwnProperty('value')) {
        this.value = initObj.value
      }
      else {
        this.value = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetInfraredSensorResponse
    // Serialize message field [result]
    bufferOffset = _serializer.int32(obj.result, buffer, bufferOffset);
    // Serialize message field [value]
    bufferOffset = _serializer.uint8(obj.value, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetInfraredSensorResponse
    let len;
    let data = new GetInfraredSensorResponse(null);
    // Deserialize message field [result]
    data.result = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [value]
    data.value = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 5;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/GetInfraredSensorResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '73a59c0cb161215c2b7c0a18034c4f90';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 result
    uint8 value
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetInfraredSensorResponse(null);
    if (msg.result !== undefined) {
      resolved.result = msg.result;
    }
    else {
      resolved.result = 0
    }

    if (msg.value !== undefined) {
      resolved.value = msg.value;
    }
    else {
      resolved.value = 0
    }

    return resolved;
    }
};

module.exports = {
  Request: GetInfraredSensorRequest,
  Response: GetInfraredSensorResponse,
  md5sum() { return '50c58c1cbfee32c97074de80535fc75d'; },
  datatype() { return 'dobot/GetInfraredSensor'; }
};
