// Generated by gencpp from file dobot/GetEndEffectorSuctionCupResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETENDEFFECTORSUCTIONCUPRESPONSE_H
#define DOBOT_MESSAGE_GETENDEFFECTORSUCTIONCUPRESPONSE_H


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
struct GetEndEffectorSuctionCupResponse_
{
  typedef GetEndEffectorSuctionCupResponse_<ContainerAllocator> Type;

  GetEndEffectorSuctionCupResponse_()
    : result(0)
    , enableCtrl(0)
    , suck(0)  {
    }
  GetEndEffectorSuctionCupResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , enableCtrl(0)
    , suck(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef uint8_t _enableCtrl_type;
  _enableCtrl_type enableCtrl;

   typedef uint8_t _suck_type;
  _suck_type suck;





  typedef boost::shared_ptr< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetEndEffectorSuctionCupResponse_

typedef ::dobot::GetEndEffectorSuctionCupResponse_<std::allocator<void> > GetEndEffectorSuctionCupResponse;

typedef boost::shared_ptr< ::dobot::GetEndEffectorSuctionCupResponse > GetEndEffectorSuctionCupResponsePtr;
typedef boost::shared_ptr< ::dobot::GetEndEffectorSuctionCupResponse const> GetEndEffectorSuctionCupResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4855d73076b6df7c6c4785878f4cef46";
  }

  static const char* value(const ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4855d73076b6df7cULL;
  static const uint64_t static_value2 = 0x6c4785878f4cef46ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetEndEffectorSuctionCupResponse";
  }

  static const char* value(const ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
uint8 enableCtrl\n\
uint8 suck\n\
\n\
";
  }

  static const char* value(const ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.enableCtrl);
      stream.next(m.suck);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetEndEffectorSuctionCupResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetEndEffectorSuctionCupResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "enableCtrl: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enableCtrl);
    s << indent << "suck: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.suck);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETENDEFFECTORSUCTIONCUPRESPONSE_H
