// Generated by gencpp from file dobot/GetDeviceSNRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETDEVICESNREQUEST_H
#define DOBOT_MESSAGE_GETDEVICESNREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dobot
{
template <class ContainerAllocator>
struct GetDeviceSNRequest_
{
  typedef GetDeviceSNRequest_<ContainerAllocator> Type;

  GetDeviceSNRequest_()
    {
    }
  GetDeviceSNRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dobot::GetDeviceSNRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetDeviceSNRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetDeviceSNRequest_

typedef ::dobot::GetDeviceSNRequest_<std::allocator<void> > GetDeviceSNRequest;

typedef boost::shared_ptr< ::dobot::GetDeviceSNRequest > GetDeviceSNRequestPtr;
typedef boost::shared_ptr< ::dobot::GetDeviceSNRequest const> GetDeviceSNRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetDeviceSNRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetDeviceSNRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dobot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'dobot': ['/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetDeviceSNRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetDeviceSNRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetDeviceSNRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetDeviceSNRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetDeviceSNRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetDeviceSNRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetDeviceSNRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dobot::GetDeviceSNRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetDeviceSNRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetDeviceSNRequest";
  }

  static const char* value(const ::dobot::GetDeviceSNRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetDeviceSNRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::dobot::GetDeviceSNRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetDeviceSNRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetDeviceSNRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetDeviceSNRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dobot::GetDeviceSNRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETDEVICESNREQUEST_H
