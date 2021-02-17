# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dobot/motor_data.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class motor_data(genpy.Message):
  _md5sum = "ace88c459da6eff94928e461d29042b8"
  _type = "dobot/motor_data"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 timestamp
float64 requested_velocity
float64 velocity
float64 temperature
float64 torque
float64 current
float64 effective_voltage
float64 power_in
float64 acceleration
"""
  __slots__ = ['timestamp','requested_velocity','velocity','temperature','torque','current','effective_voltage','power_in','acceleration']
  _slot_types = ['float64','float64','float64','float64','float64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       timestamp,requested_velocity,velocity,temperature,torque,current,effective_voltage,power_in,acceleration

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(motor_data, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.timestamp is None:
        self.timestamp = 0.
      if self.requested_velocity is None:
        self.requested_velocity = 0.
      if self.velocity is None:
        self.velocity = 0.
      if self.temperature is None:
        self.temperature = 0.
      if self.torque is None:
        self.torque = 0.
      if self.current is None:
        self.current = 0.
      if self.effective_voltage is None:
        self.effective_voltage = 0.
      if self.power_in is None:
        self.power_in = 0.
      if self.acceleration is None:
        self.acceleration = 0.
    else:
      self.timestamp = 0.
      self.requested_velocity = 0.
      self.velocity = 0.
      self.temperature = 0.
      self.torque = 0.
      self.current = 0.
      self.effective_voltage = 0.
      self.power_in = 0.
      self.acceleration = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_9d().pack(_x.timestamp, _x.requested_velocity, _x.velocity, _x.temperature, _x.torque, _x.current, _x.effective_voltage, _x.power_in, _x.acceleration))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 72
      (_x.timestamp, _x.requested_velocity, _x.velocity, _x.temperature, _x.torque, _x.current, _x.effective_voltage, _x.power_in, _x.acceleration,) = _get_struct_9d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_9d().pack(_x.timestamp, _x.requested_velocity, _x.velocity, _x.temperature, _x.torque, _x.current, _x.effective_voltage, _x.power_in, _x.acceleration))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 72
      (_x.timestamp, _x.requested_velocity, _x.velocity, _x.temperature, _x.torque, _x.current, _x.effective_voltage, _x.power_in, _x.acceleration,) = _get_struct_9d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_9d = None
def _get_struct_9d():
    global _struct_9d
    if _struct_9d is None:
        _struct_9d = struct.Struct("<9d")
    return _struct_9d