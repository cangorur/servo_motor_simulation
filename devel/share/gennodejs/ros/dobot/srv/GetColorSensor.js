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

class GetColorSensorRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetColorSensorRequest
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetColorSensorRequest
    let len;
    let data = new GetColorSensorRequest(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/GetColorSensorRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetColorSensorRequest(null);
    return resolved;
    }
};

class GetColorSensorResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.result = null;
      this.value_r = null;
      this.value_g = null;
      this.value_b = null;
    }
    else {
      if (initObj.hasOwnProperty('result')) {
        this.result = initObj.result
      }
      else {
        this.result = 0;
      }
      if (initObj.hasOwnProperty('value_r')) {
        this.value_r = initObj.value_r
      }
      else {
        this.value_r = 0;
      }
      if (initObj.hasOwnProperty('value_g')) {
        this.value_g = initObj.value_g
      }
      else {
        this.value_g = 0;
      }
      if (initObj.hasOwnProperty('value_b')) {
        this.value_b = initObj.value_b
      }
      else {
        this.value_b = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetColorSensorResponse
    // Serialize message field [result]
    bufferOffset = _serializer.int32(obj.result, buffer, bufferOffset);
    // Serialize message field [value_r]
    bufferOffset = _serializer.uint8(obj.value_r, buffer, bufferOffset);
    // Serialize message field [value_g]
    bufferOffset = _serializer.uint8(obj.value_g, buffer, bufferOffset);
    // Serialize message field [value_b]
    bufferOffset = _serializer.uint8(obj.value_b, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetColorSensorResponse
    let len;
    let data = new GetColorSensorResponse(null);
    // Deserialize message field [result]
    data.result = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [value_r]
    data.value_r = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [value_g]
    data.value_g = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [value_b]
    data.value_b = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 7;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/GetColorSensorResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8245cb6d39e4a443eba0ed44524e8d92';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    int32 result
    
    uint8 value_r
    
    uint8 value_g
    
    uint8 value_b
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetColorSensorResponse(null);
    if (msg.result !== undefined) {
      resolved.result = msg.result;
    }
    else {
      resolved.result = 0
    }

    if (msg.value_r !== undefined) {
      resolved.value_r = msg.value_r;
    }
    else {
      resolved.value_r = 0
    }

    if (msg.value_g !== undefined) {
      resolved.value_g = msg.value_g;
    }
    else {
      resolved.value_g = 0
    }

    if (msg.value_b !== undefined) {
      resolved.value_b = msg.value_b;
    }
    else {
      resolved.value_b = 0
    }

    return resolved;
    }
};

module.exports = {
  Request: GetColorSensorRequest,
  Response: GetColorSensorResponse,
  md5sum() { return '8245cb6d39e4a443eba0ed44524e8d92'; },
  datatype() { return 'dobot/GetColorSensor'; }
};
