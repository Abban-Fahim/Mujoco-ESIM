// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_interface:action/Saccades.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_INTERFACE__ACTION__DETAIL__SACCADES__STRUCT_H_
#define CONTROLLER_INTERFACE__ACTION__DETAIL__SACCADES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Saccades in the package controller_interface.
typedef struct controller_interface__action__Saccades_Goal
{
  float duration;
} controller_interface__action__Saccades_Goal;

// Struct for a sequence of controller_interface__action__Saccades_Goal.
typedef struct controller_interface__action__Saccades_Goal__Sequence
{
  controller_interface__action__Saccades_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interface__action__Saccades_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Saccades in the package controller_interface.
typedef struct controller_interface__action__Saccades_Result
{
  float time_spent;
} controller_interface__action__Saccades_Result;

// Struct for a sequence of controller_interface__action__Saccades_Result.
typedef struct controller_interface__action__Saccades_Result__Sequence
{
  controller_interface__action__Saccades_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interface__action__Saccades_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Saccades in the package controller_interface.
typedef struct controller_interface__action__Saccades_Feedback
{
  float time_left;
} controller_interface__action__Saccades_Feedback;

// Struct for a sequence of controller_interface__action__Saccades_Feedback.
typedef struct controller_interface__action__Saccades_Feedback__Sequence
{
  controller_interface__action__Saccades_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interface__action__Saccades_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "controller_interface/action/detail/saccades__struct.h"

// Struct defined in action/Saccades in the package controller_interface.
typedef struct controller_interface__action__Saccades_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  controller_interface__action__Saccades_Goal goal;
} controller_interface__action__Saccades_SendGoal_Request;

// Struct for a sequence of controller_interface__action__Saccades_SendGoal_Request.
typedef struct controller_interface__action__Saccades_SendGoal_Request__Sequence
{
  controller_interface__action__Saccades_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interface__action__Saccades_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Saccades in the package controller_interface.
typedef struct controller_interface__action__Saccades_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} controller_interface__action__Saccades_SendGoal_Response;

// Struct for a sequence of controller_interface__action__Saccades_SendGoal_Response.
typedef struct controller_interface__action__Saccades_SendGoal_Response__Sequence
{
  controller_interface__action__Saccades_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interface__action__Saccades_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Saccades in the package controller_interface.
typedef struct controller_interface__action__Saccades_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} controller_interface__action__Saccades_GetResult_Request;

// Struct for a sequence of controller_interface__action__Saccades_GetResult_Request.
typedef struct controller_interface__action__Saccades_GetResult_Request__Sequence
{
  controller_interface__action__Saccades_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interface__action__Saccades_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "controller_interface/action/detail/saccades__struct.h"

// Struct defined in action/Saccades in the package controller_interface.
typedef struct controller_interface__action__Saccades_GetResult_Response
{
  int8_t status;
  controller_interface__action__Saccades_Result result;
} controller_interface__action__Saccades_GetResult_Response;

// Struct for a sequence of controller_interface__action__Saccades_GetResult_Response.
typedef struct controller_interface__action__Saccades_GetResult_Response__Sequence
{
  controller_interface__action__Saccades_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interface__action__Saccades_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "controller_interface/action/detail/saccades__struct.h"

// Struct defined in action/Saccades in the package controller_interface.
typedef struct controller_interface__action__Saccades_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  controller_interface__action__Saccades_Feedback feedback;
} controller_interface__action__Saccades_FeedbackMessage;

// Struct for a sequence of controller_interface__action__Saccades_FeedbackMessage.
typedef struct controller_interface__action__Saccades_FeedbackMessage__Sequence
{
  controller_interface__action__Saccades_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_interface__action__Saccades_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_INTERFACE__ACTION__DETAIL__SACCADES__STRUCT_H_
