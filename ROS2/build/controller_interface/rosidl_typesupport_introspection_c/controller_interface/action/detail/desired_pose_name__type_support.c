// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_interface:action/DesiredPoseName.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"
#include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_interface/action/detail/desired_pose_name__functions.h"
#include "controller_interface/action/detail/desired_pose_name__struct.h"


// Include directives for member types
// Member `des_pose_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPoseName_Goal__rosidl_typesupport_introspection_c__DesiredPoseName_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPoseName_Goal__init(message_memory);
}

void DesiredPoseName_Goal__rosidl_typesupport_introspection_c__DesiredPoseName_Goal_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPoseName_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPoseName_Goal__rosidl_typesupport_introspection_c__DesiredPoseName_Goal_message_member_array[1] = {
  {
    "des_pose_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPoseName_Goal, des_pose_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPoseName_Goal__rosidl_typesupport_introspection_c__DesiredPoseName_Goal_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPoseName_Goal",  // message name
  1,  // number of fields
  sizeof(controller_interface__action__DesiredPoseName_Goal),
  DesiredPoseName_Goal__rosidl_typesupport_introspection_c__DesiredPoseName_Goal_message_member_array,  // message members
  DesiredPoseName_Goal__rosidl_typesupport_introspection_c__DesiredPoseName_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPoseName_Goal__rosidl_typesupport_introspection_c__DesiredPoseName_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPoseName_Goal__rosidl_typesupport_introspection_c__DesiredPoseName_Goal_message_type_support_handle = {
  0,
  &DesiredPoseName_Goal__rosidl_typesupport_introspection_c__DesiredPoseName_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_Goal)() {
  if (!DesiredPoseName_Goal__rosidl_typesupport_introspection_c__DesiredPoseName_Goal_message_type_support_handle.typesupport_identifier) {
    DesiredPoseName_Goal__rosidl_typesupport_introspection_c__DesiredPoseName_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPoseName_Goal__rosidl_typesupport_introspection_c__DesiredPoseName_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPoseName_Result__rosidl_typesupport_introspection_c__DesiredPoseName_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPoseName_Result__init(message_memory);
}

void DesiredPoseName_Result__rosidl_typesupport_introspection_c__DesiredPoseName_Result_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPoseName_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPoseName_Result__rosidl_typesupport_introspection_c__DesiredPoseName_Result_message_member_array[1] = {
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPoseName_Result, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPoseName_Result__rosidl_typesupport_introspection_c__DesiredPoseName_Result_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPoseName_Result",  // message name
  1,  // number of fields
  sizeof(controller_interface__action__DesiredPoseName_Result),
  DesiredPoseName_Result__rosidl_typesupport_introspection_c__DesiredPoseName_Result_message_member_array,  // message members
  DesiredPoseName_Result__rosidl_typesupport_introspection_c__DesiredPoseName_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPoseName_Result__rosidl_typesupport_introspection_c__DesiredPoseName_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPoseName_Result__rosidl_typesupport_introspection_c__DesiredPoseName_Result_message_type_support_handle = {
  0,
  &DesiredPoseName_Result__rosidl_typesupport_introspection_c__DesiredPoseName_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_Result)() {
  if (!DesiredPoseName_Result__rosidl_typesupport_introspection_c__DesiredPoseName_Result_message_type_support_handle.typesupport_identifier) {
    DesiredPoseName_Result__rosidl_typesupport_introspection_c__DesiredPoseName_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPoseName_Result__rosidl_typesupport_introspection_c__DesiredPoseName_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPoseName_Feedback__rosidl_typesupport_introspection_c__DesiredPoseName_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPoseName_Feedback__init(message_memory);
}

void DesiredPoseName_Feedback__rosidl_typesupport_introspection_c__DesiredPoseName_Feedback_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPoseName_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPoseName_Feedback__rosidl_typesupport_introspection_c__DesiredPoseName_Feedback_message_member_array[1] = {
  {
    "feedback_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPoseName_Feedback, feedback_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPoseName_Feedback__rosidl_typesupport_introspection_c__DesiredPoseName_Feedback_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPoseName_Feedback",  // message name
  1,  // number of fields
  sizeof(controller_interface__action__DesiredPoseName_Feedback),
  DesiredPoseName_Feedback__rosidl_typesupport_introspection_c__DesiredPoseName_Feedback_message_member_array,  // message members
  DesiredPoseName_Feedback__rosidl_typesupport_introspection_c__DesiredPoseName_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPoseName_Feedback__rosidl_typesupport_introspection_c__DesiredPoseName_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPoseName_Feedback__rosidl_typesupport_introspection_c__DesiredPoseName_Feedback_message_type_support_handle = {
  0,
  &DesiredPoseName_Feedback__rosidl_typesupport_introspection_c__DesiredPoseName_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_Feedback)() {
  if (!DesiredPoseName_Feedback__rosidl_typesupport_introspection_c__DesiredPoseName_Feedback_message_type_support_handle.typesupport_identifier) {
    DesiredPoseName_Feedback__rosidl_typesupport_introspection_c__DesiredPoseName_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPoseName_Feedback__rosidl_typesupport_introspection_c__DesiredPoseName_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "controller_interface/action/desired_pose_name.h"
// Member `goal`
// already included above
// #include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPoseName_SendGoal_Request__init(message_memory);
}

void DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPoseName_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPoseName_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(controller_interface__action__DesiredPoseName_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPoseName_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(controller_interface__action__DesiredPoseName_SendGoal_Request),
  DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_message_member_array,  // message members
  DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_message_type_support_handle = {
  0,
  &DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_SendGoal_Request)() {
  DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_Goal)();
  if (!DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPoseName_SendGoal_Request__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPoseName_SendGoal_Response__init(message_memory);
}

void DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPoseName_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPoseName_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(controller_interface__action__DesiredPoseName_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPoseName_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(controller_interface__action__DesiredPoseName_SendGoal_Response),
  DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_message_member_array,  // message members
  DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_message_type_support_handle = {
  0,
  &DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_SendGoal_Response)() {
  DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPoseName_SendGoal_Response__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_service_members = {
  "controller_interface__action",  // service namespace
  "DesiredPoseName_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_service_type_support_handle = {
  0,
  &controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_SendGoal)() {
  if (!controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_service_type_support_handle.typesupport_identifier) {
    controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_SendGoal_Response)()->data;
  }

  return &controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.h"


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

void DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPoseName_GetResult_Request__init(message_memory);
}

void DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPoseName_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPoseName_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPoseName_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(controller_interface__action__DesiredPoseName_GetResult_Request),
  DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_message_member_array,  // message members
  DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_message_type_support_handle = {
  0,
  &DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_GetResult_Request)() {
  DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPoseName_GetResult_Request__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "controller_interface/action/desired_pose_name.h"
// Member `result`
// already included above
// #include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPoseName_GetResult_Response__init(message_memory);
}

void DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPoseName_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPoseName_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(controller_interface__action__DesiredPoseName_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPoseName_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(controller_interface__action__DesiredPoseName_GetResult_Response),
  DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_message_member_array,  // message members
  DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_message_type_support_handle = {
  0,
  &DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_GetResult_Response)() {
  DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_Result)();
  if (!DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPoseName_GetResult_Response__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_service_members = {
  "controller_interface__action",  // service namespace
  "DesiredPoseName_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_service_type_support_handle = {
  0,
  &controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_GetResult)() {
  if (!controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_service_type_support_handle.typesupport_identifier) {
    controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_GetResult_Response)()->data;
  }

  return &controller_interface__action__detail__desired_pose_name__rosidl_typesupport_introspection_c__DesiredPoseName_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__functions.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "controller_interface/action/desired_pose_name.h"
// Member `feedback`
// already included above
// #include "controller_interface/action/detail/desired_pose_name__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_interface__action__DesiredPoseName_FeedbackMessage__init(message_memory);
}

void DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_fini_function(void * message_memory)
{
  controller_interface__action__DesiredPoseName_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_interface__action__DesiredPoseName_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(controller_interface__action__DesiredPoseName_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_message_members = {
  "controller_interface__action",  // message namespace
  "DesiredPoseName_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(controller_interface__action__DesiredPoseName_FeedbackMessage),
  DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_message_member_array,  // message members
  DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_message_type_support_handle = {
  0,
  &DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_FeedbackMessage)() {
  DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPoseName_Feedback)();
  if (!DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DesiredPoseName_FeedbackMessage__rosidl_typesupport_introspection_c__DesiredPoseName_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
