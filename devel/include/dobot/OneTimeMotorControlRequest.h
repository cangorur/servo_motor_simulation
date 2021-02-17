// Generated by gencpp from file dobot/OneTimeMotorControlRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_ONETIMEMOTORCONTROLREQUEST_H
#define DOBOT_MESSAGE_ONETIMEMOTORCONTROLREQUEST_H


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
struct OneTimeMotorControlRequest_
{
  typedef OneTimeMotorControlRequest_<ContainerAllocator> Type;

  OneTimeMotorControlRequest_()
    : isOn(0)
    , index(0)
    , speed(0.0)
    , isQueued(false)  {
    }
  OneTimeMotorControlRequest_(const ContainerAllocator& _alloc)
    : isOn(0)
    , index(0)
    , speed(0.0)
    , isQueued(false)  {
  (void)_alloc;
    }



   typedef uint8_t _isOn_type;
  _isOn_type isOn;

   typedef uint8_t _index_type;
  _index_type index;

   typedef float _speed_type;
  _speed_type speed;

   typedef uint8_t _isQueued_type;
  _isQueued_type isQueued;





  typedef boost::shared_ptr< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct OneTimeMotorControlRequest_

typedef ::dobot::OneTimeMotorControlRequest_<std::allocator<void> > OneTimeMotorControlRequest;

typedef boost::shared_ptr< ::dobot::OneTimeMotorControlRequest > OneTimeMotorControlRequestPtr;
typedef boost::shared_ptr< ::dobot::OneTimeMotorControlRequest const> OneTimeMotorControlRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "41cfb5310249e107a19b397cc1a4fd6d";
  }

  static const char* value(const ::dobot::OneTimeMotorControlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x41cfb5310249e107ULL;
  static const uint64_t static_value2 = 0xa19b397cc1a4fd6dULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/OneTimeMotorControlRequest";
  }

  static const char* value(const ::dobot::OneTimeMotorControlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 isOn\n\
\n\
uint8 index\n\
\n\
float32 speed\n\
bool isQueued\n\
";
  }

  static const char* value(const ::dobot::OneTimeMotorControlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.isOn);
      stream.next(m.index);
      stream.next(m.speed);
      stream.next(m.isQueued);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OneTimeMotorControlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::OneTimeMotorControlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::OneTimeMotorControlRequest_<ContainerAllocator>& v)
  {
    s << indent << "isOn: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isOn);
    s << indent << "index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.index);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
    s << indent << "isQueued: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isQueued);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_ONETIMEMOTORCONTROLREQUEST_H
