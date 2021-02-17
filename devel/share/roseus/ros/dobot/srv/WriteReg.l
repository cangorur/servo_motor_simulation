;; Auto-generated. Do not edit!


(when (boundp 'dobot::WriteReg)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'WriteReg (find-package "DOBOT")))
(unless (find-package "DOBOT::WRITEREG")
  (make-package "DOBOT::WRITEREG"))
(unless (find-package "DOBOT::WRITEREGREQUEST")
  (make-package "DOBOT::WRITEREGREQUEST"))
(unless (find-package "DOBOT::WRITEREGRESPONSE")
  (make-package "DOBOT::WRITEREGRESPONSE"))

(in-package "ROS")





(defclass dobot::WriteRegRequest
  :super ros::object
  :slots (_id _reg_address _data ))

(defmethod dobot::WriteRegRequest
  (:init
   (&key
    ((:id __id) 0)
    ((:reg_address __reg_address) 0)
    ((:data __data) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _id (round __id))
   (setq _reg_address (round __reg_address))
   (setq _data __data)
   self)
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:reg_address
   (&optional __reg_address)
   (if __reg_address (setq _reg_address __reg_address)) _reg_address)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; int16 _id
    2
    ;; int16 _reg_address
    2
    ;; int16[] _data
    (* 2    (length _data)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int16 _id
       (write-word _id s)
     ;; int16 _reg_address
       (write-word _reg_address s)
     ;; int16[] _data
     (write-long (length _data) s)
     (dotimes (i (length _data))
       (write-word (elt _data i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int16 _id
     (setq _id (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16 _reg_address
     (setq _reg_address (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; int16[] _data
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _data (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _data i) (sys::peek buf ptr- :short)) (incf ptr- 2)
     ))
   ;;
   self)
  )

(defclass dobot::WriteRegResponse
  :super ros::object
  :slots (_success ))

(defmethod dobot::WriteRegResponse
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

(defclass dobot::WriteReg
  :super ros::object
  :slots ())

(setf (get dobot::WriteReg :md5sum-) "8da6b8e45a4090c0598ec46e5e2d31dc")
(setf (get dobot::WriteReg :datatype-) "dobot/WriteReg")
(setf (get dobot::WriteReg :request) dobot::WriteRegRequest)
(setf (get dobot::WriteReg :response) dobot::WriteRegResponse)

(defmethod dobot::WriteRegRequest
  (:response () (instance dobot::WriteRegResponse :init)))

(setf (get dobot::WriteRegRequest :md5sum-) "8da6b8e45a4090c0598ec46e5e2d31dc")
(setf (get dobot::WriteRegRequest :datatype-) "dobot/WriteRegRequest")
(setf (get dobot::WriteRegRequest :definition-)
      "int16 id
int16 reg_address
int16[] data
---
bool success

")

(setf (get dobot::WriteRegResponse :md5sum-) "8da6b8e45a4090c0598ec46e5e2d31dc")
(setf (get dobot::WriteRegResponse :datatype-) "dobot/WriteRegResponse")
(setf (get dobot::WriteRegResponse :definition-)
      "int16 id
int16 reg_address
int16[] data
---
bool success

")



(provide :dobot/WriteReg "8da6b8e45a4090c0598ec46e5e2d31dc")


