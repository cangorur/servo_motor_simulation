;; Auto-generated. Do not edit!


(when (boundp 'dobot::GetInfraredSensor)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'GetInfraredSensor (find-package "DOBOT")))
(unless (find-package "DOBOT::GETINFRAREDSENSOR")
  (make-package "DOBOT::GETINFRAREDSENSOR"))
(unless (find-package "DOBOT::GETINFRAREDSENSORREQUEST")
  (make-package "DOBOT::GETINFRAREDSENSORREQUEST"))
(unless (find-package "DOBOT::GETINFRAREDSENSORRESPONSE")
  (make-package "DOBOT::GETINFRAREDSENSORRESPONSE"))

(in-package "ROS")





(defclass dobot::GetInfraredSensorRequest
  :super ros::object
  :slots (_infraredPort ))

(defmethod dobot::GetInfraredSensorRequest
  (:init
   (&key
    ((:infraredPort __infraredPort) 0)
    )
   (send-super :init)
   (setq _infraredPort (round __infraredPort))
   self)
  (:infraredPort
   (&optional __infraredPort)
   (if __infraredPort (setq _infraredPort __infraredPort)) _infraredPort)
  (:serialization-length
   ()
   (+
    ;; uint8 _infraredPort
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _infraredPort
       (write-byte _infraredPort s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _infraredPort
     (setq _infraredPort (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass dobot::GetInfraredSensorResponse
  :super ros::object
  :slots (_result _value ))

(defmethod dobot::GetInfraredSensorResponse
  (:init
   (&key
    ((:result __result) 0)
    ((:value __value) 0)
    )
   (send-super :init)
   (setq _result (round __result))
   (setq _value (round __value))
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; int32 _result
    4
    ;; uint8 _value
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _result
       (write-long _result s)
     ;; uint8 _value
       (write-byte _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _result
     (setq _result (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint8 _value
     (setq _value (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass dobot::GetInfraredSensor
  :super ros::object
  :slots ())

(setf (get dobot::GetInfraredSensor :md5sum-) "50c58c1cbfee32c97074de80535fc75d")
(setf (get dobot::GetInfraredSensor :datatype-) "dobot/GetInfraredSensor")
(setf (get dobot::GetInfraredSensor :request) dobot::GetInfraredSensorRequest)
(setf (get dobot::GetInfraredSensor :response) dobot::GetInfraredSensorResponse)

(defmethod dobot::GetInfraredSensorRequest
  (:response () (instance dobot::GetInfraredSensorResponse :init)))

(setf (get dobot::GetInfraredSensorRequest :md5sum-) "50c58c1cbfee32c97074de80535fc75d")
(setf (get dobot::GetInfraredSensorRequest :datatype-) "dobot/GetInfraredSensorRequest")
(setf (get dobot::GetInfraredSensorRequest :definition-)
      "uint8 infraredPort
---
int32 result
uint8 value

")

(setf (get dobot::GetInfraredSensorResponse :md5sum-) "50c58c1cbfee32c97074de80535fc75d")
(setf (get dobot::GetInfraredSensorResponse :datatype-) "dobot/GetInfraredSensorResponse")
(setf (get dobot::GetInfraredSensorResponse :definition-)
      "uint8 infraredPort
---
int32 result
uint8 value

")



(provide :dobot/GetInfraredSensor "50c58c1cbfee32c97074de80535fc75d")


