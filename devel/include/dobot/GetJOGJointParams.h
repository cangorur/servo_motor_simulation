// Generated by gencpp from file dobot/GetJOGJointParams.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETJOGJOINTPARAMS_H
#define DOBOT_MESSAGE_GETJOGJOINTPARAMS_H

#include <ros/service_traits.h>


#include <dobot/GetJOGJointParamsRequest.h>
#include <dobot/GetJOGJointParamsResponse.h>


namespace dobot
{

struct GetJOGJointParams
{

typedef GetJOGJointParamsRequest Request;
typedef GetJOGJointParamsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetJOGJointParams
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::GetJOGJointParams > {
  static const char* value()
  {
    return "46bf5bf78db0edaa99dd346e0307937e";
  }

  static const char* value(const ::dobot::GetJOGJointParams&) { return value(); }
};

template<>
struct DataType< ::dobot::GetJOGJointParams > {
  static const char* value()
  {
    return "dobot/GetJOGJointParams";
  }

  static const char* value(const ::dobot::GetJOGJointParams&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::GetJOGJointParamsRequest> should match 
// service_traits::MD5Sum< ::dobot::GetJOGJointParams > 
template<>
struct MD5Sum< ::dobot::GetJOGJointParamsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetJOGJointParams >::value();
  }
  static const char* value(const ::dobot::GetJOGJointParamsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetJOGJointParamsRequest> should match 
// service_traits::DataType< ::dobot::GetJOGJointParams > 
template<>
struct DataType< ::dobot::GetJOGJointParamsRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::GetJOGJointParams >::value();
  }
  static const char* value(const ::dobot::GetJOGJointParamsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::GetJOGJointParamsResponse> should match 
// service_traits::MD5Sum< ::dobot::GetJOGJointParams > 
template<>
struct MD5Sum< ::dobot::GetJOGJointParamsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GetJOGJointParams >::value();
  }
  static const char* value(const ::dobot::GetJOGJointParamsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GetJOGJointParamsResponse> should match 
// service_traits::DataType< ::dobot::GetJOGJointParams > 
template<>
struct DataType< ::dobot::GetJOGJointParamsResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::GetJOGJointParams >::value();
  }
  static const char* value(const ::dobot::GetJOGJointParamsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_GETJOGJOINTPARAMS_H
