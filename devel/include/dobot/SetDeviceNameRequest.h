// Generated by gencpp from file dobot/SetDeviceNameRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETDEVICENAMEREQUEST_H
#define DOBOT_MESSAGE_SETDEVICENAMEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace dobot
{
template <class ContainerAllocator>
struct SetDeviceNameRequest_
{
  typedef SetDeviceNameRequest_<ContainerAllocator> Type;

  SetDeviceNameRequest_()
    : deviceName()  {
    }
  SetDeviceNameRequest_(const ContainerAllocator& _alloc)
    : deviceName(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::String_<ContainerAllocator>  _deviceName_type;
  _deviceName_type deviceName;





  typedef boost::shared_ptr< ::dobot::SetDeviceNameRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetDeviceNameRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetDeviceNameRequest_

typedef ::dobot::SetDeviceNameRequest_<std::allocator<void> > SetDeviceNameRequest;

typedef boost::shared_ptr< ::dobot::SetDeviceNameRequest > SetDeviceNameRequestPtr;
typedef boost::shared_ptr< ::dobot::SetDeviceNameRequest const> SetDeviceNameRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetDeviceNameRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetDeviceNameRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dobot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'dobot': ['/home/cangorur/Workspace/chariot/conveyor_simulation_guthub/src/dobot/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetDeviceNameRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetDeviceNameRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetDeviceNameRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetDeviceNameRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetDeviceNameRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetDeviceNameRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetDeviceNameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5cfd0d17902de8430ea45b9b5c531010";
  }

  static const char* value(const ::dobot::SetDeviceNameRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5cfd0d17902de843ULL;
  static const uint64_t static_value2 = 0x0ea45b9b5c531010ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetDeviceNameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetDeviceNameRequest";
  }

  static const char* value(const ::dobot::SetDeviceNameRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetDeviceNameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/String deviceName\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
";
  }

  static const char* value(const ::dobot::SetDeviceNameRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetDeviceNameRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.deviceName);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetDeviceNameRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetDeviceNameRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetDeviceNameRequest_<ContainerAllocator>& v)
  {
    s << indent << "deviceName: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.deviceName);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETDEVICENAMEREQUEST_H
