// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_interface:action/DesiredPose.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACE__ACTION__DETAIL__DESIRED_POSE__STRUCT_HPP_
#define CONTROLLER_INTERFACE__ACTION__DETAIL__DESIRED_POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__controller_interface__action__DesiredPose_Goal __attribute__((deprecated))
#else
# define DEPRECATED__controller_interface__action__DesiredPose_Goal __declspec(deprecated)
#endif

namespace controller_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DesiredPose_Goal_
{
  using Type = DesiredPose_Goal_<ContainerAllocator>;

  explicit DesiredPose_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->des_pose.begin(), this->des_pose.end(), 0.0f);
    }
  }

  explicit DesiredPose_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : des_pose(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->des_pose.begin(), this->des_pose.end(), 0.0f);
    }
  }

  // field types and members
  using _des_pose_type =
    std::array<float, 6>;
  _des_pose_type des_pose;

  // setters for named parameter idiom
  Type & set__des_pose(
    const std::array<float, 6> & _arg)
  {
    this->des_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interface::action::DesiredPose_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interface::action::DesiredPose_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interface__action__DesiredPose_Goal
    std::shared_ptr<controller_interface::action::DesiredPose_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interface__action__DesiredPose_Goal
    std::shared_ptr<controller_interface::action::DesiredPose_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DesiredPose_Goal_ & other) const
  {
    if (this->des_pose != other.des_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const DesiredPose_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DesiredPose_Goal_

// alias to use template instance with default allocator
using DesiredPose_Goal =
  controller_interface::action::DesiredPose_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace controller_interface


#ifndef _WIN32
# define DEPRECATED__controller_interface__action__DesiredPose_Result __attribute__((deprecated))
#else
# define DEPRECATED__controller_interface__action__DesiredPose_Result __declspec(deprecated)
#endif

namespace controller_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DesiredPose_Result_
{
  using Type = DesiredPose_Result_<ContainerAllocator>;

  explicit DesiredPose_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->pose_error.begin(), this->pose_error.end(), 0.0f);
    }
  }

  explicit DesiredPose_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->pose_error.begin(), this->pose_error.end(), 0.0f);
    }
  }

  // field types and members
  using _pose_error_type =
    std::array<float, 6>;
  _pose_error_type pose_error;

  // setters for named parameter idiom
  Type & set__pose_error(
    const std::array<float, 6> & _arg)
  {
    this->pose_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interface::action::DesiredPose_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interface::action::DesiredPose_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interface__action__DesiredPose_Result
    std::shared_ptr<controller_interface::action::DesiredPose_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interface__action__DesiredPose_Result
    std::shared_ptr<controller_interface::action::DesiredPose_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DesiredPose_Result_ & other) const
  {
    if (this->pose_error != other.pose_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const DesiredPose_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DesiredPose_Result_

// alias to use template instance with default allocator
using DesiredPose_Result =
  controller_interface::action::DesiredPose_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace controller_interface


#ifndef _WIN32
# define DEPRECATED__controller_interface__action__DesiredPose_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__controller_interface__action__DesiredPose_Feedback __declspec(deprecated)
#endif

namespace controller_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DesiredPose_Feedback_
{
  using Type = DesiredPose_Feedback_<ContainerAllocator>;

  explicit DesiredPose_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->feedback_pose_error.begin(), this->feedback_pose_error.end(), 0.0f);
    }
  }

  explicit DesiredPose_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback_pose_error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->feedback_pose_error.begin(), this->feedback_pose_error.end(), 0.0f);
    }
  }

  // field types and members
  using _feedback_pose_error_type =
    std::array<float, 6>;
  _feedback_pose_error_type feedback_pose_error;

  // setters for named parameter idiom
  Type & set__feedback_pose_error(
    const std::array<float, 6> & _arg)
  {
    this->feedback_pose_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interface::action::DesiredPose_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interface::action::DesiredPose_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interface__action__DesiredPose_Feedback
    std::shared_ptr<controller_interface::action::DesiredPose_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interface__action__DesiredPose_Feedback
    std::shared_ptr<controller_interface::action::DesiredPose_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DesiredPose_Feedback_ & other) const
  {
    if (this->feedback_pose_error != other.feedback_pose_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const DesiredPose_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DesiredPose_Feedback_

// alias to use template instance with default allocator
using DesiredPose_Feedback =
  controller_interface::action::DesiredPose_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace controller_interface


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "controller_interface/action/detail/desired_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__controller_interface__action__DesiredPose_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__controller_interface__action__DesiredPose_SendGoal_Request __declspec(deprecated)
#endif

namespace controller_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DesiredPose_SendGoal_Request_
{
  using Type = DesiredPose_SendGoal_Request_<ContainerAllocator>;

  explicit DesiredPose_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit DesiredPose_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    controller_interface::action::DesiredPose_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const controller_interface::action::DesiredPose_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interface::action::DesiredPose_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interface::action::DesiredPose_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interface__action__DesiredPose_SendGoal_Request
    std::shared_ptr<controller_interface::action::DesiredPose_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interface__action__DesiredPose_SendGoal_Request
    std::shared_ptr<controller_interface::action::DesiredPose_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DesiredPose_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DesiredPose_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DesiredPose_SendGoal_Request_

// alias to use template instance with default allocator
using DesiredPose_SendGoal_Request =
  controller_interface::action::DesiredPose_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace controller_interface


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__controller_interface__action__DesiredPose_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__controller_interface__action__DesiredPose_SendGoal_Response __declspec(deprecated)
#endif

namespace controller_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DesiredPose_SendGoal_Response_
{
  using Type = DesiredPose_SendGoal_Response_<ContainerAllocator>;

  explicit DesiredPose_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit DesiredPose_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interface::action::DesiredPose_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interface::action::DesiredPose_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interface__action__DesiredPose_SendGoal_Response
    std::shared_ptr<controller_interface::action::DesiredPose_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interface__action__DesiredPose_SendGoal_Response
    std::shared_ptr<controller_interface::action::DesiredPose_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DesiredPose_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const DesiredPose_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DesiredPose_SendGoal_Response_

// alias to use template instance with default allocator
using DesiredPose_SendGoal_Response =
  controller_interface::action::DesiredPose_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace controller_interface

namespace controller_interface
{

namespace action
{

struct DesiredPose_SendGoal
{
  using Request = controller_interface::action::DesiredPose_SendGoal_Request;
  using Response = controller_interface::action::DesiredPose_SendGoal_Response;
};

}  // namespace action

}  // namespace controller_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__controller_interface__action__DesiredPose_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__controller_interface__action__DesiredPose_GetResult_Request __declspec(deprecated)
#endif

namespace controller_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DesiredPose_GetResult_Request_
{
  using Type = DesiredPose_GetResult_Request_<ContainerAllocator>;

  explicit DesiredPose_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit DesiredPose_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interface::action::DesiredPose_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interface::action::DesiredPose_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interface__action__DesiredPose_GetResult_Request
    std::shared_ptr<controller_interface::action::DesiredPose_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interface__action__DesiredPose_GetResult_Request
    std::shared_ptr<controller_interface::action::DesiredPose_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DesiredPose_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DesiredPose_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DesiredPose_GetResult_Request_

// alias to use template instance with default allocator
using DesiredPose_GetResult_Request =
  controller_interface::action::DesiredPose_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace controller_interface


// Include directives for member types
// Member 'result'
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__controller_interface__action__DesiredPose_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__controller_interface__action__DesiredPose_GetResult_Response __declspec(deprecated)
#endif

namespace controller_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DesiredPose_GetResult_Response_
{
  using Type = DesiredPose_GetResult_Response_<ContainerAllocator>;

  explicit DesiredPose_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit DesiredPose_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    controller_interface::action::DesiredPose_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const controller_interface::action::DesiredPose_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interface::action::DesiredPose_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interface::action::DesiredPose_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interface__action__DesiredPose_GetResult_Response
    std::shared_ptr<controller_interface::action::DesiredPose_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interface__action__DesiredPose_GetResult_Response
    std::shared_ptr<controller_interface::action::DesiredPose_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DesiredPose_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DesiredPose_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DesiredPose_GetResult_Response_

// alias to use template instance with default allocator
using DesiredPose_GetResult_Response =
  controller_interface::action::DesiredPose_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace controller_interface

namespace controller_interface
{

namespace action
{

struct DesiredPose_GetResult
{
  using Request = controller_interface::action::DesiredPose_GetResult_Request;
  using Response = controller_interface::action::DesiredPose_GetResult_Response;
};

}  // namespace action

}  // namespace controller_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__controller_interface__action__DesiredPose_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__controller_interface__action__DesiredPose_FeedbackMessage __declspec(deprecated)
#endif

namespace controller_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DesiredPose_FeedbackMessage_
{
  using Type = DesiredPose_FeedbackMessage_<ContainerAllocator>;

  explicit DesiredPose_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit DesiredPose_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    controller_interface::action::DesiredPose_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const controller_interface::action::DesiredPose_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_interface::action::DesiredPose_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_interface::action::DesiredPose_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_interface::action::DesiredPose_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_interface::action::DesiredPose_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_interface::action::DesiredPose_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_interface::action::DesiredPose_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_interface__action__DesiredPose_FeedbackMessage
    std::shared_ptr<controller_interface::action::DesiredPose_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_interface__action__DesiredPose_FeedbackMessage
    std::shared_ptr<controller_interface::action::DesiredPose_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DesiredPose_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const DesiredPose_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DesiredPose_FeedbackMessage_

// alias to use template instance with default allocator
using DesiredPose_FeedbackMessage =
  controller_interface::action::DesiredPose_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace controller_interface

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace controller_interface
{

namespace action
{

struct DesiredPose
{
  /// The goal message defined in the action definition.
  using Goal = controller_interface::action::DesiredPose_Goal;
  /// The result message defined in the action definition.
  using Result = controller_interface::action::DesiredPose_Result;
  /// The feedback message defined in the action definition.
  using Feedback = controller_interface::action::DesiredPose_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = controller_interface::action::DesiredPose_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = controller_interface::action::DesiredPose_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = controller_interface::action::DesiredPose_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct DesiredPose DesiredPose;

}  // namespace action

}  // namespace controller_interface

#endif  // CONTROLLER_INTERFACE__ACTION__DETAIL__DESIRED_POSE__STRUCT_HPP_
