; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude GenerateAbnormalTorque-request.msg.html

(cl:defclass <GenerateAbnormalTorque-request> (roslisp-msg-protocol:ros-message)
  ((isEnabled
    :reader isEnabled
    :initarg :isEnabled
    :type cl:boolean
    :initform cl:nil)
   (index
    :reader index
    :initarg :index
    :type cl:fixnum
    :initform 0)
   (type
    :reader type
    :initarg :type
    :type cl:string
    :initform "")
   (param1
    :reader param1
    :initarg :param1
    :type cl:float
    :initform 0.0)
   (param2
    :reader param2
    :initarg :param2
    :type cl:float
    :initform 0.0)
   (holdTime
    :reader holdTime
    :initarg :holdTime
    :type cl:float
    :initform 0.0))
)

(cl:defclass GenerateAbnormalTorque-request (<GenerateAbnormalTorque-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GenerateAbnormalTorque-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GenerateAbnormalTorque-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<GenerateAbnormalTorque-request> is deprecated: use dobot-srv:GenerateAbnormalTorque-request instead.")))

(cl:ensure-generic-function 'isEnabled-val :lambda-list '(m))
(cl:defmethod isEnabled-val ((m <GenerateAbnormalTorque-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:isEnabled-val is deprecated.  Use dobot-srv:isEnabled instead.")
  (isEnabled m))

(cl:ensure-generic-function 'index-val :lambda-list '(m))
(cl:defmethod index-val ((m <GenerateAbnormalTorque-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:index-val is deprecated.  Use dobot-srv:index instead.")
  (index m))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <GenerateAbnormalTorque-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:type-val is deprecated.  Use dobot-srv:type instead.")
  (type m))

(cl:ensure-generic-function 'param1-val :lambda-list '(m))
(cl:defmethod param1-val ((m <GenerateAbnormalTorque-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:param1-val is deprecated.  Use dobot-srv:param1 instead.")
  (param1 m))

(cl:ensure-generic-function 'param2-val :lambda-list '(m))
(cl:defmethod param2-val ((m <GenerateAbnormalTorque-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:param2-val is deprecated.  Use dobot-srv:param2 instead.")
  (param2 m))

(cl:ensure-generic-function 'holdTime-val :lambda-list '(m))
(cl:defmethod holdTime-val ((m <GenerateAbnormalTorque-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:holdTime-val is deprecated.  Use dobot-srv:holdTime instead.")
  (holdTime m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GenerateAbnormalTorque-request>) ostream)
  "Serializes a message object of type '<GenerateAbnormalTorque-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'isEnabled) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'index)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'type))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'type))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'param1))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'param2))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'holdTime))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GenerateAbnormalTorque-request>) istream)
  "Deserializes a message object of type '<GenerateAbnormalTorque-request>"
    (cl:setf (cl:slot-value msg 'isEnabled) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'index) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'type) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'type) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'param1) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'param2) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'holdTime) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GenerateAbnormalTorque-request>)))
  "Returns string type for a service object of type '<GenerateAbnormalTorque-request>"
  "dobot/GenerateAbnormalTorqueRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GenerateAbnormalTorque-request)))
  "Returns string type for a service object of type 'GenerateAbnormalTorque-request"
  "dobot/GenerateAbnormalTorqueRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GenerateAbnormalTorque-request>)))
  "Returns md5sum for a message object of type '<GenerateAbnormalTorque-request>"
  "44f381e1746ec656377c4e7f22e5a647")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GenerateAbnormalTorque-request)))
  "Returns md5sum for a message object of type 'GenerateAbnormalTorque-request"
  "44f381e1746ec656377c4e7f22e5a647")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GenerateAbnormalTorque-request>)))
  "Returns full string definition for message of type '<GenerateAbnormalTorque-request>"
  (cl:format cl:nil "bool isEnabled~%int8 index~%string type~%float32 param1~%float32 param2~%float32 holdTime~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GenerateAbnormalTorque-request)))
  "Returns full string definition for message of type 'GenerateAbnormalTorque-request"
  (cl:format cl:nil "bool isEnabled~%int8 index~%string type~%float32 param1~%float32 param2~%float32 holdTime~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GenerateAbnormalTorque-request>))
  (cl:+ 0
     1
     1
     4 (cl:length (cl:slot-value msg 'type))
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GenerateAbnormalTorque-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GenerateAbnormalTorque-request
    (cl:cons ':isEnabled (isEnabled msg))
    (cl:cons ':index (index msg))
    (cl:cons ':type (type msg))
    (cl:cons ':param1 (param1 msg))
    (cl:cons ':param2 (param2 msg))
    (cl:cons ':holdTime (holdTime msg))
))
;//! \htmlinclude GenerateAbnormalTorque-response.msg.html

(cl:defclass <GenerateAbnormalTorque-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass GenerateAbnormalTorque-response (<GenerateAbnormalTorque-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GenerateAbnormalTorque-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GenerateAbnormalTorque-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<GenerateAbnormalTorque-response> is deprecated: use dobot-srv:GenerateAbnormalTorque-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <GenerateAbnormalTorque-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:success-val is deprecated.  Use dobot-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GenerateAbnormalTorque-response>) ostream)
  "Serializes a message object of type '<GenerateAbnormalTorque-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GenerateAbnormalTorque-response>) istream)
  "Deserializes a message object of type '<GenerateAbnormalTorque-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GenerateAbnormalTorque-response>)))
  "Returns string type for a service object of type '<GenerateAbnormalTorque-response>"
  "dobot/GenerateAbnormalTorqueResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GenerateAbnormalTorque-response)))
  "Returns string type for a service object of type 'GenerateAbnormalTorque-response"
  "dobot/GenerateAbnormalTorqueResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GenerateAbnormalTorque-response>)))
  "Returns md5sum for a message object of type '<GenerateAbnormalTorque-response>"
  "44f381e1746ec656377c4e7f22e5a647")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GenerateAbnormalTorque-response)))
  "Returns md5sum for a message object of type 'GenerateAbnormalTorque-response"
  "44f381e1746ec656377c4e7f22e5a647")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GenerateAbnormalTorque-response>)))
  "Returns full string definition for message of type '<GenerateAbnormalTorque-response>"
  (cl:format cl:nil "bool success~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GenerateAbnormalTorque-response)))
  "Returns full string definition for message of type 'GenerateAbnormalTorque-response"
  (cl:format cl:nil "bool success~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GenerateAbnormalTorque-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GenerateAbnormalTorque-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GenerateAbnormalTorque-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GenerateAbnormalTorque)))
  'GenerateAbnormalTorque-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GenerateAbnormalTorque)))
  'GenerateAbnormalTorque-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GenerateAbnormalTorque)))
  "Returns string type for a service object of type '<GenerateAbnormalTorque>"
  "dobot/GenerateAbnormalTorque")