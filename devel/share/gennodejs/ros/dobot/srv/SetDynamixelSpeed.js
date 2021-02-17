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

class SetDynamixelSpeedRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.isEnabled = null;
      this.speed = null;
    }
    else {
      if (initObj.hasOwnProperty('isEnabled')) {
        this.isEnabled = initObj.isEnabled
      }
      else {
        this.isEnabled = false;
      }
      if (initObj.hasOwnProperty('speed')) {
        this.speed = initObj.speed
      }
      else {
        this.speed = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetDynamixelSpeedRequest
    // Serialize message field [isEnabled]
    bufferOffset = _serializer.bool(obj.isEnabled, buffer, bufferOffset);
    // Serialize message field [speed]
    bufferOffset = _serializer.float64(obj.speed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetDynamixelSpeedRequest
    let len;
    let data = new SetDynamixelSpeedRequest(null);
    // Deserialize message field [isEnabled]
    data.isEnabled = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [speed]
    data.speed = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 9;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/SetDynamixelSpeedRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '35dd5d1dbccecc83a105549701815d3f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool isEnabled
    float64 speed
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetDynamixelSpeedRequest(null);
    if (msg.isEnabled !== undefined) {
      resolved.isEnabled = msg.isEnabled;
    }
    else {
      resolved.isEnabled = false
    }

    if (msg.speed !== undefined) {
      resolved.speed = msg.speed;
    }
    else {
      resolved.speed = 0.0
    }

    return resolved;
    }
};

class SetDynamixelSpeedResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.success = null;
    }
    else {
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetDynamixelSpeedResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetDynamixelSpeedResponse
    let len;
    let data = new SetDynamixelSpeedResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/SetDynamixelSpeedResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '358e233cde0c8a8bcfea4ce193f8fc15';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool success
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetDynamixelSpeedResponse(null);
    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    return resolved;
    }
};

module.exports = {
  Request: SetDynamixelSpeedRequest,
  Response: SetDynamixelSpeedResponse,
  md5sum() { return '33258add9094c00c2480650dfbe4cddc'; },
  datatype() { return 'dobot/SetDynamixelSpeed'; }
};
