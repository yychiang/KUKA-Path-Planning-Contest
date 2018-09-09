// Generated by gencpp from file rll_planning_project/PlanToGoalResult.msg
// DO NOT EDIT!


#ifndef RLL_PLANNING_PROJECT_MESSAGE_PLANTOGOALRESULT_H
#define RLL_PLANNING_PROJECT_MESSAGE_PLANTOGOALRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rll_planning_project
{
template <class ContainerAllocator>
struct PlanToGoalResult_
{
  typedef PlanToGoalResult_<ContainerAllocator> Type;

  PlanToGoalResult_()
    {
    }
  PlanToGoalResult_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> const> ConstPtr;

}; // struct PlanToGoalResult_

typedef ::rll_planning_project::PlanToGoalResult_<std::allocator<void> > PlanToGoalResult;

typedef boost::shared_ptr< ::rll_planning_project::PlanToGoalResult > PlanToGoalResultPtr;
typedef boost::shared_ptr< ::rll_planning_project::PlanToGoalResult const> PlanToGoalResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rll_planning_project

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rll_planning_project': ['/home/workspace/catkin_ws/devel/share/rll_planning_project/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::rll_planning_project::PlanToGoalResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rll_planning_project/PlanToGoalResult";
  }

  static const char* value(const ::rll_planning_project::PlanToGoalResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
";
  }

  static const char* value(const ::rll_planning_project::PlanToGoalResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanToGoalResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rll_planning_project::PlanToGoalResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::rll_planning_project::PlanToGoalResult_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // RLL_PLANNING_PROJECT_MESSAGE_PLANTOGOALRESULT_H
