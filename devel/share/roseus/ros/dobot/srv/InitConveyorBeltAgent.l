;; Auto-generated. Do not edit!


(when (boundp 'dobot::InitConveyorBeltAgent)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'InitConveyorBeltAgent (find-package "DOBOT")))
(unless (find-package "DOBOT::INITCONVEYORBELTAGENT")
  (make-package "DOBOT::INITCONVEYORBELTAGENT"))
(unless (find-package "DOBOT::INITCONVEYORBELTAGENTREQUEST")
  (make-package "DOBOT::INITCONVEYORBELTAGENTREQUEST"))
(unless (find-package "DOBOT::INITCONVEYORBELTAGENTRESPONSE")
  (make-package "DOBOT::INITCONVEYORBELTAGENTRESPONSE"))

(in-package "ROS")





(defclass dobot::InitConveyorBeltAgentRequest
  :super ros::object
  :slots ())

(defmethod dobot::InitConveyorBeltAgentRequest
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

(defclass dobot::InitConveyorBeltAgentResponse
  :super ros::object
  :slots (_success ))

(defmethod dobot::InitConveyorBeltAgentResponse
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

(defclass dobot::InitConveyorBeltAgent
  :super ros::object
  :slots ())

(setf (get dobot::InitConveyorBeltAgent :md5sum-) "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(setf (get dobot::InitConveyorBeltAgent :datatype-) "dobot/InitConveyorBeltAgent")
(setf (get dobot::InitConveyorBeltAgent :request) dobot::InitConveyorBeltAgentRequest)
(setf (get dobot::InitConveyorBeltAgent :response) dobot::InitConveyorBeltAgentResponse)

(defmethod dobot::InitConveyorBeltAgentRequest
  (:response () (instance dobot::InitConveyorBeltAgentResponse :init)))

(setf (get dobot::InitConveyorBeltAgentRequest :md5sum-) "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(setf (get dobot::InitConveyorBeltAgentRequest :datatype-) "dobot/InitConveyorBeltAgentRequest")
(setf (get dobot::InitConveyorBeltAgentRequest :definition-)
      "---
int32 success

")

(setf (get dobot::InitConveyorBeltAgentResponse :md5sum-) "3c2bcf2ff0894cb3058b1bf4c8c4175a")
(setf (get dobot::InitConveyorBeltAgentResponse :datatype-) "dobot/InitConveyorBeltAgentResponse")
(setf (get dobot::InitConveyorBeltAgentResponse :definition-)
      "---
int32 success

")



(provide :dobot/InitConveyorBeltAgent "3c2bcf2ff0894cb3058b1bf4c8c4175a")


