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

class ReadRegRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.id = null;
      this.reg_address = null;
      this.data_length = null;
    }
    else {
      if (initObj.hasOwnProperty('id')) {
        this.id = initObj.id
      }
      else {
        this.id = 0;
      }
      if (initObj.hasOwnProperty('reg_address')) {
        this.reg_address = initObj.reg_address
      }
      else {
        this.reg_address = 0;
      }
      if (initObj.hasOwnProperty('data_length')) {
        this.data_length = initObj.data_length
      }
      else {
        this.data_length = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ReadRegRequest
    // Serialize message field [id]
    bufferOffset = _serializer.int16(obj.id, buffer, bufferOffset);
    // Serialize message field [reg_address]
    bufferOffset = _serializer.int16(obj.reg_address, buffer, bufferOffset);
    // Serialize message field [data_length]
    bufferOffset = _serializer.int16(obj.data_length, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ReadRegRequest
    let len;
    let data = new ReadRegRequest(null);
    // Deserialize message field [id]
    data.id = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [reg_address]
    data.reg_address = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [data_length]
    data.data_length = _deserializer.int16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 6;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/ReadRegRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e0bc8ece5d942f70f5b4bbdc91f6175d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int16 id
    int16 reg_address
    int16 data_length
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ReadRegRequest(null);
    if (msg.id !== undefined) {
      resolved.id = msg.id;
    }
    else {
      resolved.id = 0
    }

    if (msg.reg_address !== undefined) {
      resolved.reg_address = msg.reg_address;
    }
    else {
      resolved.reg_address = 0
    }

    if (msg.data_length !== undefined) {
      resolved.data_length = msg.data_length;
    }
    else {
      resolved.data_length = 0
    }

    return resolved;
    }
};

class ReadRegResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.payload = null;
    }
    else {
      if (initObj.hasOwnProperty('payload')) {
        this.payload = initObj.payload
      }
      else {
        this.payload = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ReadRegResponse
    // Serialize message field [payload]
    bufferOffset = _arraySerializer.int16(obj.payload, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ReadRegResponse
    let len;
    let data = new ReadRegResponse(null);
    // Deserialize message field [payload]
    data.payload = _arrayDeserializer.int16(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 2 * object.payload.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot/ReadRegResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e23f13f94a8370e611d697cb5cac5588';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int16[] payload
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ReadRegResponse(null);
    if (msg.payload !== undefined) {
      resolved.payload = msg.payload;
    }
    else {
      resolved.payload = []
    }

    return resolved;
    }
};

module.exports = {
  Request: ReadRegRequest,
  Response: ReadRegResponse,
  md5sum() { return 'bc6fd90ab0bfe4afd7a1535702e29a89'; },
  datatype() { return 'dobot/ReadReg'; }
};
