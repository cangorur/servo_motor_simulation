;; Auto-generated. Do not edit!


(when (boundp 'dobot::SetInfraredSensor)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'SetInfraredSensor (find-package "DOBOT")))
(unless (find-package "DOBOT::SETINFRAREDSENSOR")
  (make-package "DOBOT::SETINFRAREDSENSOR"))
(unless (find-package "DOBOT::SETINFRAREDSENSORREQUEST")
  (make-package "DOBOT::SETINFRAREDSENSORREQUEST"))
(unless (find-package "DOBOT::SETINFRAREDSENSORRESPONSE")
  (make-package "DOBOT::SETINFRAREDSENSORRESPONSE"))

(in-package "ROS")





(defclass dobot::SetInfraredSensorRequest
  :super ros::object
  :slots (_enable _infraredPort ))

(defmethod dobot::SetInfraredSensorRequest
  (:init
   (&key
    ((:enable __enable) nil)
    ((:infraredPort __infraredPort) 0)
    )
   (send-super :init)
   (setq _enable __enable)
   (setq _infraredPort (round __infraredPort))
   self)
  (:enable
   (&optional __enable)
   (if __enable (setq _enable __enable)) _enable)
  (:infraredPort
   (&optional __infraredPort)
   (if __infraredPort (setq _infraredPort __infraredPort)) _infraredPort)
  (:serialization-length
   ()
   (+
    ;; bool _enable
    1
    ;; uint8 _infraredPort
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _enable
       (if _enable (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _infraredPort
       (write-byte _infraredPort s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _enable
     (setq _enable (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _infraredPort
     (setq _infraredPort (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass dobot::SetInfraredSensorResponse
  :super ros::object
  :slots (_result ))

(defmethod dobot::SetInfraredSensorResponse
  (:init
   (&key
    ((:result __result) 0)
    )
   (send-super :init)
   (setq _result (round __result))
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; int32 _result
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _result
       (write-long _result s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _result
     (setq _result (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass dobot::SetInfraredSensor
  :super ros::object
  :slots ())

(setf (get dobot::SetInfraredSensor :md5sum-) "5e6ab8bedaa3155aca50aa4a43e094eb")
(setf (get dobot::SetInfraredSensor :datatype-) "dobot/SetInfraredSensor")
(setf (get dobot::SetInfraredSensor :request) dobot::SetInfraredSensorRequest)
(setf (get dobot::SetInfraredSensor :response) dobot::SetInfraredSensorResponse)

(defmethod dobot::SetInfraredSensorRequest
  (:response () (instance dobot::SetInfraredSensorResponse :init)))

(setf (get dobot::SetInfraredSensorRequest :md5sum-) "5e6ab8bedaa3155aca50aa4a43e094eb")
(setf (get dobot::SetInfraredSensorRequest :datatype-) "dobot/SetInfraredSensorRequest")
(setf (get dobot::SetInfraredSensorRequest :definition-)
      "
bool enable

uint8 infraredPort
---
int32 result

")

(setf (get dobot::SetInfraredSensorResponse :md5sum-) "5e6ab8bedaa3155aca50aa4a43e094eb")
(setf (get dobot::SetInfraredSensorResponse :datatype-) "dobot/SetInfraredSensorResponse")
(setf (get dobot::SetInfraredSensorResponse :definition-)
      "
bool enable

uint8 infraredPort
---
int32 result

")



(provide :dobot/SetInfraredSensor "5e6ab8bedaa3155aca50aa4a43e094eb")


