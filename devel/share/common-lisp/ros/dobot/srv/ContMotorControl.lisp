; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude ContMotorControl-request.msg.html

(cl:defclass <ContMotorControl-request> (roslisp-msg-protocol:ros-message)
  ((index
    :reader index
    :initarg :index
    :type cl:fixnum
    :initform 0)
   (isEnabled
    :reader isEnabled
    :initarg :isEnabled
    :type cl:fixnum
    :initform 0)
   (speed
    :reader speed
    :initarg :speed
    :type cl:float
    :initform 0.0)
   (isQueued
    :reader isQueued
    :initarg :isQueued
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass ContMotorControl-request (<ContMotorControl-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ContMotorControl-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ContMotorControl-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<ContMotorControl-request> is deprecated: use dobot-srv:ContMotorControl-request instead.")))

(cl:ensure-generic-function 'index-val :lambda-list '(m))
(cl:defmethod index-val ((m <ContMotorControl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:index-val is deprecated.  Use dobot-srv:index instead.")
  (index m))

(cl:ensure-generic-function 'isEnabled-val :lambda-list '(m))
(cl:defmethod isEnabled-val ((m <ContMotorControl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:isEnabled-val is deprecated.  Use dobot-srv:isEnabled instead.")
  (isEnabled m))

(cl:ensure-generic-function 'speed-val :lambda-list '(m))
(cl:defmethod speed-val ((m <ContMotorControl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:speed-val is deprecated.  Use dobot-srv:speed instead.")
  (speed m))

(cl:ensure-generic-function 'isQueued-val :lambda-list '(m))
(cl:defmethod isQueued-val ((m <ContMotorControl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:isQueued-val is deprecated.  Use dobot-srv:isQueued instead.")
  (isQueued m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ContMotorControl-request>) ostream)
  "Serializes a message object of type '<ContMotorControl-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'index)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'isEnabled)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'isQueued) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ContMotorControl-request>) istream)
  "Deserializes a message object of type '<ContMotorControl-request>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'index)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'isEnabled)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'speed) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:slot-value msg 'isQueued) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ContMotorControl-request>)))
  "Returns string type for a service object of type '<ContMotorControl-request>"
  "dobot/ContMotorControlRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ContMotorControl-request)))
  "Returns string type for a service object of type 'ContMotorControl-request"
  "dobot/ContMotorControlRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ContMotorControl-request>)))
  "Returns md5sum for a message object of type '<ContMotorControl-request>"
  "83e4a796d51a754bc20fc8ddae5d173f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ContMotorControl-request)))
  "Returns md5sum for a message object of type 'ContMotorControl-request"
  "83e4a796d51a754bc20fc8ddae5d173f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ContMotorControl-request>)))
  "Returns full string definition for message of type '<ContMotorControl-request>"
  (cl:format cl:nil "~%uint8 index~%~%uint8 isEnabled~%~%float32 speed~%bool isQueued~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ContMotorControl-request)))
  "Returns full string definition for message of type 'ContMotorControl-request"
  (cl:format cl:nil "~%uint8 index~%~%uint8 isEnabled~%~%float32 speed~%bool isQueued~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ContMotorControl-request>))
  (cl:+ 0
     1
     1
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ContMotorControl-request>))
  "Converts a ROS message object to a list"
  (cl:list 'ContMotorControl-request
    (cl:cons ':index (index msg))
    (cl:cons ':isEnabled (isEnabled msg))
    (cl:cons ':speed (speed msg))
    (cl:cons ':isQueued (isQueued msg))
))
;//! \htmlinclude ContMotorControl-response.msg.html

(cl:defclass <ContMotorControl-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:integer
    :initform 0))
)

(cl:defclass ContMotorControl-response (<ContMotorControl-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ContMotorControl-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ContMotorControl-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<ContMotorControl-response> is deprecated: use dobot-srv:ContMotorControl-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <ContMotorControl-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:result-val is deprecated.  Use dobot-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ContMotorControl-response>) ostream)
  "Serializes a message object of type '<ContMotorControl-response>"
  (cl:let* ((signed (cl:slot-value msg 'result)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ContMotorControl-response>) istream)
  "Deserializes a message object of type '<ContMotorControl-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'result) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ContMotorControl-response>)))
  "Returns string type for a service object of type '<ContMotorControl-response>"
  "dobot/ContMotorControlResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ContMotorControl-response)))
  "Returns string type for a service object of type 'ContMotorControl-response"
  "dobot/ContMotorControlResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ContMotorControl-response>)))
  "Returns md5sum for a message object of type '<ContMotorControl-response>"
  "83e4a796d51a754bc20fc8ddae5d173f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ContMotorControl-response)))
  "Returns md5sum for a message object of type 'ContMotorControl-response"
  "83e4a796d51a754bc20fc8ddae5d173f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ContMotorControl-response>)))
  "Returns full string definition for message of type '<ContMotorControl-response>"
  (cl:format cl:nil "int32 result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ContMotorControl-response)))
  "Returns full string definition for message of type 'ContMotorControl-response"
  (cl:format cl:nil "int32 result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ContMotorControl-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ContMotorControl-response>))
  "Converts a ROS message object to a list"
  (cl:list 'ContMotorControl-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'ContMotorControl)))
  'ContMotorControl-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'ContMotorControl)))
  'ContMotorControl-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ContMotorControl)))
  "Returns string type for a service object of type '<ContMotorControl>"
  "dobot/ContMotorControl")