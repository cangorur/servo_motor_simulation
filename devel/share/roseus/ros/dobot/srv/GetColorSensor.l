;; Auto-generated. Do not edit!


(when (boundp 'dobot::GetColorSensor)
  (if (not (find-package "DOBOT"))
    (make-package "DOBOT"))
  (shadow 'GetColorSensor (find-package "DOBOT")))
(unless (find-package "DOBOT::GETCOLORSENSOR")
  (make-package "DOBOT::GETCOLORSENSOR"))
(unless (find-package "DOBOT::GETCOLORSENSORREQUEST")
  (make-package "DOBOT::GETCOLORSENSORREQUEST"))
(unless (find-package "DOBOT::GETCOLORSENSORRESPONSE")
  (make-package "DOBOT::GETCOLORSENSORRESPONSE"))

(in-package "ROS")





(defclass dobot::GetColorSensorRequest
  :super ros::object
  :slots ())

(defmethod dobot::GetColorSensorRequest
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

(defclass dobot::GetColorSensorResponse
  :super ros::object
  :slots (_result _value_r _value_g _value_b ))

(defmethod dobot::GetColorSensorResponse
  (:init
   (&key
    ((:result __result) 0)
    ((:value_r __value_r) 0)
    ((:value_g __value_g) 0)
    ((:value_b __value_b) 0)
    )
   (send-super :init)
   (setq _result (round __result))
   (setq _value_r (round __value_r))
   (setq _value_g (round __value_g))
   (setq _value_b (round __value_b))
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:value_r
   (&optional __value_r)
   (if __value_r (setq _value_r __value_r)) _value_r)
  (:value_g
   (&optional __value_g)
   (if __value_g (setq _value_g __value_g)) _value_g)
  (:value_b
   (&optional __value_b)
   (if __value_b (setq _value_b __value_b)) _value_b)
  (:serialization-length
   ()
   (+
    ;; int32 _result
    4
    ;; uint8 _value_r
    1
    ;; uint8 _value_g
    1
    ;; uint8 _value_b
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _result
       (write-long _result s)
     ;; uint8 _value_r
       (write-byte _value_r s)
     ;; uint8 _value_g
       (write-byte _value_g s)
     ;; uint8 _value_b
       (write-byte _value_b s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _result
     (setq _result (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint8 _value_r
     (setq _value_r (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _value_g
     (setq _value_g (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _value_b
     (setq _value_b (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass dobot::GetColorSensor
  :super ros::object
  :slots ())

(setf (get dobot::GetColorSensor :md5sum-) "8245cb6d39e4a443eba0ed44524e8d92")
(setf (get dobot::GetColorSensor :datatype-) "dobot/GetColorSensor")
(setf (get dobot::GetColorSensor :request) dobot::GetColorSensorRequest)
(setf (get dobot::GetColorSensor :response) dobot::GetColorSensorResponse)

(defmethod dobot::GetColorSensorRequest
  (:response () (instance dobot::GetColorSensorResponse :init)))

(setf (get dobot::GetColorSensorRequest :md5sum-) "8245cb6d39e4a443eba0ed44524e8d92")
(setf (get dobot::GetColorSensorRequest :datatype-) "dobot/GetColorSensorRequest")
(setf (get dobot::GetColorSensorRequest :definition-)
      "---

int32 result

uint8 value_r

uint8 value_g

uint8 value_b

")

(setf (get dobot::GetColorSensorResponse :md5sum-) "8245cb6d39e4a443eba0ed44524e8d92")
(setf (get dobot::GetColorSensorResponse :datatype-) "dobot/GetColorSensorResponse")
(setf (get dobot::GetColorSensorResponse :definition-)
      "---

int32 result

uint8 value_r

uint8 value_g

uint8 value_b

")



(provide :dobot/GetColorSensor "8245cb6d39e4a443eba0ed44524e8d92")


