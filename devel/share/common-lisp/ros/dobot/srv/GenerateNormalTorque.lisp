; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude GenerateNormalTorque-request.msg.html

(cl:defclass <GenerateNormalTorque-request> (roslisp-msg-protocol:ros-message)
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
   (torque
    :reader torque
    :initarg :torque
    :type cl:float
    :initform 0.0))
)

(cl:defclass GenerateNormalTorque-request (<GenerateNormalTorque-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GenerateNormalTorque-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GenerateNormalTorque-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<GenerateNormalTorque-request> is deprecated: use dobot-srv:GenerateNormalTorque-request instead.")))

(cl:ensure-generic-function 'isEnabled-val :lambda-list '(m))
(cl:defmethod isEnabled-val ((m <GenerateNormalTorque-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:isEnabled-val is deprecated.  Use dobot-srv:isEnabled instead.")
  (isEnabled m))

(cl:ensure-generic-function 'index-val :lambda-list '(m))
(cl:defmethod index-val ((m <GenerateNormalTorque-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:index-val is deprecated.  Use dobot-srv:index instead.")
  (index m))

(cl:ensure-generic-function 'torque-val :lambda-list '(m))
(cl:defmethod torque-val ((m <GenerateNormalTorque-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:torque-val is deprecated.  Use dobot-srv:torque instead.")
  (torque m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GenerateNormalTorque-request>) ostream)
  "Serializes a message object of type '<GenerateNormalTorque-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'isEnabled) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'index)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'torque))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GenerateNormalTorque-request>) istream)
  "Deserializes a message object of type '<GenerateNormalTorque-request>"
    (cl:setf (cl:slot-value msg 'isEnabled) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'index) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'torque) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GenerateNormalTorque-request>)))
  "Returns string type for a service object of type '<GenerateNormalTorque-request>"
  "dobot/GenerateNormalTorqueRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GenerateNormalTorque-request)))
  "Returns string type for a service object of type 'GenerateNormalTorque-request"
  "dobot/GenerateNormalTorqueRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GenerateNormalTorque-request>)))
  "Returns md5sum for a message object of type '<GenerateNormalTorque-request>"
  "614573f1304141bc4784e7cdb5102fdb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GenerateNormalTorque-request)))
  "Returns md5sum for a message object of type 'GenerateNormalTorque-request"
  "614573f1304141bc4784e7cdb5102fdb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GenerateNormalTorque-request>)))
  "Returns full string definition for message of type '<GenerateNormalTorque-request>"
  (cl:format cl:nil "bool isEnabled~%int8 index~%float32 torque~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GenerateNormalTorque-request)))
  "Returns full string definition for message of type 'GenerateNormalTorque-request"
  (cl:format cl:nil "bool isEnabled~%int8 index~%float32 torque~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GenerateNormalTorque-request>))
  (cl:+ 0
     1
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GenerateNormalTorque-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GenerateNormalTorque-request
    (cl:cons ':isEnabled (isEnabled msg))
    (cl:cons ':index (index msg))
    (cl:cons ':torque (torque msg))
))
;//! \htmlinclude GenerateNormalTorque-response.msg.html

(cl:defclass <GenerateNormalTorque-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass GenerateNormalTorque-response (<GenerateNormalTorque-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GenerateNormalTorque-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GenerateNormalTorque-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<GenerateNormalTorque-response> is deprecated: use dobot-srv:GenerateNormalTorque-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <GenerateNormalTorque-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:success-val is deprecated.  Use dobot-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GenerateNormalTorque-response>) ostream)
  "Serializes a message object of type '<GenerateNormalTorque-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GenerateNormalTorque-response>) istream)
  "Deserializes a message object of type '<GenerateNormalTorque-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GenerateNormalTorque-response>)))
  "Returns string type for a service object of type '<GenerateNormalTorque-response>"
  "dobot/GenerateNormalTorqueResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GenerateNormalTorque-response)))
  "Returns string type for a service object of type 'GenerateNormalTorque-response"
  "dobot/GenerateNormalTorqueResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GenerateNormalTorque-response>)))
  "Returns md5sum for a message object of type '<GenerateNormalTorque-response>"
  "614573f1304141bc4784e7cdb5102fdb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GenerateNormalTorque-response)))
  "Returns md5sum for a message object of type 'GenerateNormalTorque-response"
  "614573f1304141bc4784e7cdb5102fdb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GenerateNormalTorque-response>)))
  "Returns full string definition for message of type '<GenerateNormalTorque-response>"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GenerateNormalTorque-response)))
  "Returns full string definition for message of type 'GenerateNormalTorque-response"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GenerateNormalTorque-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GenerateNormalTorque-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GenerateNormalTorque-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GenerateNormalTorque)))
  'GenerateNormalTorque-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GenerateNormalTorque)))
  'GenerateNormalTorque-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GenerateNormalTorque)))
  "Returns string type for a service object of type '<GenerateNormalTorque>"
  "dobot/GenerateNormalTorque")