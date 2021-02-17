;; Auto-generated. Do not edit!


(when (boundp 'dobot::GenerateNormalTorque)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'GenerateNormalTorque (find-package "DOBOT")))
(unless (find-package "DOBOT::GENERATENORMALTORQUE")
  (make-package "DOBOT::GENERATENORMALTORQUE"))
(unless (find-package "DOBOT::GENERATENORMALTORQUEREQUEST")
  (make-package "DOBOT::GENERATENORMALTORQUEREQUEST"))
(unless (find-package "DOBOT::GENERATENORMALTORQUERESPONSE")
  (make-package "DOBOT::GENERATENORMALTORQUERESPONSE"))

(in-package "ROS")





(defclass dobot::GenerateNormalTorqueRequest
  :super ros::object
  :slots (_isEnabled _index _torque ))

(defmethod dobot::GenerateNormalTorqueRequest
  (:init
   (&key
    ((:isEnabled __isEnabled) nil)
    ((:index __index) 0)
    ((:torque __torque) 0.0)
    )
   (send-super :init)
   (setq _isEnabled __isEnabled)
   (setq _index (round __index))
   (setq _torque (float __torque))
   self)
  (:isEnabled
   (&optional __isEnabled)
   (if __isEnabled (setq _isEnabled __isEnabled)) _isEnabled)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:torque
   (&optional __torque)
   (if __torque (setq _torque __torque)) _torque)
  (:serialization-length
   ()
   (+
    ;; bool _isEnabled
    1
    ;; int8 _index
    1
    ;; float32 _torque
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _isEnabled
       (if _isEnabled (write-byte -1 s) (write-byte 0 s))
     ;; int8 _index
       (write-byte _index s)
     ;; float32 _torque
       (sys::poke _torque (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _isEnabled
     (setq _isEnabled (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int8 _index
     (setq _index (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _index 127) (setq _index (- _index 256)))
   ;; float32 _torque
     (setq _torque (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(defclass dobot::GenerateNormalTorqueResponse
  :super ros::object
  :slots (_success ))

(defmethod dobot::GenerateNormalTorqueResponse
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

(defclass dobot::GenerateNormalTorque
  :super ros::object
  :slots ())

(setf (get dobot::GenerateNormalTorque :md5sum-) "614573f1304141bc4784e7cdb5102fdb")
(setf (get dobot::GenerateNormalTorque :datatype-) "dobot/GenerateNormalTorque")
(setf (get dobot::GenerateNormalTorque :request) dobot::GenerateNormalTorqueRequest)
(setf (get dobot::GenerateNormalTorque :response) dobot::GenerateNormalTorqueResponse)

(defmethod dobot::GenerateNormalTorqueRequest
  (:response () (instance dobot::GenerateNormalTorqueResponse :init)))

(setf (get dobot::GenerateNormalTorqueRequest :md5sum-) "614573f1304141bc4784e7cdb5102fdb")
(setf (get dobot::GenerateNormalTorqueRequest :datatype-) "dobot/GenerateNormalTorqueRequest")
(setf (get dobot::GenerateNormalTorqueRequest :definition-)
      "bool isEnabled
int8 index
float32 torque
---
bool success

")

(setf (get dobot::GenerateNormalTorqueResponse :md5sum-) "614573f1304141bc4784e7cdb5102fdb")
(setf (get dobot::GenerateNormalTorqueResponse :datatype-) "dobot/GenerateNormalTorqueResponse")
(setf (get dobot::GenerateNormalTorqueResponse :definition-)
      "bool isEnabled
int8 index
float32 torque
---
bool success

")



(provide :dobot/GenerateNormalTorque "614573f1304141bc4784e7cdb5102fdb")


