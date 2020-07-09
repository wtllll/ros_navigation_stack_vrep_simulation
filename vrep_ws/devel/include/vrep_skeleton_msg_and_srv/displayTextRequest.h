// Generated by gencpp from file vrep_skeleton_msg_and_srv/displayTextRequest.msg
// DO NOT EDIT!


#ifndef VREP_SKELETON_MSG_AND_SRV_MESSAGE_DISPLAYTEXTREQUEST_H
#define VREP_SKELETON_MSG_AND_SRV_MESSAGE_DISPLAYTEXTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_skeleton_msg_and_srv
{
template <class ContainerAllocator>
struct displayTextRequest_
{
  typedef displayTextRequest_<ContainerAllocator> Type;

  displayTextRequest_()
    : textToDisplay()  {
    }
  displayTextRequest_(const ContainerAllocator& _alloc)
    : textToDisplay(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _textToDisplay_type;
  _textToDisplay_type textToDisplay;





  typedef boost::shared_ptr< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> const> ConstPtr;

}; // struct displayTextRequest_

typedef ::vrep_skeleton_msg_and_srv::displayTextRequest_<std::allocator<void> > displayTextRequest;

typedef boost::shared_ptr< ::vrep_skeleton_msg_and_srv::displayTextRequest > displayTextRequestPtr;
typedef boost::shared_ptr< ::vrep_skeleton_msg_and_srv::displayTextRequest const> displayTextRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_skeleton_msg_and_srv

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7e35f54986033203e2229a885ac9f976";
  }

  static const char* value(const ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7e35f54986033203ULL;
  static const uint64_t static_value2 = 0xe2229a885ac9f976ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_skeleton_msg_and_srv/displayTextRequest";
  }

  static const char* value(const ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
string textToDisplay\n\
";
  }

  static const char* value(const ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.textToDisplay);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct displayTextRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_skeleton_msg_and_srv::displayTextRequest_<ContainerAllocator>& v)
  {
    s << indent << "textToDisplay: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.textToDisplay);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_SKELETON_MSG_AND_SRV_MESSAGE_DISPLAYTEXTREQUEST_H