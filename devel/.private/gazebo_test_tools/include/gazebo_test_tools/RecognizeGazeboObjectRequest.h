// Generated by gencpp from file gazebo_test_tools/RecognizeGazeboObjectRequest.msg
// DO NOT EDIT!


#ifndef GAZEBO_TEST_TOOLS_MESSAGE_RECOGNIZEGAZEBOOBJECTREQUEST_H
#define GAZEBO_TEST_TOOLS_MESSAGE_RECOGNIZEGAZEBOOBJECTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_test_tools
{
template <class ContainerAllocator>
struct RecognizeGazeboObjectRequest_
{
  typedef RecognizeGazeboObjectRequest_<ContainerAllocator> Type;

  RecognizeGazeboObjectRequest_()
    : name()
    , republish(false)  {
    }
  RecognizeGazeboObjectRequest_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , republish(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef uint8_t _republish_type;
  _republish_type republish;





  typedef boost::shared_ptr< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RecognizeGazeboObjectRequest_

typedef ::gazebo_test_tools::RecognizeGazeboObjectRequest_<std::allocator<void> > RecognizeGazeboObjectRequest;

typedef boost::shared_ptr< ::gazebo_test_tools::RecognizeGazeboObjectRequest > RecognizeGazeboObjectRequestPtr;
typedef boost::shared_ptr< ::gazebo_test_tools::RecognizeGazeboObjectRequest const> RecognizeGazeboObjectRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gazebo_test_tools

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'object_msgs': ['/home/student/catkin_ws/src/general-message-pkgs/object_msgs/msg'], 'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9c648453b842979d1b130dac86a455cf";
  }

  static const char* value(const ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9c648453b842979dULL;
  static const uint64_t static_value2 = 0x1b130dac86a455cfULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_test_tools/RecognizeGazeboObjectRequest";
  }

  static const char* value(const ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"string name\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"bool republish\n"
"\n"
;
  }

  static const char* value(const ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.republish);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RecognizeGazeboObjectRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_test_tools::RecognizeGazeboObjectRequest_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "republish: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.republish);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_TEST_TOOLS_MESSAGE_RECOGNIZEGAZEBOOBJECTREQUEST_H
