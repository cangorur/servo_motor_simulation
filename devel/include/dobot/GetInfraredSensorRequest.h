// Generated by gencpp from file dobot/GetInfraredSensorRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETINFRAREDSENSORREQUEST_H
#define DOBOT_MESSAGE_GETINFRAREDSENSORREQUEST_H


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
struct GetInfraredSensorRequest_
{
  typedef GetInfraredSensorRequest_<ContainerAllocator> Type;

  GetInfraredSensorRequest_()
    : infraredPort(0)  {
    }
  GetInfraredSensorRequest_(const ContainerAllocator& _alloc)
    : infraredPort(0)  {
  (void)_alloc;
    }



   typedef uint8_t _infraredPort_type;
  _infraredPort_type infraredPort;





  typedef boost::shared_ptr< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetInfraredSensorRequest_

typedef ::dobot::GetInfraredSensorRequest_<std::allocator<void> > GetInfraredSensorRequest;

typedef boost::shared_ptr< ::dobot::GetInfraredSensorRequest > GetInfraredSensorRequestPtr;
typedef boost::shared_ptr< ::dobot::GetInfraredSensorRequest const> GetInfraredSensorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetInfraredSensorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b773c543edcf0d59db1a149cb28a1e80";
  }

  static const char* value(const ::dobot::GetInfraredSensorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb773c543edcf0d59ULL;
  static const uint64_t static_value2 = 0xdb1a149cb28a1e80ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetInfraredSensorRequest";
  }

  static const char* value(const ::dobot::GetInfraredSensorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 infraredPort\n\
";
  }

  static const char* value(const ::dobot::GetInfraredSensorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.infraredPort);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetInfraredSensorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetInfraredSensorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetInfraredSensorRequest_<ContainerAllocator>& v)
  {
    s << indent << "infraredPort: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.infraredPort);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETINFRAREDSENSORREQUEST_H