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

class GenerateAbnormalTorqueRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.isEnabled = null;
      this.index = null;
      this.type = null;
      this.param1 = null;
      this.param2 = null;
      this.holdTime = null;
    }
    else {
      if (initObj.hasOwnProperty('isEnabled')) {
        this.isEnabled = initObj.isEnabled
      }
      else {
        this.isEnabled = false;
      }
      if (initObj.hasOwnProperty('index')) {
        this.index = initObj.index
      }
      else {
        this.index = 0;
      }
      if (initObj.hasOwnProperty('type')) {
        this.type = initObj.type
      }
      else {
        this.type = '';
      }
      if (initObj.hasOwnProperty('param1')) {
        this.param1 = initObj.param1
      }
      else {
        this.param1 = 0.0;
      }
      if (initObj.hasOwnProperty('param2')) {
        this.param2 = initObj.param2
      }
      else {
        this.param2 = 0.0;
      }
      if (initObj.hasOwnProperty('holdTime')) {
        this.holdTime = initObj.holdTime
      }
      else {
        this.holdTime = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GenerateAbnormalTorqueRequest
    // Serialize message field [isEnabled]
    bufferOffset = _serializer.bool(obj.isEnabled, buffer, bufferOffset);
    // Serialize message field [index]
    bufferOffset = _serializer.int8(obj.index, buffer, bufferOffset);
    // Serialize message field [type]
    bufferOffset = _serializer.string(obj.type, buffer, bufferOffset);
    // Serialize message field [param1]
    bufferOffset = _serializer.float32(obj.param1, buffer, bufferOffset);
    // Serialize message field [param2]
    bufferOffset = _serializer.float32(obj.param2, buffer, bufferOffset);
    // Serialize message field [holdTime]
    bufferOffset = _serializer.float32(obj.holdTime, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GenerateAbnormalTorqueRequest
    let len;
    let data = new GenerateAbnormalTorqueRequest(null);
    // Deserialize message field [isEnabled]
    data.isEnabled = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [index]
    data.index = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [type]
    data.type = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [param1]
    data.param1 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [param2]
    data.param2 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [holdTime]
    data.holdTime = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.type.length;
    return length + 18;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/GenerateAbnormalTorqueRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'bd1d1dfab5f38fb34df715dfcf122c5d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool isEnabled
    int8 index
    string type
    float32 param1
    float32 param2
    float32 holdTime
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GenerateAbnormalTorqueRequest(null);
    if (msg.isEnabled !== undefined) {
      resolved.isEnabled = msg.isEnabled;
    }
    else {
      resolved.isEnabled = false
    }

    if (msg.index !== undefined) {
      resolved.index = msg.index;
    }
    else {
      resolved.index = 0
    }

    if (msg.type !== undefined) {
      resolved.type = msg.type;
    }
    else {
      resolved.type = ''
    }

    if (msg.param1 !== undefined) {
      resolved.param1 = msg.param1;
    }
    else {
      resolved.param1 = 0.0
    }

    if (msg.param2 !== undefined) {
      resolved.param2 = msg.param2;
    }
    else {
      resolved.param2 = 0.0
    }

    if (msg.holdTime !== undefined) {
      resolved.holdTime = msg.holdTime;
    }
    else {
      resolved.holdTime = 0.0
    }

    return resolved;
    }
};

class GenerateAbnormalTorqueResponse {
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
    // Serializes a message object of type GenerateAbnormalTorqueResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GenerateAbnormalTorqueResponse
    let len;
    let data = new GenerateAbnormalTorqueResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/GenerateAbnormalTorqueResponse';
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
    const resolved = new GenerateAbnormalTorqueResponse(null);
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
  Request: GenerateAbnormalTorqueRequest,
  Response: GenerateAbnormalTorqueResponse,
  md5sum() { return '44f381e1746ec656377c4e7f22e5a647'; },
  datatype() { return 'dobot/GenerateAbnormalTorque'; }
};
