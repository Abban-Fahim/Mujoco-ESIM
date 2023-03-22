// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_event_data_interface:msg/CameraEvents.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__BUILDER_HPP_
#define CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__BUILDER_HPP_

#include "camera_event_data_interface/msg/detail/camera_events__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace camera_event_data_interface
{

namespace msg
{

namespace builder
{

class Init_CameraEvents_p
{
public:
  explicit Init_CameraEvents_p(::camera_event_data_interface::msg::CameraEvents & msg)
  : msg_(msg)
  {}
  ::camera_event_data_interface::msg::CameraEvents p(::camera_event_data_interface::msg::CameraEvents::_p_type arg)
  {
    msg_.p = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_event_data_interface::msg::CameraEvents msg_;
};

class Init_CameraEvents_t
{
public:
  explicit Init_CameraEvents_t(::camera_event_data_interface::msg::CameraEvents & msg)
  : msg_(msg)
  {}
  Init_CameraEvents_p t(::camera_event_data_interface::msg::CameraEvents::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_CameraEvents_p(msg_);
  }

private:
  ::camera_event_data_interface::msg::CameraEvents msg_;
};

class Init_CameraEvents_y
{
public:
  explicit Init_CameraEvents_y(::camera_event_data_interface::msg::CameraEvents & msg)
  : msg_(msg)
  {}
  Init_CameraEvents_t y(::camera_event_data_interface::msg::CameraEvents::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CameraEvents_t(msg_);
  }

private:
  ::camera_event_data_interface::msg::CameraEvents msg_;
};

class Init_CameraEvents_x
{
public:
  Init_CameraEvents_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraEvents_y x(::camera_event_data_interface::msg::CameraEvents::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CameraEvents_y(msg_);
  }

private:
  ::camera_event_data_interface::msg::CameraEvents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_event_data_interface::msg::CameraEvents>()
{
  return camera_event_data_interface::msg::builder::Init_CameraEvents_x();
}

}  // namespace camera_event_data_interface

#endif  // CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__BUILDER_HPP_
