;; Auto-generated. Do not edit!


(when (boundp 'dobot::OneTimeMotorControl)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'OneTimeMotorControl (find-package "DOBOT")))
(unless (find-package "DOBOT::ONETIMEMOTORCONTROL")
  (make-package "DOBOT::ONETIMEMOTORCONTROL"))
(unless (find-package "DOBOT::ONETIMEMOTORCONTROLREQUEST")
  (make-package "DOBOT::ONETIMEMOTORCONTROLREQUEST"))
(unless (find-package "DOBOT::ONETIMEMOTORCONTROLRESPONSE")
  (make-package "DOBOT::ONETIMEMOTORCONTROLRESPONSE"))

(in-package "ROS")





(defclass dobot::OneTimeMotorControlRequest
  :super ros::object
  :slots (_isOn _index _speed _isQueued ))

(defmethod dobot::OneTimeMotorControlRequest
  (:init
   (&key
    ((:isOn __isOn) 0)
    ((:index __index) 0)
    ((:speed __speed) 0.0)
    ((:isQueued __isQueued) nil)
    )
   (send-super :init)
   (setq _isOn (round __isOn))
   (setq _index (round __index))
   (setq _speed (float __speed))
   (setq _isQueued __isQueued)
   self)
  (:isOn
   (&optional __isOn)
   (if __isOn (setq _isOn __isOn)) _isOn)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:speed
   (&optional __speed)
   (if __speed (setq _speed __speed)) _speed)
  (:isQueued
   (&optional __isQueued)
   (if __isQueued (setq _isQueued __isQueued)) _isQueued)
  (:serialization-length
   ()
   (+
    ;; uint8 _isOn
    1
    ;; uint8 _index
    1
    ;; float32 _speed
    4
    ;; bool _isQueued
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _isOn
       (write-byte _isOn s)
     ;; uint8 _index
       (write-byte _index s)
     ;; float32 _speed
       (sys::poke _speed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; bool _isQueued
       (if _isQueued (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _isOn
     (setq _isOn (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _index
     (setq _index (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _speed
     (setq _speed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; bool _isQueued
     (setq _isQueued (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass dobot::OneTimeMotorControlResponse
  :super ros::object
  :slots (_result ))

(defmethod dobot::OneTimeMotorControlResponse
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

(defclass dobot::OneTimeMotorControl
  :super ros::object
  :slots ())

(setf (get dobot::OneTimeMotorControl :md5sum-) "5ea0a2786a30f3b5a13cda84a619c75a")
(setf (get dobot::OneTimeMotorControl :datatype-) "dobot/OneTimeMotorControl")
(setf (get dobot::OneTimeMotorControl :request) dobot::OneTimeMotorControlRequest)
(setf (get dobot::OneTimeMotorControl :response) dobot::OneTimeMotorControlResponse)

(defmethod dobot::OneTimeMotorControlRequest
  (:response () (instance dobot::OneTimeMotorControlResponse :init)))

(setf (get dobot::OneTimeMotorControlRequest :md5sum-) "5ea0a2786a30f3b5a13cda84a619c75a")
(setf (get dobot::OneTimeMotorControlRequest :datatype-) "dobot/OneTimeMotorControlRequest")
(setf (get dobot::OneTimeMotorControlRequest :definition-)
      "
uint8 isOn

uint8 index

float32 speed
bool isQueued
---
int32 result

")

(setf (get dobot::OneTimeMotorControlResponse :md5sum-) "5ea0a2786a30f3b5a13cda84a619c75a")
(setf (get dobot::OneTimeMotorControlResponse :datatype-) "dobot/OneTimeMotorControlResponse")
(setf (get dobot::OneTimeMotorControlResponse :definition-)
      "
uint8 isOn

uint8 index

float32 speed
bool isQueued
---
int32 result

")



(provide :dobot/OneTimeMotorControl "5ea0a2786a30f3b5a13cda84a619c75a")


