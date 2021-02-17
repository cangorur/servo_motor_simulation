// Auto-generated. Do not edit!

// (in-package dobot.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class pid_control_data {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.power_real = null;
      this.power_calc = null;
      this.speed_min = null;
      this.speed_max = null;
    }
    else {
      if (initObj.hasOwnProperty('power_real')) {
        this.power_real = initObj.power_real
      }
      else {
        this.power_real = 0.0;
      }
      if (initObj.hasOwnProperty('power_calc')) {
        this.power_calc = initObj.power_calc
      }
      else {
        this.power_calc = 0.0;
      }
      if (initObj.hasOwnProperty('speed_min')) {
        this.speed_min = initObj.speed_min
      }
      else {
        this.speed_min = 0.0;
      }
      if (initObj.hasOwnProperty('speed_max')) {
        this.speed_max = initObj.speed_max
      }
      else {
        this.speed_max = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type pid_control_data
    // Serialize message field [power_real]
    bufferOffset = _serializer.float32(obj.power_real, buffer, bufferOffset);
    // Serialize message field [power_calc]
    bufferOffset = _serializer.float32(obj.power_calc, buffer, bufferOffset);
    // Serialize message field [speed_min]
    bufferOffset = _serializer.float32(obj.speed_min, buffer, bufferOffset);
    // Serialize message field [speed_max]
    bufferOffset = _serializer.float32(obj.speed_max, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type pid_control_data
    let len;
    let data = new pid_control_data(null);
    // Deserialize message field [power_real]
    data.power_real = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [power_calc]
    data.power_calc = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [speed_min]
    data.speed_min = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [speed_max]
    data.speed_max = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 16;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dobot/pid_control_data';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4cad1da3b889b346f0b6364044c5116b';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 power_real
    float32 power_calc
    float32 speed_min
    float32 speed_max
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new pid_control_data(null);
    if (msg.power_real !== undefined) {
      resolved.power_real = msg.power_real;
    }
    else {
      resolved.power_real = 0.0
    }

    if (msg.power_calc !== undefined) {
      resolved.power_calc = msg.power_calc;
    }
    else {
      resolved.power_calc = 0.0
    }

    if (msg.speed_min !== undefined) {
      resolved.speed_min = msg.speed_min;
    }
    else {
      resolved.speed_min = 0.0
    }

    if (msg.speed_max !== undefined) {
      resolved.speed_max = msg.speed_max;
    }
    else {
      resolved.speed_max = 0.0
    }

    return resolved;
    }
};

module.exports = pid_control_data;
