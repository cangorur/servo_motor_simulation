;; Auto-generated. Do not edit!


(when (boundp 'dobot::pid_control_data)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'pid_control_data (find-package "DOBOT")))
(unless (find-package "DOBOT::PID_CONTROL_DATA")
  (make-package "DOBOT::PID_CONTROL_DATA"))

(in-package "ROS")
;;//! \htmlinclude pid_control_data.msg.html


(defclass dobot::pid_control_data
  :super ros::object
  :slots (_power_real _power_calc _speed_min _speed_max ))

(defmethod dobot::pid_control_data
  (:init
   (&key
    ((:power_real __power_real) 0.0)
    ((:power_calc __power_calc) 0.0)
    ((:speed_min __speed_min) 0.0)
    ((:speed_max __speed_max) 0.0)
    )
   (send-super :init)
   (setq _power_real (float __power_real))
   (setq _power_calc (float __power_calc))
   (setq _speed_min (float __speed_min))
   (setq _speed_max (float __speed_max))
   self)
  (:power_real
   (&optional __power_real)
   (if __power_real (setq _power_real __power_real)) _power_real)
  (:power_calc
   (&optional __power_calc)
   (if __power_calc (setq _power_calc __power_calc)) _power_calc)
  (:speed_min
   (&optional __speed_min)
   (if __speed_min (setq _speed_min __speed_min)) _speed_min)
  (:speed_max
   (&optional __speed_max)
   (if __speed_max (setq _speed_max __speed_max)) _speed_max)
  (:serialization-length
   ()
   (+
    ;; float32 _power_real
    4
    ;; float32 _power_calc
    4
    ;; float32 _speed_min
    4
    ;; float32 _speed_max
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _power_real
       (sys::poke _power_real (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _power_calc
       (sys::poke _power_calc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _speed_min
       (sys::poke _speed_min (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _speed_max
       (sys::poke _speed_max (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _power_real
     (setq _power_real (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _power_calc
     (setq _power_calc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _speed_min
     (setq _speed_min (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _speed_max
     (setq _speed_max (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get dobot::pid_control_data :md5sum-) "4cad1da3b889b346f0b6364044c5116b")
(setf (get dobot::pid_control_data :datatype-) "dobot/pid_control_data")
(setf (get dobot::pid_control_data :definition-)
      "float32 power_real
float32 power_calc
float32 speed_min
float32 speed_max

")



(provide :dobot/pid_control_data "4cad1da3b889b346f0b6364044c5116b")


