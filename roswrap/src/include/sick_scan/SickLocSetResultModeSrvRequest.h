// Generated by gencpp from file sick_scan/SickLocSetResultModeSrvRequest.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCSETRESULTMODESRVREQUEST_H
#define SICK_SCAN_MESSAGE_SICKLOCSETRESULTMODESRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sick_scan
{
template <class ContainerAllocator>
struct SickLocSetResultModeSrvRequest_
{
  typedef SickLocSetResultModeSrvRequest_<ContainerAllocator> Type;

  SickLocSetResultModeSrvRequest_()
    : mode(0)  {
    }
  SickLocSetResultModeSrvRequest_(const ContainerAllocator& _alloc)
    : mode(0)  {
  (void)_alloc;
    }



   typedef int32_t _mode_type;
  _mode_type mode;





  typedef boost::shared_ptr< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocSetResultModeSrvRequest_

typedef ::sick_scan::SickLocSetResultModeSrvRequest_<std::allocator<void> > SickLocSetResultModeSrvRequest;

typedef boost::shared_ptr< ::sick_scan::SickLocSetResultModeSrvRequest > SickLocSetResultModeSrvRequestPtr;
typedef boost::shared_ptr< ::sick_scan::SickLocSetResultModeSrvRequest const> SickLocSetResultModeSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator1> & lhs, const ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.mode == rhs.mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator1> & lhs, const ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ff63f6ea3c3e9b7504b2cb3ee0a09d92";
  }

  static const char* value(const ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xff63f6ea3c3e9b75ULL;
  static const uint64_t static_value2 = 0x04b2cb3ee0a09d92ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocSetResultModeSrvRequest";
  }

  static const char* value(const ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of ROS service SickLocSetResultMode for sick localization.\n"
"#\n"
"# ROS service SickLocSetResultMode sets the mode of the result output (stream or poll)\n"
"# by sending cola command (\"sMN LocSetResultMode <mode>\")\n"
"# with parameter\n"
"# <mode>: 0:stream, 1: poll, default: stream\n"
"#\n"
"# See Telegram-Listing-v1.1.0.241R.pdf for further details about \n"
"# Cola telegrams and this command.\n"
"\n"
"#\n"
"# Request (input)\n"
"#\n"
"\n"
"int32 mode # 0:stream, 1: poll, default: stream\n"
"\n"
;
  }

  static const char* value(const ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocSetResultModeSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan::SickLocSetResultModeSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SICK_SCAN_MESSAGE_SICKLOCSETRESULTMODESRVREQUEST_H