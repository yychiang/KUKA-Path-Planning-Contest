;; Auto-generated. Do not edit!


(when (boundp 'rll_msgs::JobEnvFeedback)
  (if (not (find-package "RLL_MSGS"))
    (make-package "RLL_MSGS"))
  (shadow 'JobEnvFeedback (find-package "RLL_MSGS")))
(unless (find-package "RLL_MSGS::JOBENVFEEDBACK")
  (make-package "RLL_MSGS::JOBENVFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude JobEnvFeedback.msg.html


(defclass rll_msgs::JobEnvFeedback
  :super ros::object
  :slots ())

(defmethod rll_msgs::JobEnvFeedback
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

(setf (get rll_msgs::JobEnvFeedback :md5sum-) "d41d8cd98f00b204e9800998ecf8427e")
(setf (get rll_msgs::JobEnvFeedback :datatype-) "rll_msgs/JobEnvFeedback")
(setf (get rll_msgs::JobEnvFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======


")



(provide :rll_msgs/JobEnvFeedback "d41d8cd98f00b204e9800998ecf8427e")


