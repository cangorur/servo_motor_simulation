; Auto-generated. Do not edit!


(cl:in-package dobot-msg)


;//! \htmlinclude pid_control_data.msg.html

(cl:defclass <pid_control_data> (roslisp-msg-protocol:ros-message)
  ((power_real
    :reader power_real
    :initarg :power_real
    :type cl:float
    :initform 0.0)
   (power_calc
    :reader power_calc
    :initarg :power_calc
    :type cl:float
    :initform 0.0)
   (speed_min
    :reader speed_min
    :initarg :speed_min
    :type cl:float
    :initform 0.0)
   (speed_max
    :reader speed_max
    :initarg :speed_max
    :type cl:float
    :initform 0.0))
)

(cl:defclass pid_control_data (<pid_control_data>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <pid_control_data>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'pid_control_data)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-msg:<pid_control_data> is deprecated: use dobot-msg:pid_control_data instead.")))

(cl:ensure-generic-function 'power_real-val :lambda-list '(m))
(cl:defmethod power_real-val ((m <pid_control_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:power_real-val is deprecated.  Use dobot-msg:power_real instead.")
  (power_real m))

(cl:ensure-generic-function 'power_calc-val :lambda-list '(m))
(cl:defmethod power_calc-val ((m <pid_control_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:power_calc-val is deprecated.  Use dobot-msg:power_calc instead.")
  (power_calc m))

(cl:ensure-generic-function 'speed_min-val :lambda-list '(m))
(cl:defmethod speed_min-val ((m <pid_control_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:speed_min-val is deprecated.  Use dobot-msg:speed_min instead.")
  (speed_min m))

(cl:ensure-generic-function 'speed_max-val :lambda-list '(m))
(cl:defmethod speed_max-val ((m <pid_control_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:speed_max-val is deprecated.  Use dobot-msg:speed_max instead.")
  (speed_max m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <pid_control_data>) ostream)
  "Serializes a message object of type '<pid_control_data>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'power_real))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'power_calc))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'speed_min))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'speed_max))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <pid_control_data>) istream)
  "Deserializes a message object of type '<pid_control_data>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'power_real) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'power_calc) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'speed_min) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'speed_max) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<pid_control_data>)))
  "Returns string type for a message object of type '<pid_control_data>"
  "dobot/pid_control_data")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'pid_control_data)))
  "Returns string type for a message object of type 'pid_control_data"
  "dobot/pid_control_data")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<pid_control_data>)))
  "Returns md5sum for a message object of type '<pid_control_data>"
  "4cad1da3b889b346f0b6364044c5116b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'pid_control_data)))
  "Returns md5sum for a message object of type 'pid_control_data"
  "4cad1da3b889b346f0b6364044c5116b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<pid_control_data>)))
  "Returns full string definition for message of type '<pid_control_data>"
  (cl:format cl:nil "float32 power_real~%float32 power_calc~%float32 speed_min~%float32 speed_max~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'pid_control_data)))
  "Returns full string definition for message of type 'pid_control_data"
  (cl:format cl:nil "float32 power_real~%float32 power_calc~%float32 speed_min~%float32 speed_max~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <pid_control_data>))
  (cl:+ 0
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <pid_control_data>))
  "Converts a ROS message object to a list"
  (cl:list 'pid_control_data
    (cl:cons ':power_real (power_real msg))
    (cl:cons ':power_calc (power_calc msg))
    (cl:cons ':speed_min (speed_min msg))
    (cl:cons ':speed_max (speed_max msg))
))
