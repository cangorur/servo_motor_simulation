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

class motor_data {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.timestamp = null;
      this.requested_velocity = null;
      this.velocity = null;
      this.temperature = null;
      this.torque = null;
      this.current = null;
      this.effective_voltage = null;
      this.power_in = null;
      this.acceleration = null;
    }
    else {
      if (initObj.hasOwnProperty('timestamp')) {
        this.timestamp = initObj.timestamp
      }
      else {
        this.timestamp = 0.0;
      }
      if (initObj.hasOwnProperty('requested_velocity')) {
        this.requested_velocity = initObj.requested_velocity
      }
      else {
        this.requested_velocity = 0.0;
      }
      if (initObj.hasOwnProperty('velocity')) {
        this.velocity = initObj.velocity
      }
      else {
        this.velocity = 0.0;
      }
      if (initObj.hasOwnProperty('temperature')) {
        this.temperature = initObj.temperature
      }
      else {
        this.temperature = 0.0;
      }
      if (initObj.hasOwnProperty('torque')) {
        this.torque = initObj.torque
      }
      else {
        this.torque = 0.0;
      }
      if (initObj.hasOwnProperty('current')) {
        this.current = initObj.current
      }
      else {
        this.current = 0.0;
      }
      if (initObj.hasOwnProperty('effective_voltage')) {
        this.effective_voltage = initObj.effective_voltage
      }
      else {
        this.effective_voltage = 0.0;
      }
      if (initObj.hasOwnProperty('power_in')) {
        this.power_in = initObj.power_in
      }
      else {
        this.power_in = 0.0;
      }
      if (initObj.hasOwnProperty('acceleration')) {
        this.acceleration = initObj.acceleration
      }
      else {
        this.acceleration = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type motor_data
    // Serialize message field [timestamp]
    bufferOffset = _serializer.float64(obj.timestamp, buffer, bufferOffset);
    // Serialize message field [requested_velocity]
    bufferOffset = _serializer.float64(obj.requested_velocity, buffer, bufferOffset);
    // Serialize message field [velocity]
    bufferOffset = _serializer.float64(obj.velocity, buffer, bufferOffset);
    // Serialize message field [temperature]
    bufferOffset = _serializer.float64(obj.temperature, buffer, bufferOffset);
    // Serialize message field [torque]
    bufferOffset = _serializer.float64(obj.torque, buffer, bufferOffset);
    // Serialize message field [current]
    bufferOffset = _serializer.float64(obj.current, buffer, bufferOffset);
    // Serialize message field [effective_voltage]
    bufferOffset = _serializer.float64(obj.effective_voltage, buffer, bufferOffset);
    // Serialize message field [power_in]
    bufferOffset = _serializer.float64(obj.power_in, buffer, bufferOffset);
    // Serialize message field [acceleration]
    bufferOffset = _serializer.float64(obj.acceleration, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type motor_data
    let len;
    let data = new motor_data(null);
    // Deserialize message field [timestamp]
    data.timestamp = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [requested_velocity]
    data.requested_velocity = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [velocity]
    data.velocity = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [temperature]
    data.temperature = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [torque]
    data.torque = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [current]
    data.current = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [effective_voltage]
    data.effective_voltage = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [power_in]
    data.power_in = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [acceleration]
    data.acceleration = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 72;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dobot/motor_data';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ace88c459da6eff94928e461d29042b8';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 timestamp
    float64 requested_velocity
    float64 velocity
    float64 temperature
    float64 torque
    float64 current
    float64 effective_voltage
    float64 power_in
    float64 acceleration
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new motor_data(null);
    if (msg.timestamp !== undefined) {
      resolved.timestamp = msg.timestamp;
    }
    else {
      resolved.timestamp = 0.0
    }

    if (msg.requested_velocity !== undefined) {
      resolved.requested_velocity = msg.requested_velocity;
    }
    else {
      resolved.requested_velocity = 0.0
    }

    if (msg.velocity !== undefined) {
      resolved.velocity = msg.velocity;
    }
    else {
      resolved.velocity = 0.0
    }

    if (msg.temperature !== undefined) {
      resolved.temperature = msg.temperature;
    }
    else {
      resolved.temperature = 0.0
    }

    if (msg.torque !== undefined) {
      resolved.torque = msg.torque;
    }
    else {
      resolved.torque = 0.0
    }

    if (msg.current !== undefined) {
      resolved.current = msg.current;
    }
    else {
      resolved.current = 0.0
    }

    if (msg.effective_voltage !== undefined) {
      resolved.effective_voltage = msg.effective_voltage;
    }
    else {
      resolved.effective_voltage = 0.0
    }

    if (msg.power_in !== undefined) {
      resolved.power_in = msg.power_in;
    }
    else {
      resolved.power_in = 0.0
    }

    if (msg.acceleration !== undefined) {
      resolved.acceleration = msg.acceleration;
    }
    else {
      resolved.acceleration = 0.0
    }

    return resolved;
    }
};

module.exports = motor_data;
