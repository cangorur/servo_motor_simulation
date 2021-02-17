; Auto-generated. Do not edit!


(cl:in-package dobot-msg)


;//! \htmlinclude motor_raw_data.msg.html

(cl:defclass <motor_raw_data> (roslisp-msg-protocol:ros-message)
  ((raw_timestamp
    :reader raw_timestamp
    :initarg :raw_timestamp
    :type cl:float
    :initform 0.0)
   (raw_requested_velocity
    :reader raw_requested_velocity
    :initarg :raw_requested_velocity
    :type cl:float
    :initform 0.0)
   (raw_velocity
    :reader raw_velocity
    :initarg :raw_velocity
    :type cl:float
    :initform 0.0)
   (raw_current
    :reader raw_current
    :initarg :raw_current
    :type cl:float
    :initform 0.0)
   (raw_temperature
    :reader raw_temperature
    :initarg :raw_temperature
    :type cl:float
    :initform 0.0)
   (raw_supply_voltage
    :reader raw_supply_voltage
    :initarg :raw_supply_voltage
    :type cl:float
    :initform 0.0)
   (raw_pwm
    :reader raw_pwm
    :initarg :raw_pwm
    :type cl:float
    :initform 0.0)
   (raw_torque
    :reader raw_torque
    :initarg :raw_torque
    :type cl:float
    :initform 0.0)
   (raw_acceleration
    :reader raw_acceleration
    :initarg :raw_acceleration
    :type cl:float
    :initform 0.0))
)

(cl:defclass motor_raw_data (<motor_raw_data>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <motor_raw_data>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'motor_raw_data)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-msg:<motor_raw_data> is deprecated: use dobot-msg:motor_raw_data instead.")))

(cl:ensure-generic-function 'raw_timestamp-val :lambda-list '(m))
(cl:defmethod raw_timestamp-val ((m <motor_raw_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:raw_timestamp-val is deprecated.  Use dobot-msg:raw_timestamp instead.")
  (raw_timestamp m))

(cl:ensure-generic-function 'raw_requested_velocity-val :lambda-list '(m))
(cl:defmethod raw_requested_velocity-val ((m <motor_raw_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:raw_requested_velocity-val is deprecated.  Use dobot-msg:raw_requested_velocity instead.")
  (raw_requested_velocity m))

(cl:ensure-generic-function 'raw_velocity-val :lambda-list '(m))
(cl:defmethod raw_velocity-val ((m <motor_raw_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:raw_velocity-val is deprecated.  Use dobot-msg:raw_velocity instead.")
  (raw_velocity m))

(cl:ensure-generic-function 'raw_current-val :lambda-list '(m))
(cl:defmethod raw_current-val ((m <motor_raw_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:raw_current-val is deprecated.  Use dobot-msg:raw_current instead.")
  (raw_current m))

(cl:ensure-generic-function 'raw_temperature-val :lambda-list '(m))
(cl:defmethod raw_temperature-val ((m <motor_raw_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:raw_temperature-val is deprecated.  Use dobot-msg:raw_temperature instead.")
  (raw_temperature m))

(cl:ensure-generic-function 'raw_supply_voltage-val :lambda-list '(m))
(cl:defmethod raw_supply_voltage-val ((m <motor_raw_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:raw_supply_voltage-val is deprecated.  Use dobot-msg:raw_supply_voltage instead.")
  (raw_supply_voltage m))

(cl:ensure-generic-function 'raw_pwm-val :lambda-list '(m))
(cl:defmethod raw_pwm-val ((m <motor_raw_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:raw_pwm-val is deprecated.  Use dobot-msg:raw_pwm instead.")
  (raw_pwm m))

(cl:ensure-generic-function 'raw_torque-val :lambda-list '(m))
(cl:defmethod raw_torque-val ((m <motor_raw_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:raw_torque-val is deprecated.  Use dobot-msg:raw_torque instead.")
  (raw_torque m))

(cl:ensure-generic-function 'raw_acceleration-val :lambda-list '(m))
(cl:defmethod raw_acceleration-val ((m <motor_raw_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:raw_acceleration-val is deprecated.  Use dobot-msg:raw_acceleration instead.")
  (raw_acceleration m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <motor_raw_data>) ostream)
  "Serializes a message object of type '<motor_raw_data>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'raw_timestamp))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'raw_requested_velocity))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'raw_velocity))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'raw_current))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'raw_temperature))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'raw_supply_voltage))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'raw_pwm))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'raw_torque))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'raw_acceleration))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <motor_raw_data>) istream)
  "Deserializes a message object of type '<motor_raw_data>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'raw_timestamp) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'raw_requested_velocity) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'raw_velocity) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'raw_current) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'raw_temperature) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'raw_supply_voltage) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'raw_pwm) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'raw_torque) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'raw_acceleration) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<motor_raw_data>)))
  "Returns string type for a message object of type '<motor_raw_data>"
  "dobot/motor_raw_data")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'motor_raw_data)))
  "Returns string type for a message object of type 'motor_raw_data"
  "dobot/motor_raw_data")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<motor_raw_data>)))
  "Returns md5sum for a message object of type '<motor_raw_data>"
  "584bddd3c7b7f3d0e01f4bcf0da3649c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'motor_raw_data)))
  "Returns md5sum for a message object of type 'motor_raw_data"
  "584bddd3c7b7f3d0e01f4bcf0da3649c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<motor_raw_data>)))
  "Returns full string definition for message of type '<motor_raw_data>"
  (cl:format cl:nil "float64 raw_timestamp~%float64 raw_requested_velocity~%float64 raw_velocity~%float64 raw_current~%float64 raw_temperature~%float64 raw_supply_voltage~%float64 raw_pwm~%float64 raw_torque~%float64 raw_acceleration~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'motor_raw_data)))
  "Returns full string definition for message of type 'motor_raw_data"
  (cl:format cl:nil "float64 raw_timestamp~%float64 raw_requested_velocity~%float64 raw_velocity~%float64 raw_current~%float64 raw_temperature~%float64 raw_supply_voltage~%float64 raw_pwm~%float64 raw_torque~%float64 raw_acceleration~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <motor_raw_data>))
  (cl:+ 0
     8
     8
     8
     8
     8
     8
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <motor_raw_data>))
  "Converts a ROS message object to a list"
  (cl:list 'motor_raw_data
    (cl:cons ':raw_timestamp (raw_timestamp msg))
    (cl:cons ':raw_requested_velocity (raw_requested_velocity msg))
    (cl:cons ':raw_velocity (raw_velocity msg))
    (cl:cons ':raw_current (raw_current msg))
    (cl:cons ':raw_temperature (raw_temperature msg))
    (cl:cons ':raw_supply_voltage (raw_supply_voltage msg))
    (cl:cons ':raw_pwm (raw_pwm msg))
    (cl:cons ':raw_torque (raw_torque msg))
    (cl:cons ':raw_acceleration (raw_acceleration msg))
))
