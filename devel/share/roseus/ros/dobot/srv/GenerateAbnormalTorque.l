;; Auto-generated. Do not edit!


(when (boundp 'dobot::GenerateAbnormalTorque)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'GenerateAbnormalTorque (find-package "DOBOT")))
(unless (find-package "DOBOT::GENERATEABNORMALTORQUE")
  (make-package "DOBOT::GENERATEABNORMALTORQUE"))
(unless (find-package "DOBOT::GENERATEABNORMALTORQUEREQUEST")
  (make-package "DOBOT::GENERATEABNORMALTORQUEREQUEST"))
(unless (find-package "DOBOT::GENERATEABNORMALTORQUERESPONSE")
  (make-package "DOBOT::GENERATEABNORMALTORQUERESPONSE"))

(in-package "ROS")





(defclass dobot::GenerateAbnormalTorqueRequest
  :super ros::object
  :slots (_isEnabled _index _type _param1 _param2 _holdTime ))

(defmethod dobot::GenerateAbnormalTorqueRequest
  (:init
   (&key
    ((:isEnabled __isEnabled) nil)
    ((:index __index) 0)
    ((:type __type) "")
    ((:param1 __param1) 0.0)
    ((:param2 __param2) 0.0)
    ((:holdTime __holdTime) 0.0)
    )
   (send-super :init)
   (setq _isEnabled __isEnabled)
   (setq _index (round __index))
   (setq _type (string __type))
   (setq _param1 (float __param1))
   (setq _param2 (float __param2))
   (setq _holdTime (float __holdTime))
   self)
  (:isEnabled
   (&optional __isEnabled)
   (if __isEnabled (setq _isEnabled __isEnabled)) _isEnabled)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:type
   (&optional __type)
   (if __type (setq _type __type)) _type)
  (:param1
   (&optional __param1)
   (if __param1 (setq _param1 __param1)) _param1)
  (:param2
   (&optional __param2)
   (if __param2 (setq _param2 __param2)) _param2)
  (:holdTime
   (&optional __holdTime)
   (if __holdTime (setq _holdTime __holdTime)) _holdTime)
  (:serialization-length
   ()
   (+
    ;; bool _isEnabled
    1
    ;; int8 _index
    1
    ;; string _type
    4 (length _type)
    ;; float32 _param1
    4
    ;; float32 _param2
    4
    ;; float32 _holdTime
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
     ;; string _type
       (write-long (length _type) s) (princ _type s)
     ;; float32 _param1
       (sys::poke _param1 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _param2
       (sys::poke _param2 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _holdTime
       (sys::poke _holdTime (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _isEnabled
     (setq _isEnabled (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int8 _index
     (setq _index (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _index 127) (setq _index (- _index 256)))
   ;; string _type
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _type (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; float32 _param1
     (setq _param1 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _param2
     (setq _param2 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _holdTime
     (setq _holdTime (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(defclass dobot::GenerateAbnormalTorqueResponse
  :super ros::object
  :slots (_success ))

(defmethod dobot::GenerateAbnormalTorqueResponse
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

(defclass dobot::GenerateAbnormalTorque
  :super ros::object
  :slots ())

(setf (get dobot::GenerateAbnormalTorque :md5sum-) "44f381e1746ec656377c4e7f22e5a647")
(setf (get dobot::GenerateAbnormalTorque :datatype-) "dobot/GenerateAbnormalTorque")
(setf (get dobot::GenerateAbnormalTorque :request) dobot::GenerateAbnormalTorqueRequest)
(setf (get dobot::GenerateAbnormalTorque :response) dobot::GenerateAbnormalTorqueResponse)

(defmethod dobot::GenerateAbnormalTorqueRequest
  (:response () (instance dobot::GenerateAbnormalTorqueResponse :init)))

(setf (get dobot::GenerateAbnormalTorqueRequest :md5sum-) "44f381e1746ec656377c4e7f22e5a647")
(setf (get dobot::GenerateAbnormalTorqueRequest :datatype-) "dobot/GenerateAbnormalTorqueRequest")
(setf (get dobot::GenerateAbnormalTorqueRequest :definition-)
      "bool isEnabled
int8 index
string type
float32 param1
float32 param2
float32 holdTime
---
bool success



")

(setf (get dobot::GenerateAbnormalTorqueResponse :md5sum-) "44f381e1746ec656377c4e7f22e5a647")
(setf (get dobot::GenerateAbnormalTorqueResponse :datatype-) "dobot/GenerateAbnormalTorqueResponse")
(setf (get dobot::GenerateAbnormalTorqueResponse :definition-)
      "bool isEnabled
int8 index
string type
float32 param1
float32 param2
float32 holdTime
---
bool success



")



(provide :dobot/GenerateAbnormalTorque "44f381e1746ec656377c4e7f22e5a647")


