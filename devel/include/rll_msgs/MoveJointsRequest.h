// Generated by gencpp from file rll_msgs/MoveJointsRequest.msg
// DO NOT EDIT!


#ifndef RLL_MSGS_MESSAGE_MOVEJOINTSREQUEST_H
#define RLL_MSGS_MESSAGE_MOVEJOINTSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rll_msgs
{
template <class ContainerAllocator>
struct MoveJointsRequest_
{
  typedef MoveJointsRequest_<ContainerAllocator> Type;

  MoveJointsRequest_()
    : joint_1(0.0)
    , joint_2(0.0)
    , joint_3(0.0)
    , joint_4(0.0)
    , joint_5(0.0)
    , joint_6(0.0)
    , joint_7(0.0)  {
    }
  MoveJointsRequest_(const ContainerAllocator& _alloc)
    : joint_1(0.0)
    , joint_2(0.0)
    , joint_3(0.0)
    , joint_4(0.0)
    , joint_5(0.0)
    , joint_6(0.0)
    , joint_7(0.0)  {
  (void)_alloc;
    }



   typedef double _joint_1_type;
  _joint_1_type joint_1;

   typedef double _joint_2_type;
  _joint_2_type joint_2;

   typedef double _joint_3_type;
  _joint_3_type joint_3;

   typedef double _joint_4_type;
  _joint_4_type joint_4;

   typedef double _joint_5_type;
  _joint_5_type joint_5;

   typedef double _joint_6_type;
  _joint_6_type joint_6;

   typedef double _joint_7_type;
  _joint_7_type joint_7;





  typedef boost::shared_ptr< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveJointsRequest_

typedef ::rll_msgs::MoveJointsRequest_<std::allocator<void> > MoveJointsRequest;

typedef boost::shared_ptr< ::rll_msgs::MoveJointsRequest > MoveJointsRequestPtr;
typedef boost::shared_ptr< ::rll_msgs::MoveJointsRequest const> MoveJointsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rll_msgs::MoveJointsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rll_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rll_msgs': ['/home/workspace/catkin_ws/src/rll_sdk/rll_msgs/msg', '/home/workspace/catkin_ws/devel/share/rll_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "72ef1c9e9864f356eb45033f9d45a951";
  }

  static const char* value(const ::rll_msgs::MoveJointsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x72ef1c9e9864f356ULL;
  static const uint64_t static_value2 = 0xeb45033f9d45a951ULL;
};

template<class ContainerAllocator>
struct DataType< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rll_msgs/MoveJointsRequest";
  }

  static const char* value(const ::rll_msgs::MoveJointsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 joint_1\n\
float64 joint_2\n\
float64 joint_3\n\
float64 joint_4\n\
float64 joint_5\n\
float64 joint_6\n\
float64 joint_7\n\
";
  }

  static const char* value(const ::rll_msgs::MoveJointsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_1);
      stream.next(m.joint_2);
      stream.next(m.joint_3);
      stream.next(m.joint_4);
      stream.next(m.joint_5);
      stream.next(m.joint_6);
      stream.next(m.joint_7);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveJointsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rll_msgs::MoveJointsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rll_msgs::MoveJointsRequest_<ContainerAllocator>& v)
  {
    s << indent << "joint_1: ";
    Printer<double>::stream(s, indent + "  ", v.joint_1);
    s << indent << "joint_2: ";
    Printer<double>::stream(s, indent + "  ", v.joint_2);
    s << indent << "joint_3: ";
    Printer<double>::stream(s, indent + "  ", v.joint_3);
    s << indent << "joint_4: ";
    Printer<double>::stream(s, indent + "  ", v.joint_4);
    s << indent << "joint_5: ";
    Printer<double>::stream(s, indent + "  ", v.joint_5);
    s << indent << "joint_6: ";
    Printer<double>::stream(s, indent + "  ", v.joint_6);
    s << indent << "joint_7: ";
    Printer<double>::stream(s, indent + "  ", v.joint_7);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RLL_MSGS_MESSAGE_MOVEJOINTSREQUEST_H