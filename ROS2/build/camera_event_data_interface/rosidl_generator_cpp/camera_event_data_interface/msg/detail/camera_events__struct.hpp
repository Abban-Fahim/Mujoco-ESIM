// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_event_data_interface:msg/CameraEvents.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__STRUCT_HPP_
#define CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__camera_event_data_interface__msg__CameraEvents __attribute__((deprecated))
#else
# define DEPRECATED__camera_event_data_interface__msg__CameraEvents __declspec(deprecated)
#endif

namespace camera_event_data_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraEvents_
{
  using Type = CameraEvents_<ContainerAllocator>;

  explicit CameraEvents_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CameraEvents_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _x_type x;
  using _y_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _y_type y;
  using _t_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _t_type t;
  using _p_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _p_type p;

  // setters for named parameter idiom
  Type & set__x(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__t(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->t = _arg;
    return *this;
  }
  Type & set__p(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->p = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_event_data_interface::msg::CameraEvents_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_event_data_interface::msg::CameraEvents_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_event_data_interface::msg::CameraEvents_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_event_data_interface::msg::CameraEvents_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_event_data_interface::msg::CameraEvents_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_event_data_interface::msg::CameraEvents_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_event_data_interface::msg::CameraEvents_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_event_data_interface::msg::CameraEvents_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_event_data_interface::msg::CameraEvents_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_event_data_interface::msg::CameraEvents_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_event_data_interface__msg__CameraEvents
    std::shared_ptr<camera_event_data_interface::msg::CameraEvents_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_event_data_interface__msg__CameraEvents
    std::shared_ptr<camera_event_data_interface::msg::CameraEvents_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraEvents_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraEvents_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraEvents_

// alias to use template instance with default allocator
using CameraEvents =
  camera_event_data_interface::msg::CameraEvents_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace camera_event_data_interface

#endif  // CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__STRUCT_HPP_
