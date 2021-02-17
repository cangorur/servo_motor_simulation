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

class ContMotorControlRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.index = null;
      this.isEnabled = null;
      this.speed = null;
      this.isQueued = null;
    }
    else {
      if (initObj.hasOwnProperty('index')) {
        this.index = initObj.index
      }
      else {
        this.index = 0;
      }
      if (initObj.hasOwnProperty('isEnabled')) {
        this.isEnabled = initObj.isEnabled
      }
      else {
        this.isEnabled = 0;
      }
      if (initObj.hasOwnProperty('speed')) {
        this.speed = initObj.speed
      }
      else {
        this.speed = 0.0;
      }
      if (initObj.hasOwnProperty('isQueued')) {
        this.isQueued = initObj.isQueued
      }
      else {
        this.isQueued = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ContMotorControlRequest
    // Serialize message field [index]
    bufferOffset = _serializer.uint8(obj.index, buffer, bufferOffset);
    // Serialize message field [isEnabled]
    bufferOffset = _serializer.uint8(obj.isEnabled, buffer, bufferOffset);
    // Serialize message field [speed]
    bufferOffset = _serializer.float32(obj.speed, buffer, bufferOffset);
    // Serialize message field [isQueued]
    bufferOffset = _serializer.bool(obj.isQueued, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ContMotorControlRequest
    let len;
    let data = new ContMotorControlRequest(null);
    // Deserialize message field [index]
    data.index = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [isEnabled]
    data.isEnabled = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [speed]
    data.speed = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [isQueued]
    data.isQueued = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 7;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/ContMotorControlRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a0b8b69832b27e55b0a75bdb6a06ce14';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    uint8 index
    
    uint8 isEnabled
    
    float32 speed
    bool isQueued
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ContMotorControlRequest(null);
    if (msg.index !== undefined) {
      resolved.index = msg.index;
    }
    else {
      resolved.index = 0
    }

    if (msg.isEnabled !== undefined) {
      resolved.isEnabled = msg.isEnabled;
    }
    else {
      resolved.isEnabled = 0
    }

    if (msg.speed !== undefined) {
      resolved.speed = msg.speed;
    }
    else {
      resolved.speed = 0.0
    }

    if (msg.isQueued !== undefined) {
      resolved.isQueued = msg.isQueued;
    }
    else {
      resolved.isQueued = false
    }

    return resolved;
    }
};

class ContMotorControlResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.result = null;
    }
    else {
      if (initObj.hasOwnProperty('result')) {
        this.result = initObj.result
      }
      else {
        this.result = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ContMotorControlResponse
    // Serialize message field [result]
    bufferOffset = _serializer.int32(obj.result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ContMotorControlResponse
    let len;
    let data = new ContMotorControlResponse(null);
    // Deserialize message field [result]
    data.result = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/ContMotorControlResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '034a8e20d6a306665e3a5b340fab3f09';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 result
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ContMotorControlResponse(null);
    if (msg.result !== undefined) {
      resolved.result = msg.result;
    }
    else {
      resolved.result = 0
    }

    return resolved;
    }
};

module.exports = {
  Request: ContMotorControlRequest,
  Response: ContMotorControlResponse,
  md5sum() { return '83e4a796d51a754bc20fc8ddae5d173f'; },
  datatype() { return 'dobot/ContMotorControl'; }
};
