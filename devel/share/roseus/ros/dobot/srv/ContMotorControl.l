;; Auto-generated. Do not edit!


(when (boundp 'dobot::ContMotorControl)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'ContMotorControl (find-package "DOBOT")))
(unless (find-package "DOBOT::CONTMOTORCONTROL")
  (make-package "DOBOT::CONTMOTORCONTROL"))
(unless (find-package "DOBOT::CONTMOTORCONTROLREQUEST")
  (make-package "DOBOT::CONTMOTORCONTROLREQUEST"))
(unless (find-package "DOBOT::CONTMOTORCONTROLRESPONSE")
  (make-package "DOBOT::CONTMOTORCONTROLRESPONSE"))

(in-package "ROS")





(defclass dobot::ContMotorControlRequest
  :super ros::object
  :slots (_index _isEnabled _speed _isQueued ))

(defmethod dobot::ContMotorControlRequest
  (:init
   (&key
    ((:index __index) 0)
    ((:isEnabled __isEnabled) 0)
    ((:speed __speed) 0.0)
    ((:isQueued __isQueued) nil)
    )
   (send-super :init)
   (setq _index (round __index))
   (setq _isEnabled (round __isEnabled))
   (setq _speed (float __speed))
   (setq _isQueued __isQueued)
   self)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:isEnabled
   (&optional __isEnabled)
   (if __isEnabled (setq _isEnabled __isEnabled)) _isEnabled)
  (:speed
   (&optional __speed)
   (if __speed (setq _speed __speed)) _speed)
  (:isQueued
   (&optional __isQueued)
   (if __isQueued (setq _isQueued __isQueued)) _isQueued)
  (:serialization-length
   ()
   (+
    ;; uint8 _index
    1
    ;; uint8 _isEnabled
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
     ;; uint8 _index
       (write-byte _index s)
     ;; uint8 _isEnabled
       (write-byte _isEnabled s)
     ;; float32 _speed
       (sys::poke _speed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; bool _isQueued
       (if _isQueued (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _index
     (setq _index (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _isEnabled
     (setq _isEnabled (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _speed
     (setq _speed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; bool _isQueued
     (setq _isQueued (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass dobot::ContMotorControlResponse
  :super ros::object
  :slots (_result ))

(defmethod dobot::ContMotorControlResponse
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

(defclass dobot::ContMotorControl
  :super ros::object
  :slots ())

(setf (get dobot::ContMotorControl :md5sum-) "83e4a796d51a754bc20fc8ddae5d173f")
(setf (get dobot::ContMotorControl :datatype-) "dobot/ContMotorControl")
(setf (get dobot::ContMotorControl :request) dobot::ContMotorControlRequest)
(setf (get dobot::ContMotorControl :response) dobot::ContMotorControlResponse)

(defmethod dobot::ContMotorControlRequest
  (:response () (instance dobot::ContMotorControlResponse :init)))

(setf (get dobot::ContMotorControlRequest :md5sum-) "83e4a796d51a754bc20fc8ddae5d173f")
(setf (get dobot::ContMotorControlRequest :datatype-) "dobot/ContMotorControlRequest")
(setf (get dobot::ContMotorControlRequest :definition-)
      "
uint8 index

uint8 isEnabled

float32 speed
bool isQueued
---
int32 result

")

(setf (get dobot::ContMotorControlResponse :md5sum-) "83e4a796d51a754bc20fc8ddae5d173f")
(setf (get dobot::ContMotorControlResponse :datatype-) "dobot/ContMotorControlResponse")
(setf (get dobot::ContMotorControlResponse :definition-)
      "
uint8 index

uint8 isEnabled

float32 speed
bool isQueued
---
int32 result

")



(provide :dobot/ContMotorControl "83e4a796d51a754bc20fc8ddae5d173f")


