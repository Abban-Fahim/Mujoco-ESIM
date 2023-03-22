// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_interface:action/DesiredPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"
#include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_interface/action/detail/desired_pose__functions.h"
#include "controller_interface/action/detail/desired_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPose_Goal__rosidl_typesupport_introspection_c__DesiredPose_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPose_Goal__init(message_memory);
}

void DesiredPose_Goal__rosidl_typesupport_introspection_c__DesiredPose_Goal_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPose_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPose_Goal__rosidl_typesupport_introspection_c__DesiredPose_Goal_message_member_array[1] = {
  {
    "des_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPose_Goal, des_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPose_Goal__rosidl_typesupport_introspection_c__DesiredPose_Goal_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPose_Goal",  // message name
  1,  // number of fields
  sizeof(controller_interface__action__DesiredPose_Goal),
  DesiredPose_Goal__rosidl_typesupport_introspection_c__DesiredPose_Goal_message_member_array,  // message members
  DesiredPose_Goal__rosidl_typesupport_introspection_c__DesiredPose_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPose_Goal__rosidl_typesupport_introspection_c__DesiredPose_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPose_Goal__rosidl_typesupport_introspection_c__DesiredPose_Goal_message_type_support_handle = {
  0,
  &DesiredPose_Goal__rosidl_typesupport_introspection_c__DesiredPose_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_Goal)() {
  if (!DesiredPose_Goal__rosidl_typesupport_introspection_c__DesiredPose_Goal_message_type_support_handle.typesupport_identifier) {
    DesiredPose_Goal__rosidl_typesupport_introspection_c__DesiredPose_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPose_Goal__rosidl_typesupport_introspection_c__DesiredPose_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPose_Result__rosidl_typesupport_introspection_c__DesiredPose_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPose_Result__init(message_memory);
}

void DesiredPose_Result__rosidl_typesupport_introspection_c__DesiredPose_Result_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPose_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPose_Result__rosidl_typesupport_introspection_c__DesiredPose_Result_message_member_array[1] = {
  {
    "pose_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPose_Result, pose_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPose_Result__rosidl_typesupport_introspection_c__DesiredPose_Result_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPose_Result",  // message name
  1,  // number of fields
  sizeof(controller_interface__action__DesiredPose_Result),
  DesiredPose_Result__rosidl_typesupport_introspection_c__DesiredPose_Result_message_member_array,  // message members
  DesiredPose_Result__rosidl_typesupport_introspection_c__DesiredPose_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPose_Result__rosidl_typesupport_introspection_c__DesiredPose_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPose_Result__rosidl_typesupport_introspection_c__DesiredPose_Result_message_type_support_handle = {
  0,
  &DesiredPose_Result__rosidl_typesupport_introspection_c__DesiredPose_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_Result)() {
  if (!DesiredPose_Result__rosidl_typesupport_introspection_c__DesiredPose_Result_message_type_support_handle.typesupport_identifier) {
    DesiredPose_Result__rosidl_typesupport_introspection_c__DesiredPose_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPose_Result__rosidl_typesupport_introspection_c__DesiredPose_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPose_Feedback__rosidl_typesupport_introspection_c__DesiredPose_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPose_Feedback__init(message_memory);
}

void DesiredPose_Feedback__rosidl_typesupport_introspection_c__DesiredPose_Feedback_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPose_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPose_Feedback__rosidl_typesupport_introspection_c__DesiredPose_Feedback_message_member_array[1] = {
  {
    "feedback_pose_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPose_Feedback, feedback_pose_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPose_Feedback__rosidl_typesupport_introspection_c__DesiredPose_Feedback_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPose_Feedback",  // message name
  1,  // number of fields
  sizeof(controller_interface__action__DesiredPose_Feedback),
  DesiredPose_Feedback__rosidl_typesupport_introspection_c__DesiredPose_Feedback_message_member_array,  // message members
  DesiredPose_Feedback__rosidl_typesupport_introspection_c__DesiredPose_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPose_Feedback__rosidl_typesupport_introspection_c__DesiredPose_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPose_Feedback__rosidl_typesupport_introspection_c__DesiredPose_Feedback_message_type_support_handle = {
  0,
  &DesiredPose_Feedback__rosidl_typesupport_introspection_c__DesiredPose_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_Feedback)() {
  if (!DesiredPose_Feedback__rosidl_typesupport_introspection_c__DesiredPose_Feedback_message_type_support_handle.typesupport_identifier) {
    DesiredPose_Feedback__rosidl_typesupport_introspection_c__DesiredPose_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPose_Feedback__rosidl_typesupport_introspection_c__DesiredPose_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "controller_interface/action/desired_pose.h"
// Member `goal`
// already included above
// #include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPose_SendGoal_Request__init(message_memory);
}

void DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPose_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPose_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPose_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPose_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(controller_interface__action__DesiredPose_SendGoal_Request),
  DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_message_member_array,  // message members
  DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_message_type_support_handle = {
  0,
  &DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_SendGoal_Request)() {
  DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_Goal)();
  if (!DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPose_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPose_SendGoal_Response__init(message_memory);
}

void DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPose_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPose_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPose_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPose_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(controller_interface__action__DesiredPose_SendGoal_Response),
  DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_message_member_array,  // message members
  DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_message_type_support_handle = {
  0,
  &DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_SendGoal_Response)() {
  DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPose_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_service_members = {
  "controller_interface__action",  // service namespace
  "DesiredPose_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_service_type_support_handle = {
  0,
  &controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_SendGoal)() {
  if (!controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_service_type_support_handle.typesupport_identifier) {
    controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_SendGoal_Response)()->data;
  }

  return &controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPose_GetResult_Request__init(message_memory);
}

void DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPose_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPose_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPose_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(controller_interface__action__DesiredPose_GetResult_Request),
  DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_message_member_array,  // message members
  DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_message_type_support_handle = {
  0,
  &DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_GetResult_Request)() {
  DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPose_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "controller_interface/action/desired_pose.h"
// Member `result`
// already included above
// #include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPose_GetResult_Response__init(message_memory);
}

void DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPose_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPose_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPose_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPose_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(controller_interface__action__DesiredPose_GetResult_Response),
  DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_message_member_array,  // message members
  DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_message_type_support_handle = {
  0,
  &DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_GetResult_Response)() {
  DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_Result)();
  if (!DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPose_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_GetResult_service_members = {
  "controller_interface__action",  // service namespace
  "DesiredPose_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_GetResult_service_type_support_handle = {
  0,
  &controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_GetResult)() {
  if (!controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_GetResult_service_type_support_handle.typesupport_identifier) {
    controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_GetResult_Response)()->data;
  }

  return &controller_interface__action__detail__desired_pose__rosidl_typesupport_introspection_c__DesiredPose_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "controller_interface/action/desired_pose.h"
// Member `feedback`
// already included above
// #include "controller_interface/action/detail/desired_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPose_FeedbackMessage__init(message_memory);
}

void DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPose_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPose_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPose_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPose_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(controller_interface__action__DesiredPose_FeedbackMessage),
  DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_message_member_array,  // message members
  DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_message_type_support_handle = {
  0,
  &DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_FeedbackMessage)() {
  DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_Feedback)();
  if (!DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPose_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPose_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
