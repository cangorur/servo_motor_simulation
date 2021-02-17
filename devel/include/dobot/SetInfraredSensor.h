// Generated by gencpp from file dobot/SetInfraredSensor.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETINFRAREDSENSOR_H
#define DOBOT_MESSAGE_SETINFRAREDSENSOR_H

#include <ros/service_traits.h>


#include <dobot/SetInfraredSensorRequest.h>
#include <dobot/SetInfraredSensorResponse.h>


namespace dobot
{

struct SetInfraredSensor
{

typedef SetInfraredSensorRequest Request;
typedef SetInfraredSensorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetInfraredSensor
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::SetInfraredSensor > {
  static const char* value()
  {
    return "5e6ab8bedaa3155aca50aa4a43e094eb";
  }

  static const char* value(const ::dobot::SetInfraredSensor&) { return value(); }
};

template<>
struct DataType< ::dobot::SetInfraredSensor > {
  static const char* value()
  {
    return "dobot/SetInfraredSensor";
  }

  static const char* value(const ::dobot::SetInfraredSensor&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::SetInfraredSensorRequest> should match 
// service_traits::MD5Sum< ::dobot::SetInfraredSensor > 
template<>
struct MD5Sum< ::dobot::SetInfraredSensorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetInfraredSensor >::value();
  }
  static const char* value(const ::dobot::SetInfraredSensorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetInfraredSensorRequest> should match 
// service_traits::DataType< ::dobot::SetInfraredSensor > 
template<>
struct DataType< ::dobot::SetInfraredSensorRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::SetInfraredSensor >::value();
  }
  static const char* value(const ::dobot::SetInfraredSensorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::SetInfraredSensorResponse> should match 
// service_traits::MD5Sum< ::dobot::SetInfraredSensor > 
template<>
struct MD5Sum< ::dobot::SetInfraredSensorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::SetInfraredSensor >::value();
  }
  static const char* value(const ::dobot::SetInfraredSensorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::SetInfraredSensorResponse> should match 
// service_traits::DataType< ::dobot::SetInfraredSensor > 
template<>
struct DataType< ::dobot::SetInfraredSensorResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::SetInfraredSensor >::value();
  }
  static const char* value(const ::dobot::SetInfraredSensorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_SETINFRAREDSENSOR_H
