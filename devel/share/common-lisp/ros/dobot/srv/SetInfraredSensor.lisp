; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude SetInfraredSensor-request.msg.html

(cl:defclass <SetInfraredSensor-request> (roslisp-msg-protocol:ros-message)
  ((enable
    :reader enable
    :initarg :enable
    :type cl:boolean
    :initform cl:nil)
   (infraredPort
    :reader infraredPort
    :initarg :infraredPort
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SetInfraredSensor-request (<SetInfraredSensor-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetInfraredSensor-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetInfraredSensor-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<SetInfraredSensor-request> is deprecated: use dobot-srv:SetInfraredSensor-request instead.")))

(cl:ensure-generic-function 'enable-val :lambda-list '(m))
(cl:defmethod enable-val ((m <SetInfraredSensor-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:enable-val is deprecated.  Use dobot-srv:enable instead.")
  (enable m))

(cl:ensure-generic-function 'infraredPort-val :lambda-list '(m))
(cl:defmethod infraredPort-val ((m <SetInfraredSensor-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:infraredPort-val is deprecated.  Use dobot-srv:infraredPort instead.")
  (infraredPort m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetInfraredSensor-request>) ostream)
  "Serializes a message object of type '<SetInfraredSensor-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'enable) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'infraredPort)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetInfraredSensor-request>) istream)
  "Deserializes a message object of type '<SetInfraredSensor-request>"
    (cl:setf (cl:slot-value msg 'enable) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'infraredPort)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetInfraredSensor-request>)))
  "Returns string type for a service object of type '<SetInfraredSensor-request>"
  "dobot/SetInfraredSensorRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetInfraredSensor-request)))
  "Returns string type for a service object of type 'SetInfraredSensor-request"
  "dobot/SetInfraredSensorRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetInfraredSensor-request>)))
  "Returns md5sum for a message object of type '<SetInfraredSensor-request>"
  "5e6ab8bedaa3155aca50aa4a43e094eb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetInfraredSensor-request)))
  "Returns md5sum for a message object of type 'SetInfraredSensor-request"
  "5e6ab8bedaa3155aca50aa4a43e094eb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetInfraredSensor-request>)))
  "Returns full string definition for message of type '<SetInfraredSensor-request>"
  (cl:format cl:nil "~%bool enable~%~%uint8 infraredPort~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetInfraredSensor-request)))
  "Returns full string definition for message of type 'SetInfraredSensor-request"
  (cl:format cl:nil "~%bool enable~%~%uint8 infraredPort~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetInfraredSensor-request>))
  (cl:+ 0
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetInfraredSensor-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetInfraredSensor-request
    (cl:cons ':enable (enable msg))
    (cl:cons ':infraredPort (infraredPort msg))
))
;//! \htmlinclude SetInfraredSensor-response.msg.html

(cl:defclass <SetInfraredSensor-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:integer
    :initform 0))
)

(cl:defclass SetInfraredSensor-response (<SetInfraredSensor-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetInfraredSensor-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetInfraredSensor-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<SetInfraredSensor-response> is deprecated: use dobot-srv:SetInfraredSensor-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <SetInfraredSensor-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:result-val is deprecated.  Use dobot-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetInfraredSensor-response>) ostream)
  "Serializes a message object of type '<SetInfraredSensor-response>"
  (cl:let* ((signed (cl:slot-value msg 'result)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetInfraredSensor-response>) istream)
  "Deserializes a message object of type '<SetInfraredSensor-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'result) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetInfraredSensor-response>)))
  "Returns string type for a service object of type '<SetInfraredSensor-response>"
  "dobot/SetInfraredSensorResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetInfraredSensor-response)))
  "Returns string type for a service object of type 'SetInfraredSensor-response"
  "dobot/SetInfraredSensorResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetInfraredSensor-response>)))
  "Returns md5sum for a message object of type '<SetInfraredSensor-response>"
  "5e6ab8bedaa3155aca50aa4a43e094eb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetInfraredSensor-response)))
  "Returns md5sum for a message object of type 'SetInfraredSensor-response"
  "5e6ab8bedaa3155aca50aa4a43e094eb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetInfraredSensor-response>)))
  "Returns full string definition for message of type '<SetInfraredSensor-response>"
  (cl:format cl:nil "int32 result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetInfraredSensor-response)))
  "Returns full string definition for message of type 'SetInfraredSensor-response"
  (cl:format cl:nil "int32 result~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetInfraredSensor-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetInfraredSensor-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetInfraredSensor-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetInfraredSensor)))
  'SetInfraredSensor-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetInfraredSensor)))
  'SetInfraredSensor-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetInfraredSensor)))
  "Returns string type for a service object of type '<SetInfraredSensor>"
  "dobot/SetInfraredSensor")