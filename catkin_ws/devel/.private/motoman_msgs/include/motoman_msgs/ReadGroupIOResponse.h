// Generated by gencpp from file motoman_msgs/ReadGroupIOResponse.msg
// DO NOT EDIT!


#ifndef MOTOMAN_MSGS_MESSAGE_READGROUPIORESPONSE_H
#define MOTOMAN_MSGS_MESSAGE_READGROUPIORESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace motoman_msgs
{
template <class ContainerAllocator>
struct ReadGroupIOResponse_
{
  typedef ReadGroupIOResponse_<ContainerAllocator> Type;

  ReadGroupIOResponse_()
    : message()
    , success(false)
    , value(0)  {
    }
  ReadGroupIOResponse_(const ContainerAllocator& _alloc)
    : message(_alloc)
    , success(false)
    , value(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;

   typedef uint8_t _success_type;
  _success_type success;

   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ReadGroupIOResponse_

typedef ::motoman_msgs::ReadGroupIOResponse_<std::allocator<void> > ReadGroupIOResponse;

typedef boost::shared_ptr< ::motoman_msgs::ReadGroupIOResponse > ReadGroupIOResponsePtr;
typedef boost::shared_ptr< ::motoman_msgs::ReadGroupIOResponse const> ReadGroupIOResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator1> & lhs, const ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator2> & rhs)
{
  return lhs.message == rhs.message &&
    lhs.success == rhs.success &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator1> & lhs, const ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace motoman_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2de2e2b0a489e8da4f560b339ccad847";
  }

  static const char* value(const ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2de2e2b0a489e8daULL;
  static const uint64_t static_value2 = 0x4f560b339ccad847ULL;
};

template<class ContainerAllocator>
struct DataType< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motoman_msgs/ReadGroupIOResponse";
  }

  static const char* value(const ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string message\n"
"bool success\n"
"uint8 value\n"
"\n"
;
  }

  static const char* value(const ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.message);
      stream.next(m.success);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReadGroupIOResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motoman_msgs::ReadGroupIOResponse_<ContainerAllocator>& v)
  {
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOMAN_MSGS_MESSAGE_READGROUPIORESPONSE_H
