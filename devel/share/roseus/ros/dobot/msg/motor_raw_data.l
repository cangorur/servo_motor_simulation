;; Auto-generated. Do not edit!


(when (boundp 'dobot::motor_raw_data)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'motor_raw_data (find-package "DOBOT")))
(unless (find-package "DOBOT::MOTOR_RAW_DATA")
  (make-package "DOBOT::MOTOR_RAW_DATA"))

(in-package "ROS")
;;//! \htmlinclude motor_raw_data.msg.html


(defclass dobot::motor_raw_data
  :super ros::object
  :slots (_raw_timestamp _raw_requested_velocity _raw_velocity _raw_current _raw_temperature _raw_supply_voltage _raw_pwm _raw_torque _raw_acceleration ))

(defmethod dobot::motor_raw_data
  (:init
   (&key
    ((:raw_timestamp __raw_timestamp) 0.0)
    ((:raw_requested_velocity __raw_requested_velocity) 0.0)
    ((:raw_velocity __raw_velocity) 0.0)
    ((:raw_current __raw_current) 0.0)
    ((:raw_temperature __raw_temperature) 0.0)
    ((:raw_supply_voltage __raw_supply_voltage) 0.0)
    ((:raw_pwm __raw_pwm) 0.0)
    ((:raw_torque __raw_torque) 0.0)
    ((:raw_acceleration __raw_acceleration) 0.0)
    )
   (send-super :init)
   (setq _raw_timestamp (float __raw_timestamp))
   (setq _raw_requested_velocity (float __raw_requested_velocity))
   (setq _raw_velocity (float __raw_velocity))
   (setq _raw_current (float __raw_current))
   (setq _raw_temperature (float __raw_temperature))
   (setq _raw_supply_voltage (float __raw_supply_voltage))
   (setq _raw_pwm (float __raw_pwm))
   (setq _raw_torque (float __raw_torque))
   (setq _raw_acceleration (float __raw_acceleration))
   self)
  (:raw_timestamp
   (&optional __raw_timestamp)
   (if __raw_timestamp (setq _raw_timestamp __raw_timestamp)) _raw_timestamp)
  (:raw_requested_velocity
   (&optional __raw_requested_velocity)
   (if __raw_requested_velocity (setq _raw_requested_velocity __raw_requested_velocity)) _raw_requested_velocity)
  (:raw_velocity
   (&optional __raw_velocity)
   (if __raw_velocity (setq _raw_velocity __raw_velocity)) _raw_velocity)
  (:raw_current
   (&optional __raw_current)
   (if __raw_current (setq _raw_current __raw_current)) _raw_current)
  (:raw_temperature
   (&optional __raw_temperature)
   (if __raw_temperature (setq _raw_temperature __raw_temperature)) _raw_temperature)
  (:raw_supply_voltage
   (&optional __raw_supply_voltage)
   (if __raw_supply_voltage (setq _raw_supply_voltage __raw_supply_voltage)) _raw_supply_voltage)
  (:raw_pwm
   (&optional __raw_pwm)
   (if __raw_pwm (setq _raw_pwm __raw_pwm)) _raw_pwm)
  (:raw_torque
   (&optional __raw_torque)
   (if __raw_torque (setq _raw_torque __raw_torque)) _raw_torque)
  (:raw_acceleration
   (&optional __raw_acceleration)
   (if __raw_acceleration (setq _raw_acceleration __raw_acceleration)) _raw_acceleration)
  (:serialization-length
   ()
   (+
    ;; float64 _raw_timestamp
    8
    ;; float64 _raw_requested_velocity
    8
    ;; float64 _raw_velocity
    8
    ;; float64 _raw_current
    8
    ;; float64 _raw_temperature
    8
    ;; float64 _raw_supply_voltage
    8
    ;; float64 _raw_pwm
    8
    ;; float64 _raw_torque
    8
    ;; float64 _raw_acceleration
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _raw_timestamp
       (sys::poke _raw_timestamp (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _raw_requested_velocity
       (sys::poke _raw_requested_velocity (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _raw_velocity
       (sys::poke _raw_velocity (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _raw_current
       (sys::poke _raw_current (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _raw_temperature
       (sys::poke _raw_temperature (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _raw_supply_voltage
       (sys::poke _raw_supply_voltage (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _raw_pwm
       (sys::poke _raw_pwm (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _raw_torque
       (sys::poke _raw_torque (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _raw_acceleration
       (sys::poke _raw_acceleration (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _raw_timestamp
     (setq _raw_timestamp (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _raw_requested_velocity
     (setq _raw_requested_velocity (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _raw_velocity
     (setq _raw_velocity (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _raw_current
     (setq _raw_current (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _raw_temperature
     (setq _raw_temperature (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _raw_supply_voltage
     (setq _raw_supply_voltage (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _raw_pwm
     (setq _raw_pwm (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _raw_torque
     (setq _raw_torque (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _raw_acceleration
     (setq _raw_acceleration (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get dobot::motor_raw_data :md5sum-) "584bddd3c7b7f3d0e01f4bcf0da3649c")
(setf (get dobot::motor_raw_data :datatype-) "dobot/motor_raw_data")
(setf (get dobot::motor_raw_data :definition-)
      "float64 raw_timestamp
float64 raw_requested_velocity
float64 raw_velocity
float64 raw_current
float64 raw_temperature
float64 raw_supply_voltage
float64 raw_pwm
float64 raw_torque
float64 raw_acceleration

")



(provide :dobot/motor_raw_data "584bddd3c7b7f3d0e01f4bcf0da3649c")


