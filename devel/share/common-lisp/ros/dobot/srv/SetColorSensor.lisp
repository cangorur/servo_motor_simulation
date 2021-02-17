; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude SetColorSensor-request.msg.html

(cl:defclass <SetColorSensor-request> (roslisp-msg-protocol:ros-message)
  ((enable
    :reader enable
    :initarg :enable
    :type cl:boolean
    :initform cl:nil)
   (colorPort
    :reader colorPort
    :initarg :colorPort
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SetColorSensor-request (<SetColorSensor-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetColorSensor-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetColorSensor-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<SetColorSensor-request> is deprecated: use dobot-srv:SetColorSensor-request instead.")))

(cl:ensure-generic-function 'enable-val :lambda-list '(m))
(cl:defmethod enable-val ((m <SetColorSensor-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:enable-val is deprecated.  Use dobot-srv:enable instead.")
  (enable m))

(cl:ensure-generic-function 'colorPort-val :lambda-list '(m))
(cl:defmethod colorPort-val ((m <SetColorSensor-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:colorPort-val is deprecated.  Use dobot-srv:colorPort instead.")
  (colorPort m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetColorSensor-request>) ostream)
  "Serializes a message object of type '<SetColorSensor-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'enable) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'colorPort)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetColorSensor-request>) istream)
  "Deserializes a message object of type '<SetColorSensor-request>"
    (cl:setf (cl:slot-value msg 'enable) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'colorPort)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetColorSensor-request>)))
  "Returns string type for a service object of type '<SetColorSensor-request>"
  "dobot/SetColorSensorRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetColorSensor-request)))
  "Returns string type for a service object of type 'SetColorSensor-request"
  "dobot/SetColorSensorRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetColorSensor-request>)))
  "Returns md5sum for a message object of type '<SetColorSensor-request>"
  "8058129f76db40bd87aff8d2324c566b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetColorSensor-request)))
  "Returns md5sum for a message object of type 'SetColorSensor-request"
  "8058129f76db40bd87aff8d2324c566b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetColorSensor-request>)))
  "Returns full string definition for message of type '<SetColorSensor-request>"
  (cl:format cl:nil "~%bool enable~%~%uint8 colorPort~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetColorSensor-request)))
  "Returns full string definition for message of type 'SetColorSensor-request"
  (cl:format cl:nil "~%bool enable~%~%uint8 colorPort~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetColorSensor-request>))
  (cl:+ 0
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetColorSensor-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetColorSensor-request
    (cl:cons ':enable (enable msg))
    (cl:cons ':colorPort (colorPort msg))
))
;//! \htmlinclude SetColorSensor-response.msg.html

(cl:defclass <SetColorSensor-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:integer
    :initform 0))
)

(cl:defclass SetColorSensor-response (<SetColorSensor-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetColorSensor-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetColorSensor-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<SetColorSensor-response> is deprecated: use dobot-srv:SetColorSensor-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <SetColorSensor-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:result-val is deprecated.  Use dobot-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetColorSensor-response>) ostream)
  "Serializes a message object of type '<SetColorSensor-response>"
  (cl:let* ((signed (cl:slot-value msg 'result)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetColorSensor-response>) istream)
  "Deserializes a message object of type '<SetColorSensor-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'result) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetColorSensor-response>)))
  "Returns string type for a service object of type '<SetColorSensor-response>"
  "dobot/SetColorSensorResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetColorSensor-response)))
  "Returns string type for a service object of type 'SetColorSensor-response"
  "dobot/SetColorSensorResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetColorSensor-response>)))
  "Returns md5sum for a message object of type '<SetColorSensor-response>"
  "8058129f76db40bd87aff8d2324c566b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetColorSensor-response)))
  "Returns md5sum for a message object of type 'SetColorSensor-response"
  "8058129f76db40bd87aff8d2324c566b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetColorSensor-response>)))
  "Returns full string definition for message of type '<SetColorSensor-response>"
  (cl:format cl:nil "~%int32 result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetColorSensor-response)))
  "Returns full string definition for message of type 'SetColorSensor-response"
  (cl:format cl:nil "~%int32 result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetColorSensor-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetColorSensor-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetColorSensor-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetColorSensor)))
  'SetColorSensor-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetColorSensor)))
  'SetColorSensor-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetColorSensor)))
  "Returns string type for a service object of type '<SetColorSensor>"
  "dobot/SetColorSensor")