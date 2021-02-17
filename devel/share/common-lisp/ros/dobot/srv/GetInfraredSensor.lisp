; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude GetInfraredSensor-request.msg.html

(cl:defclass <GetInfraredSensor-request> (roslisp-msg-protocol:ros-message)
  ((infraredPort
    :reader infraredPort
    :initarg :infraredPort
    :type cl:fixnum
    :initform 0))
)

(cl:defclass GetInfraredSensor-request (<GetInfraredSensor-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetInfraredSensor-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetInfraredSensor-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<GetInfraredSensor-request> is deprecated: use dobot-srv:GetInfraredSensor-request instead.")))

(cl:ensure-generic-function 'infraredPort-val :lambda-list '(m))
(cl:defmethod infraredPort-val ((m <GetInfraredSensor-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:infraredPort-val is deprecated.  Use dobot-srv:infraredPort instead.")
  (infraredPort m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetInfraredSensor-request>) ostream)
  "Serializes a message object of type '<GetInfraredSensor-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'infraredPort)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetInfraredSensor-request>) istream)
  "Deserializes a message object of type '<GetInfraredSensor-request>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'infraredPort)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetInfraredSensor-request>)))
  "Returns string type for a service object of type '<GetInfraredSensor-request>"
  "dobot/GetInfraredSensorRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetInfraredSensor-request)))
  "Returns string type for a service object of type 'GetInfraredSensor-request"
  "dobot/GetInfraredSensorRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetInfraredSensor-request>)))
  "Returns md5sum for a message object of type '<GetInfraredSensor-request>"
  "50c58c1cbfee32c97074de80535fc75d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetInfraredSensor-request)))
  "Returns md5sum for a message object of type 'GetInfraredSensor-request"
  "50c58c1cbfee32c97074de80535fc75d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetInfraredSensor-request>)))
  "Returns full string definition for message of type '<GetInfraredSensor-request>"
  (cl:format cl:nil "uint8 infraredPort~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetInfraredSensor-request)))
  "Returns full string definition for message of type 'GetInfraredSensor-request"
  (cl:format cl:nil "uint8 infraredPort~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetInfraredSensor-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetInfraredSensor-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetInfraredSensor-request
    (cl:cons ':infraredPort (infraredPort msg))
))
;//! \htmlinclude GetInfraredSensor-response.msg.html

(cl:defclass <GetInfraredSensor-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:integer
    :initform 0)
   (value
    :reader value
    :initarg :value
    :type cl:fixnum
    :initform 0))
)

(cl:defclass GetInfraredSensor-response (<GetInfraredSensor-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetInfraredSensor-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetInfraredSensor-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<GetInfraredSensor-response> is deprecated: use dobot-srv:GetInfraredSensor-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <GetInfraredSensor-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:result-val is deprecated.  Use dobot-srv:result instead.")
  (result m))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <GetInfraredSensor-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:value-val is deprecated.  Use dobot-srv:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetInfraredSensor-response>) ostream)
  "Serializes a message object of type '<GetInfraredSensor-response>"
  (cl:let* ((signed (cl:slot-value msg 'result)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetInfraredSensor-response>) istream)
  "Deserializes a message object of type '<GetInfraredSensor-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'result) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetInfraredSensor-response>)))
  "Returns string type for a service object of type '<GetInfraredSensor-response>"
  "dobot/GetInfraredSensorResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetInfraredSensor-response)))
  "Returns string type for a service object of type 'GetInfraredSensor-response"
  "dobot/GetInfraredSensorResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetInfraredSensor-response>)))
  "Returns md5sum for a message object of type '<GetInfraredSensor-response>"
  "50c58c1cbfee32c97074de80535fc75d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetInfraredSensor-response)))
  "Returns md5sum for a message object of type 'GetInfraredSensor-response"
  "50c58c1cbfee32c97074de80535fc75d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetInfraredSensor-response>)))
  "Returns full string definition for message of type '<GetInfraredSensor-response>"
  (cl:format cl:nil "int32 result~%uint8 value~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetInfraredSensor-response)))
  "Returns full string definition for message of type 'GetInfraredSensor-response"
  (cl:format cl:nil "int32 result~%uint8 value~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetInfraredSensor-response>))
  (cl:+ 0
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetInfraredSensor-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetInfraredSensor-response
    (cl:cons ':result (result msg))
    (cl:cons ':value (value msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetInfraredSensor)))
  'GetInfraredSensor-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetInfraredSensor)))
  'GetInfraredSensor-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetInfraredSensor)))
  "Returns string type for a service object of type '<GetInfraredSensor>"
  "dobot/GetInfraredSensor")