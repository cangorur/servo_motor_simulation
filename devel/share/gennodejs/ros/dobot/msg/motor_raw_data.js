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

class motor_raw_data {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.raw_timestamp = null;
      this.raw_requested_velocity = null;
      this.raw_velocity = null;
      this.raw_current = null;
      this.raw_temperature = null;
      this.raw_supply_voltage = null;
      this.raw_pwm = null;
      this.raw_torque = null;
      this.raw_acceleration = null;
    }
    else {
      if (initObj.hasOwnProperty('raw_timestamp')) {
        this.raw_timestamp = initObj.raw_timestamp
      }
      else {
        this.raw_timestamp = 0.0;
      }
      if (initObj.hasOwnProperty('raw_requested_velocity')) {
        this.raw_requested_velocity = initObj.raw_requested_velocity
      }
      else {
        this.raw_requested_velocity = 0.0;
      }
      if (initObj.hasOwnProperty('raw_velocity')) {
        this.raw_velocity = initObj.raw_velocity
      }
      else {
        this.raw_velocity = 0.0;
      }
      if (initObj.hasOwnProperty('raw_current')) {
        this.raw_current = initObj.raw_current
      }
      else {
        this.raw_current = 0.0;
      }
      if (initObj.hasOwnProperty('raw_temperature')) {
        this.raw_temperature = initObj.raw_temperature
      }
      else {
        this.raw_temperature = 0.0;
      }
      if (initObj.hasOwnProperty('raw_supply_voltage')) {
        this.raw_supply_voltage = initObj.raw_supply_voltage
      }
      else {
        this.raw_supply_voltage = 0.0;
      }
      if (initObj.hasOwnProperty('raw_pwm')) {
        this.raw_pwm = initObj.raw_pwm
      }
      else {
        this.raw_pwm = 0.0;
      }
      if (initObj.hasOwnProperty('raw_torque')) {
        this.raw_torque = initObj.raw_torque
      }
      else {
        this.raw_torque = 0.0;
      }
      if (initObj.hasOwnProperty('raw_acceleration')) {
        this.raw_acceleration = initObj.raw_acceleration
      }
      else {
        this.raw_acceleration = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type motor_raw_data
    // Serialize message field [raw_timestamp]
    bufferOffset = _serializer.float64(obj.raw_timestamp, buffer, bufferOffset);
    // Serialize message field [raw_requested_velocity]
    bufferOffset = _serializer.float64(obj.raw_requested_velocity, buffer, bufferOffset);
    // Serialize message field [raw_velocity]
    bufferOffset = _serializer.float64(obj.raw_velocity, buffer, bufferOffset);
    // Serialize message field [raw_current]
    bufferOffset = _serializer.float64(obj.raw_current, buffer, bufferOffset);
    // Serialize message field [raw_temperature]
    bufferOffset = _serializer.float64(obj.raw_temperature, buffer, bufferOffset);
    // Serialize message field [raw_supply_voltage]
    bufferOffset = _serializer.float64(obj.raw_supply_voltage, buffer, bufferOffset);
    // Serialize message field [raw_pwm]
    bufferOffset = _serializer.float64(obj.raw_pwm, buffer, bufferOffset);
    // Serialize message field [raw_torque]
    bufferOffset = _serializer.float64(obj.raw_torque, buffer, bufferOffset);
    // Serialize message field [raw_acceleration]
    bufferOffset = _serializer.float64(obj.raw_acceleration, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type motor_raw_data
    let len;
    let data = new motor_raw_data(null);
    // Deserialize message field [raw_timestamp]
    data.raw_timestamp = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [raw_requested_velocity]
    data.raw_requested_velocity = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [raw_velocity]
    data.raw_velocity = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [raw_current]
    data.raw_current = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [raw_temperature]
    data.raw_temperature = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [raw_supply_voltage]
    data.raw_supply_voltage = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [raw_pwm]
    data.raw_pwm = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [raw_torque]
    data.raw_torque = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [raw_acceleration]
    data.raw_acceleration = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 72;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dobot/motor_raw_data';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '584bddd3c7b7f3d0e01f4bcf0da3649c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 raw_timestamp
    float64 raw_requested_velocity
    float64 raw_velocity
    float64 raw_current
    float64 raw_temperature
    float64 raw_supply_voltage
    float64 raw_pwm
    float64 raw_torque
    float64 raw_acceleration
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new motor_raw_data(null);
    if (msg.raw_timestamp !== undefined) {
      resolved.raw_timestamp = msg.raw_timestamp;
    }
    else {
      resolved.raw_timestamp = 0.0
    }

    if (msg.raw_requested_velocity !== undefined) {
      resolved.raw_requested_velocity = msg.raw_requested_velocity;
    }
    else {
      resolved.raw_requested_velocity = 0.0
    }

    if (msg.raw_velocity !== undefined) {
      resolved.raw_velocity = msg.raw_velocity;
    }
    else {
      resolved.raw_velocity = 0.0
    }

    if (msg.raw_current !== undefined) {
      resolved.raw_current = msg.raw_current;
    }
    else {
      resolved.raw_current = 0.0
    }

    if (msg.raw_temperature !== undefined) {
      resolved.raw_temperature = msg.raw_temperature;
    }
    else {
      resolved.raw_temperature = 0.0
    }

    if (msg.raw_supply_voltage !== undefined) {
      resolved.raw_supply_voltage = msg.raw_supply_voltage;
    }
    else {
      resolved.raw_supply_voltage = 0.0
    }

    if (msg.raw_pwm !== undefined) {
      resolved.raw_pwm = msg.raw_pwm;
    }
    else {
      resolved.raw_pwm = 0.0
    }

    if (msg.raw_torque !== undefined) {
      resolved.raw_torque = msg.raw_torque;
    }
    else {
      resolved.raw_torque = 0.0
    }

    if (msg.raw_acceleration !== undefined) {
      resolved.raw_acceleration = msg.raw_acceleration;
    }
    else {
      resolved.raw_acceleration = 0.0
    }

    return resolved;
    }
};

module.exports = motor_raw_data;
