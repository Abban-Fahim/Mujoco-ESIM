// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_interface:action/DesiredPoseName.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACE__ACTION__DETAIL__DESIRED_POSE_NAME__TRAITS_HPP_
#define CONTROLLER_INTERFACE__ACTION__DETAIL__DESIRED_POSE_NAME__TRAITS_HPP_

#include "controller_interface/action/detail/desired_pose_name__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_interface::action::DesiredPoseName_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: des_pose_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "des_pose_name: ";
    value_to_yaml(msg.des_pose_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_interface::action::DesiredPoseName_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_interface::action::DesiredPoseName_Goal>()
{
  return "controller_interface::action::DesiredPoseName_Goal";
}

template<>
inline const char * name<controller_interface::action::DesiredPoseName_Goal>()
{
  return "controller_interface/action/DesiredPoseName_Goal";
}

template<>
struct has_fixed_size<controller_interface::action::DesiredPoseName_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_interface::action::DesiredPoseName_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_interface::action::DesiredPoseName_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_interface::action::DesiredPoseName_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_interface::action::DesiredPoseName_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_interface::action::DesiredPoseName_Result>()
{
  return "controller_interface::action::DesiredPoseName_Result";
}

template<>
inline const char * name<controller_interface::action::DesiredPoseName_Result>()
{
  return "controller_interface/action/DesiredPoseName_Result";
}

template<>
struct has_fixed_size<controller_interface::action::DesiredPoseName_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_interface::action::DesiredPoseName_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_interface::action::DesiredPoseName_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_interface::action::DesiredPoseName_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_error: ";
    value_to_yaml(msg.feedback_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_interface::action::DesiredPoseName_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_interface::action::DesiredPoseName_Feedback>()
{
  return "controller_interface::action::DesiredPoseName_Feedback";
}

template<>
inline const char * name<controller_interface::action::DesiredPoseName_Feedback>()
{
  return "controller_interface/action/DesiredPoseName_Feedback";
}

template<>
struct has_fixed_size<controller_interface::action::DesiredPoseName_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_interface::action::DesiredPoseName_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_interface::action::DesiredPoseName_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "controller_interface/action/detail/desired_pose_name__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_interface::action::DesiredPoseName_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_interface::action::DesiredPoseName_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_interface::action::DesiredPoseName_SendGoal_Request>()
{
  return "controller_interface::action::DesiredPoseName_SendGoal_Request";
}

template<>
inline const char * name<controller_interface::action::DesiredPoseName_SendGoal_Request>()
{
  return "controller_interface/action/DesiredPoseName_SendGoal_Request";
}

template<>
struct has_fixed_size<controller_interface::action::DesiredPoseName_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<controller_interface::action::DesiredPoseName_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<controller_interface::action::DesiredPoseName_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<controller_interface::action::DesiredPoseName_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<controller_interface::action::DesiredPoseName_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_interface::action::DesiredPoseName_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_interface::action::DesiredPoseName_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_interface::action::DesiredPoseName_SendGoal_Response>()
{
  return "controller_interface::action::DesiredPoseName_SendGoal_Response";
}

template<>
inline const char * name<controller_interface::action::DesiredPoseName_SendGoal_Response>()
{
  return "controller_interface/action/DesiredPoseName_SendGoal_Response";
}

template<>
struct has_fixed_size<controller_interface::action::DesiredPoseName_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<controller_interface::action::DesiredPoseName_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<controller_interface::action::DesiredPoseName_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_interface::action::DesiredPoseName_SendGoal>()
{
  return "controller_interface::action::DesiredPoseName_SendGoal";
}

template<>
inline const char * name<controller_interface::action::DesiredPoseName_SendGoal>()
{
  return "controller_interface/action/DesiredPoseName_SendGoal";
}

template<>
struct has_fixed_size<controller_interface::action::DesiredPoseName_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_interface::action::DesiredPoseName_SendGoal_Request>::value &&
    has_fixed_size<controller_interface::action::DesiredPoseName_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_interface::action::DesiredPoseName_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_interface::action::DesiredPoseName_SendGoal_Request>::value &&
    has_bounded_size<controller_interface::action::DesiredPoseName_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<controller_interface::action::DesiredPoseName_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<controller_interface::action::DesiredPoseName_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_interface::action::DesiredPoseName_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_interface::action::DesiredPoseName_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_interface::action::DesiredPoseName_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_interface::action::DesiredPoseName_GetResult_Request>()
{
  return "controller_interface::action::DesiredPoseName_GetResult_Request";
}

template<>
inline const char * name<controller_interface::action::DesiredPoseName_GetResult_Request>()
{
  return "controller_interface/action/DesiredPoseName_GetResult_Request";
}

template<>
struct has_fixed_size<controller_interface::action::DesiredPoseName_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<controller_interface::action::DesiredPoseName_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<controller_interface::action::DesiredPoseName_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "controller_interface/action/detail/desired_pose_name__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_interface::action::DesiredPoseName_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_interface::action::DesiredPoseName_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_interface::action::DesiredPoseName_GetResult_Response>()
{
  return "controller_interface::action::DesiredPoseName_GetResult_Response";
}

template<>
inline const char * name<controller_interface::action::DesiredPoseName_GetResult_Response>()
{
  return "controller_interface/action/DesiredPoseName_GetResult_Response";
}

template<>
struct has_fixed_size<controller_interface::action::DesiredPoseName_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<controller_interface::action::DesiredPoseName_Result>::value> {};

template<>
struct has_bounded_size<controller_interface::action::DesiredPoseName_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<controller_interface::action::DesiredPoseName_Result>::value> {};

template<>
struct is_message<controller_interface::action::DesiredPoseName_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_interface::action::DesiredPoseName_GetResult>()
{
  return "controller_interface::action::DesiredPoseName_GetResult";
}

template<>
inline const char * name<controller_interface::action::DesiredPoseName_GetResult>()
{
  return "controller_interface/action/DesiredPoseName_GetResult";
}

template<>
struct has_fixed_size<controller_interface::action::DesiredPoseName_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_interface::action::DesiredPoseName_GetResult_Request>::value &&
    has_fixed_size<controller_interface::action::DesiredPoseName_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_interface::action::DesiredPoseName_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_interface::action::DesiredPoseName_GetResult_Request>::value &&
    has_bounded_size<controller_interface::action::DesiredPoseName_GetResult_Response>::value
  >
{
};

template<>
struct is_service<controller_interface::action::DesiredPoseName_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<controller_interface::action::DesiredPoseName_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_interface::action::DesiredPoseName_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "controller_interface/action/detail/desired_pose_name__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_interface::action::DesiredPoseName_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_interface::action::DesiredPoseName_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_interface::action::DesiredPoseName_FeedbackMessage>()
{
  return "controller_interface::action::DesiredPoseName_FeedbackMessage";
}

template<>
inline const char * name<controller_interface::action::DesiredPoseName_FeedbackMessage>()
{
  return "controller_interface/action/DesiredPoseName_FeedbackMessage";
}

template<>
struct has_fixed_size<controller_interface::action::DesiredPoseName_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<controller_interface::action::DesiredPoseName_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<controller_interface::action::DesiredPoseName_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<controller_interface::action::DesiredPoseName_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<controller_interface::action::DesiredPoseName_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<controller_interface::action::DesiredPoseName>
  : std::true_type
{
};

template<>
struct is_action_goal<controller_interface::action::DesiredPoseName_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<controller_interface::action::DesiredPoseName_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<controller_interface::action::DesiredPoseName_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CONTROLLER_INTERFACE__ACTION__DETAIL__DESIRED_POSE_NAME__TRAITS_HPP_
