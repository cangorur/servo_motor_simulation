# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dobot/ReadRegRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ReadRegRequest(genpy.Message):
  _md5sum = "e0bc8ece5d942f70f5b4bbdc91f6175d"
  _type = "dobot/ReadRegRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int16 id
int16 reg_address
int16 data_length
"""
  __slots__ = ['id','reg_address','data_length']
  _slot_types = ['int16','int16','int16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,reg_address,data_length

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ReadRegRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.reg_address is None:
        self.reg_address = 0
      if self.data_length is None:
        self.data_length = 0
    else:
      self.id = 0
      self.reg_address = 0
      self.data_length = 0

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
      buff.write(_get_struct_3h().pack(_x.id, _x.reg_address, _x.data_length))
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
      end += 6
      (_x.id, _x.reg_address, _x.data_length,) = _get_struct_3h().unpack(str[start:end])
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
      buff.write(_get_struct_3h().pack(_x.id, _x.reg_address, _x.data_length))
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
      end += 6
      (_x.id, _x.reg_address, _x.data_length,) = _get_struct_3h().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3h = None
def _get_struct_3h():
    global _struct_3h
    if _struct_3h is None:
        _struct_3h = struct.Struct("<3h")
    return _struct_3h
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dobot/ReadRegResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ReadRegResponse(genpy.Message):
  _md5sum = "e23f13f94a8370e611d697cb5cac5588"
  _type = "dobot/ReadRegResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int16[] payload

"""
  __slots__ = ['payload']
  _slot_types = ['int16[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       payload

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ReadRegResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.payload is None:
        self.payload = []
    else:
      self.payload = []

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
      length = len(self.payload)
      buff.write(_struct_I.pack(length))
      pattern = '<%sh'%length
      buff.write(struct.pack(pattern, *self.payload))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sh'%length
      start = end
      end += struct.calcsize(pattern)
      self.payload = struct.unpack(pattern, str[start:end])
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
      length = len(self.payload)
      buff.write(_struct_I.pack(length))
      pattern = '<%sh'%length
      buff.write(self.payload.tostring())
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
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sh'%length
      start = end
      end += struct.calcsize(pattern)
      self.payload = numpy.frombuffer(str[start:end], dtype=numpy.int16, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
class ReadReg(object):
  _type          = 'dobot/ReadReg'
  _md5sum = 'bc6fd90ab0bfe4afd7a1535702e29a89'
  _request_class  = ReadRegRequest
  _response_class = ReadRegResponse
