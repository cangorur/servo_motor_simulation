; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude ReadReg-request.msg.html

(cl:defclass <ReadReg-request> (roslisp-msg-protocol:ros-message)
  ((id
    :reader id
    :initarg :id
    :type cl:fixnum
    :initform 0)
   (reg_address
    :reader reg_address
    :initarg :reg_address
    :type cl:fixnum
    :initform 0)
   (data_length
    :reader data_length
    :initarg :data_length
    :type cl:fixnum
    :initform 0))
)

(cl:defclass ReadReg-request (<ReadReg-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ReadReg-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ReadReg-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<ReadReg-request> is deprecated: use dobot-srv:ReadReg-request instead.")))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <ReadReg-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:id-val is deprecated.  Use dobot-srv:id instead.")
  (id m))

(cl:ensure-generic-function 'reg_address-val :lambda-list '(m))
(cl:defmethod reg_address-val ((m <ReadReg-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:reg_address-val is deprecated.  Use dobot-srv:reg_address instead.")
  (reg_address m))

(cl:ensure-generic-function 'data_length-val :lambda-list '(m))
(cl:defmethod data_length-val ((m <ReadReg-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:data_length-val is deprecated.  Use dobot-srv:data_length instead.")
  (data_length m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ReadReg-request>) ostream)
  "Serializes a message object of type '<ReadReg-request>"
  (cl:let* ((signed (cl:slot-value msg 'id)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'reg_address)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'data_length)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ReadReg-request>) istream)
  "Deserializes a message object of type '<ReadReg-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'id) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'reg_address) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'data_length) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ReadReg-request>)))
  "Returns string type for a service object of type '<ReadReg-request>"
  "dobot/ReadRegRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ReadReg-request)))
  "Returns string type for a service object of type 'ReadReg-request"
  "dobot/ReadRegRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ReadReg-request>)))
  "Returns md5sum for a message object of type '<ReadReg-request>"
  "bc6fd90ab0bfe4afd7a1535702e29a89")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ReadReg-request)))
  "Returns md5sum for a message object of type 'ReadReg-request"
  "bc6fd90ab0bfe4afd7a1535702e29a89")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ReadReg-request>)))
  "Returns full string definition for message of type '<ReadReg-request>"
  (cl:format cl:nil "int16 id~%int16 reg_address~%int16 data_length~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ReadReg-request)))
  "Returns full string definition for message of type 'ReadReg-request"
  (cl:format cl:nil "int16 id~%int16 reg_address~%int16 data_length~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ReadReg-request>))
  (cl:+ 0
     2
     2
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ReadReg-request>))
  "Converts a ROS message object to a list"
  (cl:list 'ReadReg-request
    (cl:cons ':id (id msg))
    (cl:cons ':reg_address (reg_address msg))
    (cl:cons ':data_length (data_length msg))
))
;//! \htmlinclude ReadReg-response.msg.html

(cl:defclass <ReadReg-response> (roslisp-msg-protocol:ros-message)
  ((payload
    :reader payload
    :initarg :payload
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0)))
)

(cl:defclass ReadReg-response (<ReadReg-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ReadReg-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ReadReg-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<ReadReg-response> is deprecated: use dobot-srv:ReadReg-response instead.")))

(cl:ensure-generic-function 'payload-val :lambda-list '(m))
(cl:defmethod payload-val ((m <ReadReg-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:payload-val is deprecated.  Use dobot-srv:payload instead.")
  (payload m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ReadReg-response>) ostream)
  "Serializes a message object of type '<ReadReg-response>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'payload))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    ))
   (cl:slot-value msg 'payload))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ReadReg-response>) istream)
  "Deserializes a message object of type '<ReadReg-response>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'payload) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'payload)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536)))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ReadReg-response>)))
  "Returns string type for a service object of type '<ReadReg-response>"
  "dobot/ReadRegResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ReadReg-response)))
  "Returns string type for a service object of type 'ReadReg-response"
  "dobot/ReadRegResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ReadReg-response>)))
  "Returns md5sum for a message object of type '<ReadReg-response>"
  "bc6fd90ab0bfe4afd7a1535702e29a89")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ReadReg-response)))
  "Returns md5sum for a message object of type 'ReadReg-response"
  "bc6fd90ab0bfe4afd7a1535702e29a89")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ReadReg-response>)))
  "Returns full string definition for message of type '<ReadReg-response>"
  (cl:format cl:nil "int16[] payload~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ReadReg-response)))
  "Returns full string definition for message of type 'ReadReg-response"
  (cl:format cl:nil "int16[] payload~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ReadReg-response>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'payload) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ReadReg-response>))
  "Converts a ROS message object to a list"
  (cl:list 'ReadReg-response
    (cl:cons ':payload (payload msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'ReadReg)))
  'ReadReg-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'ReadReg)))
  'ReadReg-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ReadReg)))
  "Returns string type for a service object of type '<ReadReg>"
  "dobot/ReadReg")