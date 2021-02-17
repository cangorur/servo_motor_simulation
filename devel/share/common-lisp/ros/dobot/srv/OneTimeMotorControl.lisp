; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude OneTimeMotorControl-request.msg.html

(cl:defclass <OneTimeMotorControl-request> (roslisp-msg-protocol:ros-message)
  ((isOn
    :reader isOn
    :initarg :isOn
    :type cl:fixnum
    :initform 0)
   (index
    :reader index
    :initarg :index
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

(cl:defclass OneTimeMotorControl-request (<OneTimeMotorControl-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <OneTimeMotorControl-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'OneTimeMotorControl-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<OneTimeMotorControl-request> is deprecated: use dobot-srv:OneTimeMotorControl-request instead.")))

(cl:ensure-generic-function 'isOn-val :lambda-list '(m))
(cl:defmethod isOn-val ((m <OneTimeMotorControl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:isOn-val is deprecated.  Use dobot-srv:isOn instead.")
  (isOn m))

(cl:ensure-generic-function 'index-val :lambda-list '(m))
(cl:defmethod index-val ((m <OneTimeMotorControl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:index-val is deprecated.  Use dobot-srv:index instead.")
  (index m))

(cl:ensure-generic-function 'speed-val :lambda-list '(m))
(cl:defmethod speed-val ((m <OneTimeMotorControl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:speed-val is deprecated.  Use dobot-srv:speed instead.")
  (speed m))

(cl:ensure-generic-function 'isQueued-val :lambda-list '(m))
(cl:defmethod isQueued-val ((m <OneTimeMotorControl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:isQueued-val is deprecated.  Use dobot-srv:isQueued instead.")
  (isQueued m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <OneTimeMotorControl-request>) ostream)
  "Serializes a message object of type '<OneTimeMotorControl-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'isOn)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'index)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'isQueued) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <OneTimeMotorControl-request>) istream)
  "Deserializes a message object of type '<OneTimeMotorControl-request>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'isOn)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'index)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'speed) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:slot-value msg 'isQueued) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<OneTimeMotorControl-request>)))
  "Returns string type for a service object of type '<OneTimeMotorControl-request>"
  "dobot/OneTimeMotorControlRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'OneTimeMotorControl-request)))
  "Returns string type for a service object of type 'OneTimeMotorControl-request"
  "dobot/OneTimeMotorControlRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<OneTimeMotorControl-request>)))
  "Returns md5sum for a message object of type '<OneTimeMotorControl-request>"
  "5ea0a2786a30f3b5a13cda84a619c75a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'OneTimeMotorControl-request)))
  "Returns md5sum for a message object of type 'OneTimeMotorControl-request"
  "5ea0a2786a30f3b5a13cda84a619c75a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<OneTimeMotorControl-request>)))
  "Returns full string definition for message of type '<OneTimeMotorControl-request>"
  (cl:format cl:nil "~%uint8 isOn~%~%uint8 index~%~%float32 speed~%bool isQueued~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'OneTimeMotorControl-request)))
  "Returns full string definition for message of type 'OneTimeMotorControl-request"
  (cl:format cl:nil "~%uint8 isOn~%~%uint8 index~%~%float32 speed~%bool isQueued~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <OneTimeMotorControl-request>))
  (cl:+ 0
     1
     1
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <OneTimeMotorControl-request>))
  "Converts a ROS message object to a list"
  (cl:list 'OneTimeMotorControl-request
    (cl:cons ':isOn (isOn msg))
    (cl:cons ':index (index msg))
    (cl:cons ':speed (speed msg))
    (cl:cons ':isQueued (isQueued msg))
))
;//! \htmlinclude OneTimeMotorControl-response.msg.html

(cl:defclass <OneTimeMotorControl-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:integer
    :initform 0))
)

(cl:defclass OneTimeMotorControl-response (<OneTimeMotorControl-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <OneTimeMotorControl-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'OneTimeMotorControl-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<OneTimeMotorControl-response> is deprecated: use dobot-srv:OneTimeMotorControl-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <OneTimeMotorControl-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:result-val is deprecated.  Use dobot-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <OneTimeMotorControl-response>) ostream)
  "Serializes a message object of type '<OneTimeMotorControl-response>"
  (cl:let* ((signed (cl:slot-value msg 'result)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <OneTimeMotorControl-response>) istream)
  "Deserializes a message object of type '<OneTimeMotorControl-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'result) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<OneTimeMotorControl-response>)))
  "Returns string type for a service object of type '<OneTimeMotorControl-response>"
  "dobot/OneTimeMotorControlResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'OneTimeMotorControl-response)))
  "Returns string type for a service object of type 'OneTimeMotorControl-response"
  "dobot/OneTimeMotorControlResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<OneTimeMotorControl-response>)))
  "Returns md5sum for a message object of type '<OneTimeMotorControl-response>"
  "5ea0a2786a30f3b5a13cda84a619c75a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'OneTimeMotorControl-response)))
  "Returns md5sum for a message object of type 'OneTimeMotorControl-response"
  "5ea0a2786a30f3b5a13cda84a619c75a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<OneTimeMotorControl-response>)))
  "Returns full string definition for message of type '<OneTimeMotorControl-response>"
  (cl:format cl:nil "int32 result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'OneTimeMotorControl-response)))
  "Returns full string definition for message of type 'OneTimeMotorControl-response"
  (cl:format cl:nil "int32 result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <OneTimeMotorControl-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <OneTimeMotorControl-response>))
  "Converts a ROS message object to a list"
  (cl:list 'OneTimeMotorControl-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'OneTimeMotorControl)))
  'OneTimeMotorControl-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'OneTimeMotorControl)))
  'OneTimeMotorControl-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'OneTimeMotorControl)))
  "Returns string type for a service object of type '<OneTimeMotorControl>"
  "dobot/OneTimeMotorControl")