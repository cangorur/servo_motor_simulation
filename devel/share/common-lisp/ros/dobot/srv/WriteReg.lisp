; Auto-generated. Do not edit!


(cl:in-package dobot-srv)


;//! \htmlinclude WriteReg-request.msg.html

(cl:defclass <WriteReg-request> (roslisp-msg-protocol:ros-message)
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
   (data
    :reader data
    :initarg :data
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0)))
)

(cl:defclass WriteReg-request (<WriteReg-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <WriteReg-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'WriteReg-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<WriteReg-request> is deprecated: use dobot-srv:WriteReg-request instead.")))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <WriteReg-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:id-val is deprecated.  Use dobot-srv:id instead.")
  (id m))

(cl:ensure-generic-function 'reg_address-val :lambda-list '(m))
(cl:defmethod reg_address-val ((m <WriteReg-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:reg_address-val is deprecated.  Use dobot-srv:reg_address instead.")
  (reg_address m))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <WriteReg-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:data-val is deprecated.  Use dobot-srv:data instead.")
  (data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <WriteReg-request>) ostream)
  "Serializes a message object of type '<WriteReg-request>"
  (cl:let* ((signed (cl:slot-value msg 'id)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'reg_address)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'data))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    ))
   (cl:slot-value msg 'data))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <WriteReg-request>) istream)
  "Deserializes a message object of type '<WriteReg-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'id) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'reg_address) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'data) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'data)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536)))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<WriteReg-request>)))
  "Returns string type for a service object of type '<WriteReg-request>"
  "dobot/WriteRegRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'WriteReg-request)))
  "Returns string type for a service object of type 'WriteReg-request"
  "dobot/WriteRegRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<WriteReg-request>)))
  "Returns md5sum for a message object of type '<WriteReg-request>"
  "8da6b8e45a4090c0598ec46e5e2d31dc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'WriteReg-request)))
  "Returns md5sum for a message object of type 'WriteReg-request"
  "8da6b8e45a4090c0598ec46e5e2d31dc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<WriteReg-request>)))
  "Returns full string definition for message of type '<WriteReg-request>"
  (cl:format cl:nil "int16 id~%int16 reg_address~%int16[] data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'WriteReg-request)))
  "Returns full string definition for message of type 'WriteReg-request"
  (cl:format cl:nil "int16 id~%int16 reg_address~%int16[] data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <WriteReg-request>))
  (cl:+ 0
     2
     2
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'data) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <WriteReg-request>))
  "Converts a ROS message object to a list"
  (cl:list 'WriteReg-request
    (cl:cons ':id (id msg))
    (cl:cons ':reg_address (reg_address msg))
    (cl:cons ':data (data msg))
))
;//! \htmlinclude WriteReg-response.msg.html

(cl:defclass <WriteReg-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass WriteReg-response (<WriteReg-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <WriteReg-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'WriteReg-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-srv:<WriteReg-response> is deprecated: use dobot-srv:WriteReg-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <WriteReg-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-srv:success-val is deprecated.  Use dobot-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <WriteReg-response>) ostream)
  "Serializes a message object of type '<WriteReg-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <WriteReg-response>) istream)
  "Deserializes a message object of type '<WriteReg-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<WriteReg-response>)))
  "Returns string type for a service object of type '<WriteReg-response>"
  "dobot/WriteRegResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'WriteReg-response)))
  "Returns string type for a service object of type 'WriteReg-response"
  "dobot/WriteRegResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<WriteReg-response>)))
  "Returns md5sum for a message object of type '<WriteReg-response>"
  "8da6b8e45a4090c0598ec46e5e2d31dc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'WriteReg-response)))
  "Returns md5sum for a message object of type 'WriteReg-response"
  "8da6b8e45a4090c0598ec46e5e2d31dc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<WriteReg-response>)))
  "Returns full string definition for message of type '<WriteReg-response>"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'WriteReg-response)))
  "Returns full string definition for message of type 'WriteReg-response"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <WriteReg-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <WriteReg-response>))
  "Converts a ROS message object to a list"
  (cl:list 'WriteReg-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'WriteReg)))
  'WriteReg-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'WriteReg)))
  'WriteReg-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'WriteReg)))
  "Returns string type for a service object of type '<WriteReg>"
  "dobot/WriteReg")