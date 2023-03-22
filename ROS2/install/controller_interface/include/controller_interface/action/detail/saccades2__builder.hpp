// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_interface:action/Saccades2.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACE__ACTION__DETAIL__SACCADES2__BUILDER_HPP_
#define CONTROLLER_INTERFACE__ACTION__DETAIL__SACCADES2__BUILDER_HPP_

#include "controller_interface/action/detail/saccades2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace controller_interface
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interface::action::Saccades2_Goal>()
{
  return ::controller_interface::action::Saccades2_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace controller_interface


namespace controller_interface
{

namespace action
{

namespace builder
{

class Init_Saccades2_Result_time_spent
{
public:
  Init_Saccades2_Result_time_spent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controller_interface::action::Saccades2_Result time_spent(::controller_interface::action::Saccades2_Result::_time_spent_type arg)
  {
    msg_.time_spent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interface::action::Saccades2_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interface::action::Saccades2_Result>()
{
  return controller_interface::action::builder::Init_Saccades2_Result_time_spent();
}

}  // namespace controller_interface


namespace controller_interface
{

namespace action
{

namespace builder
{

class Init_Saccades2_Feedback_time_left
{
public:
  Init_Saccades2_Feedback_time_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controller_interface::action::Saccades2_Feedback time_left(::controller_interface::action::Saccades2_Feedback::_time_left_type arg)
  {
    msg_.time_left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interface::action::Saccades2_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interface::action::Saccades2_Feedback>()
{
  return controller_interface::action::builder::Init_Saccades2_Feedback_time_left();
}

}  // namespace controller_interface


namespace controller_interface
{

namespace action
{

namespace builder
{

class Init_Saccades2_SendGoal_Request_goal
{
public:
  explicit Init_Saccades2_SendGoal_Request_goal(::controller_interface::action::Saccades2_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::controller_interface::action::Saccades2_SendGoal_Request goal(::controller_interface::action::Saccades2_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interface::action::Saccades2_SendGoal_Request msg_;
};

class Init_Saccades2_SendGoal_Request_goal_id
{
public:
  Init_Saccades2_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Saccades2_SendGoal_Request_goal goal_id(::controller_interface::action::Saccades2_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Saccades2_SendGoal_Request_goal(msg_);
  }

private:
  ::controller_interface::action::Saccades2_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interface::action::Saccades2_SendGoal_Request>()
{
  return controller_interface::action::builder::Init_Saccades2_SendGoal_Request_goal_id();
}

}  // namespace controller_interface


namespace controller_interface
{

namespace action
{

namespace builder
{

class Init_Saccades2_SendGoal_Response_stamp
{
public:
  explicit Init_Saccades2_SendGoal_Response_stamp(::controller_interface::action::Saccades2_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::controller_interface::action::Saccades2_SendGoal_Response stamp(::controller_interface::action::Saccades2_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interface::action::Saccades2_SendGoal_Response msg_;
};

class Init_Saccades2_SendGoal_Response_accepted
{
public:
  Init_Saccades2_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Saccades2_SendGoal_Response_stamp accepted(::controller_interface::action::Saccades2_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Saccades2_SendGoal_Response_stamp(msg_);
  }

private:
  ::controller_interface::action::Saccades2_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interface::action::Saccades2_SendGoal_Response>()
{
  return controller_interface::action::builder::Init_Saccades2_SendGoal_Response_accepted();
}

}  // namespace controller_interface


namespace controller_interface
{

namespace action
{

namespace builder
{

class Init_Saccades2_GetResult_Request_goal_id
{
public:
  Init_Saccades2_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controller_interface::action::Saccades2_GetResult_Request goal_id(::controller_interface::action::Saccades2_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interface::action::Saccades2_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interface::action::Saccades2_GetResult_Request>()
{
  return controller_interface::action::builder::Init_Saccades2_GetResult_Request_goal_id();
}

}  // namespace controller_interface


namespace controller_interface
{

namespace action
{

namespace builder
{

class Init_Saccades2_GetResult_Response_result
{
public:
  explicit Init_Saccades2_GetResult_Response_result(::controller_interface::action::Saccades2_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::controller_interface::action::Saccades2_GetResult_Response result(::controller_interface::action::Saccades2_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interface::action::Saccades2_GetResult_Response msg_;
};

class Init_Saccades2_GetResult_Response_status
{
public:
  Init_Saccades2_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Saccades2_GetResult_Response_result status(::controller_interface::action::Saccades2_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Saccades2_GetResult_Response_result(msg_);
  }

private:
  ::controller_interface::action::Saccades2_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interface::action::Saccades2_GetResult_Response>()
{
  return controller_interface::action::builder::Init_Saccades2_GetResult_Response_status();
}

}  // namespace controller_interface


namespace controller_interface
{

namespace action
{

namespace builder
{

class Init_Saccades2_FeedbackMessage_feedback
{
public:
  explicit Init_Saccades2_FeedbackMessage_feedback(::controller_interface::action::Saccades2_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::controller_interface::action::Saccades2_FeedbackMessage feedback(::controller_interface::action::Saccades2_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_interface::action::Saccades2_FeedbackMessage msg_;
};

class Init_Saccades2_FeedbackMessage_goal_id
{
public:
  Init_Saccades2_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Saccades2_FeedbackMessage_feedback goal_id(::controller_interface::action::Saccades2_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Saccades2_FeedbackMessage_feedback(msg_);
  }

private:
  ::controller_interface::action::Saccades2_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_interface::action::Saccades2_FeedbackMessage>()
{
  return controller_interface::action::builder::Init_Saccades2_FeedbackMessage_goal_id();
}

}  // namespace controller_interface

#endif  // CONTROLLER_INTERFACE__ACTION__DETAIL__SACCADES2__BUILDER_HPP_
