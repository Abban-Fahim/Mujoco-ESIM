// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_event_data_interface:msg/CameraEvents.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__TRAITS_HPP_
#define CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__TRAITS_HPP_

#include "camera_event_data_interface/msg/detail/camera_events__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const camera_event_data_interface::msg::CameraEvents & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.t.size() == 0) {
      out << "t: []\n";
    } else {
      out << "t:\n";
      for (auto item : msg.t) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.p.size() == 0) {
      out << "p: []\n";
    } else {
      out << "p:\n";
      for (auto item : msg.p) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const camera_event_data_interface::msg::CameraEvents & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<camera_event_data_interface::msg::CameraEvents>()
{
  return "camera_event_data_interface::msg::CameraEvents";
}

template<>
inline const char * name<camera_event_data_interface::msg::CameraEvents>()
{
  return "camera_event_data_interface/msg/CameraEvents";
}

template<>
struct has_fixed_size<camera_event_data_interface::msg::CameraEvents>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_event_data_interface::msg::CameraEvents>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_event_data_interface::msg::CameraEvents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__TRAITS_HPP_
