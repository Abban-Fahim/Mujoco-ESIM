// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from camera_event_data_interface:msg/CameraEvents.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "camera_event_data_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "camera_event_data_interface/msg/detail/camera_events__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace camera_event_data_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_event_data_interface
cdr_serialize(
  const camera_event_data_interface::msg::CameraEvents & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_event_data_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  camera_event_data_interface::msg::CameraEvents & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_event_data_interface
get_serialized_size(
  const camera_event_data_interface::msg::CameraEvents & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_event_data_interface
max_serialized_size_CameraEvents(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace camera_event_data_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_camera_event_data_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, camera_event_data_interface, msg, CameraEvents)();

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
