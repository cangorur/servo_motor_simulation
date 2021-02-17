; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude InitMotorControlApp-request.msg.html

(cl:defclass <InitMotorControlApp-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass InitMotorControlApp-request (<InitMotorControlApp-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <InitMotorControlApp-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'InitMotorControlApp-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<InitMotorControlApp-request> is deprecated: use dobot-srv:InitMotorControlApp-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <InitMotorControlApp-request>) ostream)
  "Serializes a message object of type '<InitMotorControlApp-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <InitMotorControlApp-request>) istream)
  "Deserializes a message object of type '<InitMotorControlApp-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<InitMotorControlApp-request>)))
  "Returns string type for a service object of type '<InitMotorControlApp-request>"
  "dobot/InitMotorControlAppRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'InitMotorControlApp-request)))
  "Returns string type for a service object of type 'InitMotorControlApp-request"
  "dobot/InitMotorControlAppRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<InitMotorControlApp-request>)))
  "Returns md5sum for a message object of type '<InitMotorControlApp-request>"
  "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'InitMotorControlApp-request)))
  "Returns md5sum for a message object of type 'InitMotorControlApp-request"
  "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<InitMotorControlApp-request>)))
  "Returns full string definition for message of type '<InitMotorControlApp-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'InitMotorControlApp-request)))
  "Returns full string definition for message of type 'InitMotorControlApp-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <InitMotorControlApp-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <InitMotorControlApp-request>))
  "Converts a ROS message object to a list"
  (cl:list 'InitMotorControlApp-request
))
;//! \htmlinclude InitMotorControlApp-response.msg.html

(cl:defclass <InitMotorControlApp-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:integer
    :initform 0))
)

(cl:defclass InitMotorControlApp-response (<InitMotorControlApp-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <InitMotorControlApp-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'InitMotorControlApp-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<InitMotorControlApp-response> is deprecated: use dobot-srv:InitMotorControlApp-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <InitMotorControlApp-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:success-val is deprecated.  Use dobot-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <InitMotorControlApp-response>) ostream)
  "Serializes a message object of type '<InitMotorControlApp-response>"
  (cl:let* ((signed (cl:slot-value msg 'success)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <InitMotorControlApp-response>) istream)
  "Deserializes a message object of type '<InitMotorControlApp-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'success) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<InitMotorControlApp-response>)))
  "Returns string type for a service object of type '<InitMotorControlApp-response>"
  "dobot/InitMotorControlAppResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'InitMotorControlApp-response)))
  "Returns string type for a service object of type 'InitMotorControlApp-response"
  "dobot/InitMotorControlAppResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<InitMotorControlApp-response>)))
  "Returns md5sum for a message object of type '<InitMotorControlApp-response>"
  "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'InitMotorControlApp-response)))
  "Returns md5sum for a message object of type 'InitMotorControlApp-response"
  "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<InitMotorControlApp-response>)))
  "Returns full string definition for message of type '<InitMotorControlApp-response>"
  (cl:format cl:nil "int32 success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'InitMotorControlApp-response)))
  "Returns full string definition for message of type 'InitMotorControlApp-response"
  (cl:format cl:nil "int32 success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <InitMotorControlApp-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <InitMotorControlApp-response>))
  "Converts a ROS message object to a list"
  (cl:list 'InitMotorControlApp-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'InitMotorControlApp)))
  'InitMotorControlApp-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'InitMotorControlApp)))
  'InitMotorControlApp-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'InitMotorControlApp)))
  "Returns string type for a service object of type '<InitMotorControlApp>"
  "dobot/InitMotorControlApp")