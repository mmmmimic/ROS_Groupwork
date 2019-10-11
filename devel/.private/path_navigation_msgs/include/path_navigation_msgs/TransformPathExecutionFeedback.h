// Generated by gencpp from file path_navigation_msgs/TransformPathExecutionFeedback.msg
// DO NOT EDIT!


#ifndef PATH_NAVIGATION_MSGS_MESSAGE_TRANSFORMPATHEXECUTIONFEEDBACK_H
#define PATH_NAVIGATION_MSGS_MESSAGE_TRANSFORMPATHEXECUTIONFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace path_navigation_msgs
{
template <class ContainerAllocator>
struct TransformPathExecutionFeedback_
{
  typedef TransformPathExecutionFeedback_<ContainerAllocator> Type;

  TransformPathExecutionFeedback_()
    {
    }
  TransformPathExecutionFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct TransformPathExecutionFeedback_

typedef ::path_navigation_msgs::TransformPathExecutionFeedback_<std::allocator<void> > TransformPathExecutionFeedback;

typedef boost::shared_ptr< ::path_navigation_msgs::TransformPathExecutionFeedback > TransformPathExecutionFeedbackPtr;
typedef boost::shared_ptr< ::path_navigation_msgs::TransformPathExecutionFeedback const> TransformPathExecutionFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace path_navigation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/melodic/share/nav_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'control_msgs': ['/opt/ros/melodic/share/control_msgs/cmake/../msg'], 'path_navigation_msgs': ['/home/student/catkin_ws/devel/.private/path_navigation_msgs/share/path_navigation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "path_navigation_msgs/TransformPathExecutionFeedback";
  }

  static const char* value(const ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
;
  }

  static const char* value(const ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TransformPathExecutionFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::path_navigation_msgs::TransformPathExecutionFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PATH_NAVIGATION_MSGS_MESSAGE_TRANSFORMPATHEXECUTIONFEEDBACK_H
