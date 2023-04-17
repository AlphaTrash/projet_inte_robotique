// Generated by gencpp from file motoman_msgs/WriteGroupIORequest.msg
// DO NOT EDIT!


#ifndef MOTOMAN_MSGS_MESSAGE_WRITEGROUPIOREQUEST_H
#define MOTOMAN_MSGS_MESSAGE_WRITEGROUPIOREQUEST_H


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
struct WriteGroupIORequest_
{
  typedef WriteGroupIORequest_<ContainerAllocator> Type;

  WriteGroupIORequest_()
    : address(0)
    , value(0)  {
    }
  WriteGroupIORequest_(const ContainerAllocator& _alloc)
    : address(0)
    , value(0)  {
  (void)_alloc;
    }



   typedef uint32_t _address_type;
  _address_type address;

   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> const> ConstPtr;

}; // struct WriteGroupIORequest_

typedef ::motoman_msgs::WriteGroupIORequest_<std::allocator<void> > WriteGroupIORequest;

typedef boost::shared_ptr< ::motoman_msgs::WriteGroupIORequest > WriteGroupIORequestPtr;
typedef boost::shared_ptr< ::motoman_msgs::WriteGroupIORequest const> WriteGroupIORequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator1> & lhs, const ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator2> & rhs)
{
  return lhs.address == rhs.address &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator1> & lhs, const ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace motoman_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b03febf253f00add889ad10e91f1acc3";
  }

  static const char* value(const ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb03febf253f00addULL;
  static const uint64_t static_value2 = 0x889ad10e91f1acc3ULL;
};

template<class ContainerAllocator>
struct DataType< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motoman_msgs/WriteGroupIORequest";
  }

  static const char* value(const ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"# Write 'value' to the Group IO element at 'address'.\n"
"#\n"
"# Addresses are plain, base-10 integers, as used and displayed by the controller\n"
"# (on the teach pendant for instance).\n"
"#\n"
"# Only the following addresses can be written to:\n"
"#\n"
"#  - 2701 and up : Network Inputs (2501 and up on DX100 and FS100)\n"
"#  - 1001 and up : Universal/General Outputs\n"
"#\n"
"# NOTE: many programming languages will parse literals starting with '0' as\n"
"#       octal numbers. Do not add leading zeros to group addresses to avoid\n"
"#       specifying the wrong address to write to.\n"
"\n"
"# Refer also the Yaskawa Motoman documentation on IO addressing and\n"
"# configuration.\n"
"\n"
"uint32 address\n"
"uint8 value\n"
;
  }

  static const char* value(const ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.address);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WriteGroupIORequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motoman_msgs::WriteGroupIORequest_<ContainerAllocator>& v)
  {
    s << indent << "address: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.address);
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOMAN_MSGS_MESSAGE_WRITEGROUPIOREQUEST_H