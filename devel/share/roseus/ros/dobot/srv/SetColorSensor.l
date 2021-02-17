;; Auto-generated. Do not edit!


(when (boundp 'dobot::SetColorSensor)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'SetColorSensor (find-package "DOBOT")))
(unless (find-package "DOBOT::SETCOLORSENSOR")
  (make-package "DOBOT::SETCOLORSENSOR"))
(unless (find-package "DOBOT::SETCOLORSENSORREQUEST")
  (make-package "DOBOT::SETCOLORSENSORREQUEST"))
(unless (find-package "DOBOT::SETCOLORSENSORRESPONSE")
  (make-package "DOBOT::SETCOLORSENSORRESPONSE"))

(in-package "ROS")





(defclass dobot::SetColorSensorRequest
  :super ros::object
  :slots (_enable _colorPort ))

(defmethod dobot::SetColorSensorRequest
  (:init
   (&key
    ((:enable __enable) nil)
    ((:colorPort __colorPort) 0)
    )
   (send-super :init)
   (setq _enable __enable)
   (setq _colorPort (round __colorPort))
   self)
  (:enable
   (&optional __enable)
   (if __enable (setq _enable __enable)) _enable)
  (:colorPort
   (&optional __colorPort)
   (if __colorPort (setq _colorPort __colorPort)) _colorPort)
  (:serialization-length
   ()
   (+
    ;; bool _enable
    1
    ;; uint8 _colorPort
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _enable
       (if _enable (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _colorPort
       (write-byte _colorPort s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _enable
     (setq _enable (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _colorPort
     (setq _colorPort (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass dobot::SetColorSensorResponse
  :super ros::object
  :slots (_result ))

(defmethod dobot::SetColorSensorResponse
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

(defclass dobot::SetColorSensor
  :super ros::object
  :slots ())

(setf (get dobot::SetColorSensor :md5sum-) "8058129f76db40bd87aff8d2324c566b")
(setf (get dobot::SetColorSensor :datatype-) "dobot/SetColorSensor")
(setf (get dobot::SetColorSensor :request) dobot::SetColorSensorRequest)
(setf (get dobot::SetColorSensor :response) dobot::SetColorSensorResponse)

(defmethod dobot::SetColorSensorRequest
  (:response () (instance dobot::SetColorSensorResponse :init)))

(setf (get dobot::SetColorSensorRequest :md5sum-) "8058129f76db40bd87aff8d2324c566b")
(setf (get dobot::SetColorSensorRequest :datatype-) "dobot/SetColorSensorRequest")
(setf (get dobot::SetColorSensorRequest :definition-)
      "
bool enable

uint8 colorPort
---

int32 result

")

(setf (get dobot::SetColorSensorResponse :md5sum-) "8058129f76db40bd87aff8d2324c566b")
(setf (get dobot::SetColorSensorResponse :datatype-) "dobot/SetColorSensorResponse")
(setf (get dobot::SetColorSensorResponse :definition-)
      "
bool enable

uint8 colorPort
---

int32 result

")



(provide :dobot/SetColorSensor "8058129f76db40bd87aff8d2324c566b")


