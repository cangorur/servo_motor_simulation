// Generated by gencpp from file dobot/SetJOGCmdRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETJOGCMDREQUEST_H
#define DOBOT_MESSAGE_SETJOGCMDREQUEST_H


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
struct SetJOGCmdRequest_
{
  typedef SetJOGCmdRequest_<ContainerAllocator> Type;

  SetJOGCmdRequest_()
    : isJoint(0)
    , cmd(0)  {
    }
  SetJOGCmdRequest_(const ContainerAllocator& _alloc)
    : isJoint(0)
    , cmd(0)  {
  (void)_alloc;
    }



   typedef uint8_t _isJoint_type;
  _isJoint_type isJoint;

   typedef uint8_t _cmd_type;
  _cmd_type cmd;





  typedef boost::shared_ptr< ::dobot::SetJOGCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetJOGCmdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetJOGCmdRequest_

typedef ::dobot::SetJOGCmdRequest_<std::allocator<void> > SetJOGCmdRequest;

typedef boost::shared_ptr< ::dobot::SetJOGCmdRequest > SetJOGCmdRequestPtr;
typedef boost::shared_ptr< ::dobot::SetJOGCmdRequest const> SetJOGCmdRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetJOGCmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetJOGCmdRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::SetJOGCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetJOGCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetJOGCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetJOGCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetJOGCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetJOGCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetJOGCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "46c3804084d740fb4c4f84d255d0b495";
  }

  static const char* value(const ::dobot::SetJOGCmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x46c3804084d740fbULL;
  static const uint64_t static_value2 = 0x4c4f84d255d0b495ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetJOGCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetJOGCmdRequest";
  }

  static const char* value(const ::dobot::SetJOGCmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetJOGCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 isJoint\n\
uint8 cmd\n\
";
  }

  static const char* value(const ::dobot::SetJOGCmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetJOGCmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.isJoint);
      stream.next(m.cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetJOGCmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetJOGCmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetJOGCmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "isJoint: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isJoint);
    s << indent << "cmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETJOGCMDREQUEST_H
