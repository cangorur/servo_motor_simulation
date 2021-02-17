// Generated by gencpp from file dobot/GenerateNormalTorque.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GENERATENORMALTORQUE_H
#define DOBOT_MESSAGE_GENERATENORMALTORQUE_H

#include <ros/service_traits.h>


#include <dobot/GenerateNormalTorqueRequest.h>
#include <dobot/GenerateNormalTorqueResponse.h>


namespace dobot
{

struct GenerateNormalTorque
{

typedef GenerateNormalTorqueRequest Request;
typedef GenerateNormalTorqueResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GenerateNormalTorque
} // namespace dobot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot::GenerateNormalTorque > {
  static const char* value()
  {
    return "614573f1304141bc4784e7cdb5102fdb";
  }

  static const char* value(const ::dobot::GenerateNormalTorque&) { return value(); }
};

template<>
struct DataType< ::dobot::GenerateNormalTorque > {
  static const char* value()
  {
    return "dobot/GenerateNormalTorque";
  }

  static const char* value(const ::dobot::GenerateNormalTorque&) { return value(); }
};


// service_traits::MD5Sum< ::dobot::GenerateNormalTorqueRequest> should match 
// service_traits::MD5Sum< ::dobot::GenerateNormalTorque > 
template<>
struct MD5Sum< ::dobot::GenerateNormalTorqueRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GenerateNormalTorque >::value();
  }
  static const char* value(const ::dobot::GenerateNormalTorqueRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GenerateNormalTorqueRequest> should match 
// service_traits::DataType< ::dobot::GenerateNormalTorque > 
template<>
struct DataType< ::dobot::GenerateNormalTorqueRequest>
{
  static const char* value()
  {
    return DataType< ::dobot::GenerateNormalTorque >::value();
  }
  static const char* value(const ::dobot::GenerateNormalTorqueRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot::GenerateNormalTorqueResponse> should match 
// service_traits::MD5Sum< ::dobot::GenerateNormalTorque > 
template<>
struct MD5Sum< ::dobot::GenerateNormalTorqueResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot::GenerateNormalTorque >::value();
  }
  static const char* value(const ::dobot::GenerateNormalTorqueResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot::GenerateNormalTorqueResponse> should match 
// service_traits::DataType< ::dobot::GenerateNormalTorque > 
template<>
struct DataType< ::dobot::GenerateNormalTorqueResponse>
{
  static const char* value()
  {
    return DataType< ::dobot::GenerateNormalTorque >::value();
  }
  static const char* value(const ::dobot::GenerateNormalTorqueResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_MESSAGE_GENERATENORMALTORQUE_H