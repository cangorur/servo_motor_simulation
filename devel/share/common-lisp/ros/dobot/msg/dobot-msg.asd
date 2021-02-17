
(cl:in-package :asdf)

(defsystem "dobot-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "motor_data" :depends-on ("_package_motor_data"))
    (:file "_package_motor_data" :depends-on ("_package"))
    (:file "motor_raw_data" :depends-on ("_package_motor_raw_data"))
    (:file "_package_motor_raw_data" :depends-on ("_package"))
    (:file "pid_control_data" :depends-on ("_package_pid_control_data"))
    (:file "_package_pid_control_data" :depends-on ("_package"))
  ))