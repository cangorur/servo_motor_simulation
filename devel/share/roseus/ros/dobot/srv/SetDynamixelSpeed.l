;; Auto-generated. Do not edit!


(when (boundp 'dobot::SetDynamixelSpeed)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'SetDynamixelSpeed (find-package "DOBOT")))
(unless (find-package "DOBOT::SETDYNAMIXELSPEED")
  (make-package "DOBOT::SETDYNAMIXELSPEED"))
(unless (find-package "DOBOT::SETDYNAMIXELSPEEDREQUEST")
  (make-package "DOBOT::SETDYNAMIXELSPEEDREQUEST"))
(unless (find-package "DOBOT::SETDYNAMIXELSPEEDRESPONSE")
  (make-package "DOBOT::SETDYNAMIXELSPEEDRESPONSE"))

(in-package "ROS")





(defclass dobot::SetDynamixelSpeedRequest
  :super ros::object
  :slots (_isEnabled _speed ))

(defmethod dobot::SetDynamixelSpeedRequest
  (:init
   (&key
    ((:isEnabled __isEnabled) nil)
    ((:speed __speed) 0.0)
    )
   (send-super :init)
   (setq _isEnabled __isEnabled)
   (setq _speed (float __speed))
   self)
  (:isEnabled
   (&optional __isEnabled)
   (if __isEnabled (setq _isEnabled __isEnabled)) _isEnabled)
  (:speed
   (&optional __speed)
   (if __speed (setq _speed __speed)) _speed)
  (:serialization-length
   ()
   (+
    ;; bool _isEnabled
    1
    ;; float64 _speed
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _isEnabled
       (if _isEnabled (write-byte -1 s) (write-byte 0 s))
     ;; float64 _speed
       (sys::poke _speed (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _isEnabled
     (setq _isEnabled (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _speed
     (setq _speed (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass dobot::SetDynamixelSpeedResponse
  :super ros::object
  :slots (_success ))

(defmethod dobot::SetDynamixelSpeedResponse
  (:init
   (&key
    ((:success __success) nil)
    )
   (send-super :init)
   (setq _success __success)
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass dobot::SetDynamixelSpeed
  :super ros::object
  :slots ())

(setf (get dobot::SetDynamixelSpeed :md5sum-) "33258add9094c00c2480650dfbe4cddc")
(setf (get dobot::SetDynamixelSpeed :datatype-) "dobot/SetDynamixelSpeed")
(setf (get dobot::SetDynamixelSpeed :request) dobot::SetDynamixelSpeedRequest)
(setf (get dobot::SetDynamixelSpeed :response) dobot::SetDynamixelSpeedResponse)

(defmethod dobot::SetDynamixelSpeedRequest
  (:response () (instance dobot::SetDynamixelSpeedResponse :init)))

(setf (get dobot::SetDynamixelSpeedRequest :md5sum-) "33258add9094c00c2480650dfbe4cddc")
(setf (get dobot::SetDynamixelSpeedRequest :datatype-) "dobot/SetDynamixelSpeedRequest")
(setf (get dobot::SetDynamixelSpeedRequest :definition-)
      "bool isEnabled
float64 speed
---
bool success

")

(setf (get dobot::SetDynamixelSpeedResponse :md5sum-) "33258add9094c00c2480650dfbe4cddc")
(setf (get dobot::SetDynamixelSpeedResponse :datatype-) "dobot/SetDynamixelSpeedResponse")
(setf (get dobot::SetDynamixelSpeedResponse :definition-)
      "bool isEnabled
float64 speed
---
bool success

")



(provide :dobot/SetDynamixelSpeed "33258add9094c00c2480650dfbe4cddc")


