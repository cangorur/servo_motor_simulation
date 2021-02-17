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

class GenerateNormalTorqueRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.isEnabled = null;
      this.index = null;
      this.torque = null;
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
      if (initObj.hasOwnProperty('torque')) {
        this.torque = initObj.torque
      }
      else {
        this.torque = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GenerateNormalTorqueRequest
    // Serialize message field [isEnabled]
    bufferOffset = _serializer.bool(obj.isEnabled, buffer, bufferOffset);
    // Serialize message field [index]
    bufferOffset = _serializer.int8(obj.index, buffer, bufferOffset);
    // Serialize message field [torque]
    bufferOffset = _serializer.float32(obj.torque, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GenerateNormalTorqueRequest
    let len;
    let data = new GenerateNormalTorqueRequest(null);
    // Deserialize message field [isEnabled]
    data.isEnabled = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [index]
    data.index = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [torque]
    data.torque = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 6;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/GenerateNormalTorqueRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9af52b90c0d9f1d32414cf7daf27ee78';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool isEnabled
    int8 index
    float32 torque
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GenerateNormalTorqueRequest(null);
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

    if (msg.torque !== undefined) {
      resolved.torque = msg.torque;
    }
    else {
      resolved.torque = 0.0
    }

    return resolved;
    }
};

class GenerateNormalTorqueResponse {
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
    // Serializes a message object of type GenerateNormalTorqueResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GenerateNormalTorqueResponse
    let len;
    let data = new GenerateNormalTorqueResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/GenerateNormalTorqueResponse';
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
    const resolved = new GenerateNormalTorqueResponse(null);
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
  Request: GenerateNormalTorqueRequest,
  Response: GenerateNormalTorqueResponse,
  md5sum() { return '614573f1304141bc4784e7cdb5102fdb'; },
  datatype() { return 'dobot/GenerateNormalTorque'; }
};
