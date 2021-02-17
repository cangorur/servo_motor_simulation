; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude GetColorSensor-request.msg.html

(cl:defclass <GetColorSensor-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass GetColorSensor-request (<GetColorSensor-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetColorSensor-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetColorSensor-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<GetColorSensor-request> is deprecated: use dobot-srv:GetColorSensor-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetColorSensor-request>) ostream)
  "Serializes a message object of type '<GetColorSensor-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetColorSensor-request>) istream)
  "Deserializes a message object of type '<GetColorSensor-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetColorSensor-request>)))
  "Returns string type for a service object of type '<GetColorSensor-request>"
  "dobot/GetColorSensorRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetColorSensor-request)))
  "Returns string type for a service object of type 'GetColorSensor-request"
  "dobot/GetColorSensorRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetColorSensor-request>)))
  "Returns md5sum for a message object of type '<GetColorSensor-request>"
  "8245cb6d39e4a443eba0ed44524e8d92")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetColorSensor-request)))
  "Returns md5sum for a message object of type 'GetColorSensor-request"
  "8245cb6d39e4a443eba0ed44524e8d92")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetColorSensor-request>)))
  "Returns full string definition for message of type '<GetColorSensor-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetColorSensor-request)))
  "Returns full string definition for message of type 'GetColorSensor-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetColorSensor-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetColorSensor-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetColorSensor-request
))
;//! \htmlinclude GetColorSensor-response.msg.html

(cl:defclass <GetColorSensor-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:integer
    :initform 0)
   (value_r
    :reader value_r
    :initarg :value_r
    :type cl:fixnum
    :initform 0)
   (value_g
    :reader value_g
    :initarg :value_g
    :type cl:fixnum
    :initform 0)
   (value_b
    :reader value_b
    :initarg :value_b
    :type cl:fixnum
    :initform 0))
)

(cl:defclass GetColorSensor-response (<GetColorSensor-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetColorSensor-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetColorSensor-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<GetColorSensor-response> is deprecated: use dobot-srv:GetColorSensor-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <GetColorSensor-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:result-val is deprecated.  Use dobot-srv:result instead.")
  (result m))

(cl:ensure-generic-function 'value_r-val :lambda-list '(m))
(cl:defmethod value_r-val ((m <GetColorSensor-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:value_r-val is deprecated.  Use dobot-srv:value_r instead.")
  (value_r m))

(cl:ensure-generic-function 'value_g-val :lambda-list '(m))
(cl:defmethod value_g-val ((m <GetColorSensor-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:value_g-val is deprecated.  Use dobot-srv:value_g instead.")
  (value_g m))

(cl:ensure-generic-function 'value_b-val :lambda-list '(m))
(cl:defmethod value_b-val ((m <GetColorSensor-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:value_b-val is deprecated.  Use dobot-srv:value_b instead.")
  (value_b m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetColorSensor-response>) ostream)
  "Serializes a message object of type '<GetColorSensor-response>"
  (cl:let* ((signed (cl:slot-value msg 'result)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value_r)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value_g)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value_b)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetColorSensor-response>) istream)
  "Deserializes a message object of type '<GetColorSensor-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'result) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value_r)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value_g)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value_b)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetColorSensor-response>)))
  "Returns string type for a service object of type '<GetColorSensor-response>"
  "dobot/GetColorSensorResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetColorSensor-response)))
  "Returns string type for a service object of type 'GetColorSensor-response"
  "dobot/GetColorSensorResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetColorSensor-response>)))
  "Returns md5sum for a message object of type '<GetColorSensor-response>"
  "8245cb6d39e4a443eba0ed44524e8d92")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetColorSensor-response)))
  "Returns md5sum for a message object of type 'GetColorSensor-response"
  "8245cb6d39e4a443eba0ed44524e8d92")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetColorSensor-response>)))
  "Returns full string definition for message of type '<GetColorSensor-response>"
  (cl:format cl:nil "~%int32 result~%~%uint8 value_r~%~%uint8 value_g~%~%uint8 value_b~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetColorSensor-response)))
  "Returns full string definition for message of type 'GetColorSensor-response"
  (cl:format cl:nil "~%int32 result~%~%uint8 value_r~%~%uint8 value_g~%~%uint8 value_b~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetColorSensor-response>))
  (cl:+ 0
     4
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetColorSensor-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetColorSensor-response
    (cl:cons ':result (result msg))
    (cl:cons ':value_r (value_r msg))
    (cl:cons ':value_g (value_g msg))
    (cl:cons ':value_b (value_b msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetColorSensor)))
  'GetColorSensor-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetColorSensor)))
  'GetColorSensor-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetColorSensor)))
  "Returns string type for a service object of type '<GetColorSensor>"
  "dobot/GetColorSensor")