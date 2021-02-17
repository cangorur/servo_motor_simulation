;; Auto-generated. Do not edit!


(when (boundp 'dobot::InitMotorControlApp)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'InitMotorControlApp (find-package "DOBOT")))
(unless (find-package "DOBOT::INITMOTORCONTROLAPP")
  (make-package "DOBOT::INITMOTORCONTROLAPP"))
(unless (find-package "DOBOT::INITMOTORCONTROLAPPREQUEST")
  (make-package "DOBOT::INITMOTORCONTROLAPPREQUEST"))
(unless (find-package "DOBOT::INITMOTORCONTROLAPPRESPONSE")
  (make-package "DOBOT::INITMOTORCONTROLAPPRESPONSE"))

(in-package "ROS")





(defclass dobot::InitMotorControlAppRequest
  :super ros::object
  :slots ())

(defmethod dobot::InitMotorControlAppRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass dobot::InitMotorControlAppResponse
  :super ros::object
  :slots (_success ))

(defmethod dobot::InitMotorControlAppResponse
  (:init
   (&key
    ((:success __success) 0)
    )
   (send-super :init)
   (setq _success (round __success))
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; int32 _success
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _success
       (write-long _success s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _success
     (setq _success (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass dobot::InitMotorControlApp
  :super ros::object
  :slots ())

(setf (get dobot::InitMotorControlApp :md5sum-) "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(setf (get dobot::InitMotorControlApp :datatype-) "dobot/InitMotorControlApp")
(setf (get dobot::InitMotorControlApp :request) dobot::InitMotorControlAppRequest)
(setf (get dobot::InitMotorControlApp :response) dobot::InitMotorControlAppResponse)

(defmethod dobot::InitMotorControlAppRequest
  (:response () (instance dobot::InitMotorControlAppResponse :init)))

(setf (get dobot::InitMotorControlAppRequest :md5sum-) "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(setf (get dobot::InitMotorControlAppRequest :datatype-) "dobot/InitMotorControlAppRequest")
(setf (get dobot::InitMotorControlAppRequest :definition-)
      "---
int32 success

")

(setf (get dobot::InitMotorControlAppResponse :md5sum-) "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(setf (get dobot::InitMotorControlAppResponse :datatype-) "dobot/InitMotorControlAppResponse")
(setf (get dobot::InitMotorControlAppResponse :definition-)
      "---
int32 success

")



(provide :dobot/InitMotorControlApp "3c2bcf2ff0894cb3058b1bf4c8c4175a")


