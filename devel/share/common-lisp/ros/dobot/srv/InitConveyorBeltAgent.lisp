; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude InitConveyorBeltAgent-request.msg.html

(cl:defclass <InitConveyorBeltAgent-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass InitConveyorBeltAgent-request (<InitConveyorBeltAgent-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <InitConveyorBeltAgent-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'InitConveyorBeltAgent-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<InitConveyorBeltAgent-request> is deprecated: use dobot-srv:InitConveyorBeltAgent-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <InitConveyorBeltAgent-request>) ostream)
  "Serializes a message object of type '<InitConveyorBeltAgent-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <InitConveyorBeltAgent-request>) istream)
  "Deserializes a message object of type '<InitConveyorBeltAgent-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<InitConveyorBeltAgent-request>)))
  "Returns string type for a service object of type '<InitConveyorBeltAgent-request>"
  "dobot/InitConveyorBeltAgentRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'InitConveyorBeltAgent-request)))
  "Returns string type for a service object of type 'InitConveyorBeltAgent-request"
  "dobot/InitConveyorBeltAgentRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<InitConveyorBeltAgent-request>)))
  "Returns md5sum for a message object of type '<InitConveyorBeltAgent-request>"
  "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'InitConveyorBeltAgent-request)))
  "Returns md5sum for a message object of type 'InitConveyorBeltAgent-request"
  "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<InitConveyorBeltAgent-request>)))
  "Returns full string definition for message of type '<InitConveyorBeltAgent-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'InitConveyorBeltAgent-request)))
  "Returns full string definition for message of type 'InitConveyorBeltAgent-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <InitConveyorBeltAgent-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <InitConveyorBeltAgent-request>))
  "Converts a ROS message object to a list"
  (cl:list 'InitConveyorBeltAgent-request
))
;//! \htmlinclude InitConveyorBeltAgent-response.msg.html

(cl:defclass <InitConveyorBeltAgent-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:integer
    :initform 0))
)

(cl:defclass InitConveyorBeltAgent-response (<InitConveyorBeltAgent-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <InitConveyorBeltAgent-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'InitConveyorBeltAgent-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<InitConveyorBeltAgent-response> is deprecated: use dobot-srv:InitConveyorBeltAgent-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <InitConveyorBeltAgent-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:success-val is deprecated.  Use dobot-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <InitConveyorBeltAgent-response>) ostream)
  "Serializes a message object of type '<InitConveyorBeltAgent-response>"
  (cl:let* ((signed (cl:slot-value msg 'success)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <InitConveyorBeltAgent-response>) istream)
  "Deserializes a message object of type '<InitConveyorBeltAgent-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'success) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<InitConveyorBeltAgent-response>)))
  "Returns string type for a service object of type '<InitConveyorBeltAgent-response>"
  "dobot/InitConveyorBeltAgentResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'InitConveyorBeltAgent-response)))
  "Returns string type for a service object of type 'InitConveyorBeltAgent-response"
  "dobot/InitConveyorBeltAgentResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<InitConveyorBeltAgent-response>)))
  "Returns md5sum for a message object of type '<InitConveyorBeltAgent-response>"
  "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'InitConveyorBeltAgent-response)))
  "Returns md5sum for a message object of type 'InitConveyorBeltAgent-response"
  "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<InitConveyorBeltAgent-response>)))
  "Returns full string definition for message of type '<InitConveyorBeltAgent-response>"
  (cl:format cl:nil "int32 success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'InitConveyorBeltAgent-response)))
  "Returns full string definition for message of type 'InitConveyorBeltAgent-response"
  (cl:format cl:nil "int32 success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <InitConveyorBeltAgent-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <InitConveyorBeltAgent-response>))
  "Converts a ROS message object to a list"
  (cl:list 'InitConveyorBeltAgent-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'InitConveyorBeltAgent)))
  'InitConveyorBeltAgent-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'InitConveyorBeltAgent)))
  'InitConveyorBeltAgent-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'InitConveyorBeltAgent)))
  "Returns string type for a service object of type '<InitConveyorBeltAgent>"
  "dobot/InitConveyorBeltAgent")