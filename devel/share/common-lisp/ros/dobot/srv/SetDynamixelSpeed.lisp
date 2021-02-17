; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude SetDynamixelSpeed-request.msg.html

(cl:defclass <SetDynamixelSpeed-request> (roslisp-msg-protocol:ros-message)
  ((isEnabled
    :reader isEnabled
    :initarg :isEnabled
    :type cl:boolean
    :initform cl:nil)
   (speed
    :reader speed
    :initarg :speed
    :type cl:float
    :initform 0.0))
)

(cl:defclass SetDynamixelSpeed-request (<SetDynamixelSpeed-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetDynamixelSpeed-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetDynamixelSpeed-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<SetDynamixelSpeed-request> is deprecated: use dobot-srv:SetDynamixelSpeed-request instead.")))

(cl:ensure-generic-function 'isEnabled-val :lambda-list '(m))
(cl:defmethod isEnabled-val ((m <SetDynamixelSpeed-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:isEnabled-val is deprecated.  Use dobot-srv:isEnabled instead.")
  (isEnabled m))

(cl:ensure-generic-function 'speed-val :lambda-list '(m))
(cl:defmethod speed-val ((m <SetDynamixelSpeed-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:speed-val is deprecated.  Use dobot-srv:speed instead.")
  (speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetDynamixelSpeed-request>) ostream)
  "Serializes a message object of type '<SetDynamixelSpeed-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'isEnabled) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetDynamixelSpeed-request>) istream)
  "Deserializes a message object of type '<SetDynamixelSpeed-request>"
    (cl:setf (cl:slot-value msg 'isEnabled) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'speed) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetDynamixelSpeed-request>)))
  "Returns string type for a service object of type '<SetDynamixelSpeed-request>"
  "dobot/SetDynamixelSpeedRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetDynamixelSpeed-request)))
  "Returns string type for a service object of type 'SetDynamixelSpeed-request"
  "dobot/SetDynamixelSpeedRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetDynamixelSpeed-request>)))
  "Returns md5sum for a message object of type '<SetDynamixelSpeed-request>"
  "33258add9094c00c2480650dfbe4cddc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetDynamixelSpeed-request)))
  "Returns md5sum for a message object of type 'SetDynamixelSpeed-request"
  "33258add9094c00c2480650dfbe4cddc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetDynamixelSpeed-request>)))
  "Returns full string definition for message of type '<SetDynamixelSpeed-request>"
  (cl:format cl:nil "bool isEnabled~%float64 speed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetDynamixelSpeed-request)))
  "Returns full string definition for message of type 'SetDynamixelSpeed-request"
  (cl:format cl:nil "bool isEnabled~%float64 speed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetDynamixelSpeed-request>))
  (cl:+ 0
     1
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetDynamixelSpeed-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetDynamixelSpeed-request
    (cl:cons ':isEnabled (isEnabled msg))
    (cl:cons ':speed (speed msg))
))
;//! \htmlinclude SetDynamixelSpeed-response.msg.html

(cl:defclass <SetDynamixelSpeed-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass SetDynamixelSpeed-response (<SetDynamixelSpeed-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetDynamixelSpeed-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetDynamixelSpeed-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<SetDynamixelSpeed-response> is deprecated: use dobot-srv:SetDynamixelSpeed-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <SetDynamixelSpeed-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:success-val is deprecated.  Use dobot-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetDynamixelSpeed-response>) ostream)
  "Serializes a message object of type '<SetDynamixelSpeed-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetDynamixelSpeed-response>) istream)
  "Deserializes a message object of type '<SetDynamixelSpeed-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetDynamixelSpeed-response>)))
  "Returns string type for a service object of type '<SetDynamixelSpeed-response>"
  "dobot/SetDynamixelSpeedResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetDynamixelSpeed-response)))
  "Returns string type for a service object of type 'SetDynamixelSpeed-response"
  "dobot/SetDynamixelSpeedResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetDynamixelSpeed-response>)))
  "Returns md5sum for a message object of type '<SetDynamixelSpeed-response>"
  "33258add9094c00c2480650dfbe4cddc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetDynamixelSpeed-response)))
  "Returns md5sum for a message object of type 'SetDynamixelSpeed-response"
  "33258add9094c00c2480650dfbe4cddc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetDynamixelSpeed-response>)))
  "Returns full string definition for message of type '<SetDynamixelSpeed-response>"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetDynamixelSpeed-response)))
  "Returns full string definition for message of type 'SetDynamixelSpeed-response"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetDynamixelSpeed-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetDynamixelSpeed-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetDynamixelSpeed-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetDynamixelSpeed)))
  'SetDynamixelSpeed-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetDynamixelSpeed)))
  'SetDynamixelSpeed-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetDynamixelSpeed)))
  "Returns string type for a service object of type '<SetDynamixelSpeed>"
  "dobot/SetDynamixelSpeed")