;; Auto-generated. Do not edit!


(when (boundp 'dobot::ReadReg)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'ReadReg (find-package "DOBOT")))
(unless (find-package "DOBOT::READREG")
  (make-package "DOBOT::READREG"))
(unless (find-package "DOBOT::READREGREQUEST")
  (make-package "DOBOT::READREGREQUEST"))
(unless (find-package "DOBOT::READREGRESPONSE")
  (make-package "DOBOT::READREGRESPONSE"))

(in-package "ROS")





(defclass dobot::ReadRegRequest
  :super ros::object
  :slots (_id _reg_address _data_length ))

(defmethod dobot::ReadRegRequest
  (:init
   (&key
    ((:id __id) 0)
    ((:reg_address __reg_address) 0)
    ((:data_length __data_length) 0)
    )
   (send-super :init)
   (setq _id (round __id))
   (setq _reg_address (round __reg_address))
   (setq _data_length (round __data_length))
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:reg_address
   (&optional __reg_address)
   (if __reg_address (setq _reg_address __reg_address)) _reg_address)
  (:data_length
   (&optional __data_length)
   (if __data_length (setq _data_length __data_length)) _data_length)
  (:serialization-length
   ()
   (+
    ;; int16 _id
    2
    ;; int16 _reg_address
    2
    ;; int16 _data_length
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _id
       (write-word _id s)
     ;; int16 _reg_address
       (write-word _reg_address s)
     ;; int16 _data_length
       (write-word _data_length s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _id
     (setq _id (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _reg_address
     (setq _reg_address (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _data_length
     (setq _data_length (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(defclass dobot::ReadRegResponse
  :super ros::object
  :slots (_payload ))

(defmethod dobot::ReadRegResponse
  (:init
   (&key
    ((:payload __payload) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _payload __payload)
   self)
  (:payload
   (&optional __payload)
   (if __payload (setq _payload __payload)) _payload)
  (:serialization-length
   ()
   (+
    ;; int16[] _payload
    (* 2    (length _payload)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16[] _payload
     (write-long (length _payload) s)
     (dotimes (i (length _payload))
       (write-word (elt _payload i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16[] _payload
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _payload (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _payload i) (sys::peek buf ptr- :short)) (incf ptr- 2)
     ))
   ;;
   self)
  )

(defclass dobot::ReadReg
  :super ros::object
  :slots ())

(setf (get dobot::ReadReg :md5sum-) "bc6fd90ab0bfe4afd7a1535702e29a89")
(setf (get dobot::ReadReg :datatype-) "dobot/ReadReg")
(setf (get dobot::ReadReg :request) dobot::ReadRegRequest)
(setf (get dobot::ReadReg :response) dobot::ReadRegResponse)

(defmethod dobot::ReadRegRequest
  (:response () (instance dobot::ReadRegResponse :init)))

(setf (get dobot::ReadRegRequest :md5sum-) "bc6fd90ab0bfe4afd7a1535702e29a89")
(setf (get dobot::ReadRegRequest :datatype-) "dobot/ReadRegRequest")
(setf (get dobot::ReadRegRequest :definition-)
      "int16 id
int16 reg_address
int16 data_length
---
int16[] payload

")

(setf (get dobot::ReadRegResponse :md5sum-) "bc6fd90ab0bfe4afd7a1535702e29a89")
(setf (get dobot::ReadRegResponse :datatype-) "dobot/ReadRegResponse")
(setf (get dobot::ReadRegResponse :definition-)
      "int16 id
int16 reg_address
int16 data_length
---
int16[] payload

")



(provide :dobot/ReadReg "bc6fd90ab0bfe4afd7a1535702e29a89")


