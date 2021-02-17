;; Auto-generated. Do not edit!


(when (boundp 'dobot::motor_data)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'motor_data (find-package "DOBOT")))
(unless (find-package "DOBOT::MOTOR_DATA")
  (make-package "DOBOT::MOTOR_DATA"))

(in-package "ROS")
;;//! \htmlinclude motor_data.msg.html


(defclass dobot::motor_data
  :super ros::object
  :slots (_timestamp _requested_velocity _velocity _temperature _torque _current _effective_voltage _power_in _acceleration ))

(defmethod dobot::motor_data
  (:init
   (&key
    ((:timestamp __timestamp) 0.0)
    ((:requested_velocity __requested_velocity) 0.0)
    ((:velocity __velocity) 0.0)
    ((:temperature __temperature) 0.0)
    ((:torque __torque) 0.0)
    ((:current __current) 0.0)
    ((:effective_voltage __effective_voltage) 0.0)
    ((:power_in __power_in) 0.0)
    ((:acceleration __acceleration) 0.0)
    )
   (send-super :init)
   (setq _timestamp (float __timestamp))
   (setq _requested_velocity (float __requested_velocity))
   (setq _velocity (float __velocity))
   (setq _temperature (float __temperature))
   (setq _torque (float __torque))
   (setq _current (float __current))
   (setq _effective_voltage (float __effective_voltage))
   (setq _power_in (float __power_in))
   (setq _acceleration (float __acceleration))
   self)
  (:timestamp
   (&optional __timestamp)
   (if __timestamp (setq _timestamp __timestamp)) _timestamp)
  (:requested_velocity
   (&optional __requested_velocity)
   (if __requested_velocity (setq _requested_velocity __requested_velocity)) _requested_velocity)
  (:velocity
   (&optional __velocity)
   (if __velocity (setq _velocity __velocity)) _velocity)
  (:temperature
   (&optional __temperature)
   (if __temperature (setq _temperature __temperature)) _temperature)
  (:torque
   (&optional __torque)
   (if __torque (setq _torque __torque)) _torque)
  (:current
   (&optional __current)
   (if __current (setq _current __current)) _current)
  (:effective_voltage
   (&optional __effective_voltage)
   (if __effective_voltage (setq _effective_voltage __effective_voltage)) _effective_voltage)
  (:power_in
   (&optional __power_in)
   (if __power_in (setq _power_in __power_in)) _power_in)
  (:acceleration
   (&optional __acceleration)
   (if __acceleration (setq _acceleration __acceleration)) _acceleration)
  (:serialization-length
   ()
   (+
    ;; float64 _timestamp
    8
    ;; float64 _requested_velocity
    8
    ;; float64 _velocity
    8
    ;; float64 _temperature
    8
    ;; float64 _torque
    8
    ;; float64 _current
    8
    ;; float64 _effective_voltage
    8
    ;; float64 _power_in
    8
    ;; float64 _acceleration
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _timestamp
       (sys::poke _timestamp (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _requested_velocity
       (sys::poke _requested_velocity (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _velocity
       (sys::poke _velocity (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _temperature
       (sys::poke _temperature (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _torque
       (sys::poke _torque (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _current
       (sys::poke _current (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _effective_voltage
       (sys::poke _effective_voltage (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _power_in
       (sys::poke _power_in (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _acceleration
       (sys::poke _acceleration (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _timestamp
     (setq _timestamp (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _requested_velocity
     (setq _requested_velocity (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _velocity
     (setq _velocity (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _temperature
     (setq _temperature (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _torque
     (setq _torque (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _current
     (setq _current (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _effective_voltage
     (setq _effective_voltage (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _power_in
     (setq _power_in (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _acceleration
     (setq _acceleration (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get dobot::motor_data :md5sum-) "ace88c459da6eff94928e461d29042b8")
(setf (get dobot::motor_data :datatype-) "dobot/motor_data")
(setf (get dobot::motor_data :definition-)
      "float64 timestamp
float64 requested_velocity
float64 velocity
float64 temperature
float64 torque
float64 current
float64 effective_voltage
float64 power_in
float64 acceleration

")



(provide :dobot/motor_data "ace88c459da6eff94928e461d29042b8")


