// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_interface:action/DesiredPoseName.idl
// generated code does not contain a copyright notice
#include "controller_interface/action/detail/desired_pose_name__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `des_pose_name`
#include "rosidl_runtime_c/string_functions.h"

bool
controller_interface__action__DesiredPoseName_Goal__init(controller_interface__action__DesiredPoseName_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // des_pose_name
  if (!rosidl_runtime_c__String__init(&msg->des_pose_name)) {
    controller_interface__action__DesiredPoseName_Goal__fini(msg);
    return false;
  }
  return true;
}

void
controller_interface__action__DesiredPoseName_Goal__fini(controller_interface__action__DesiredPoseName_Goal * msg)
{
  if (!msg) {
    return;
  }
  // des_pose_name
  rosidl_runtime_c__String__fini(&msg->des_pose_name);
}

bool
controller_interface__action__DesiredPoseName_Goal__are_equal(const controller_interface__action__DesiredPoseName_Goal * lhs, const controller_interface__action__DesiredPoseName_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // des_pose_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->des_pose_name), &(rhs->des_pose_name)))
  {
    return false;
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_Goal__copy(
  const controller_interface__action__DesiredPoseName_Goal * input,
  controller_interface__action__DesiredPoseName_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // des_pose_name
  if (!rosidl_runtime_c__String__copy(
      &(input->des_pose_name), &(output->des_pose_name)))
  {
    return false;
  }
  return true;
}

controller_interface__action__DesiredPoseName_Goal *
controller_interface__action__DesiredPoseName_Goal__create()
{
  controller_interface__action__DesiredPoseName_Goal * msg = (controller_interface__action__DesiredPoseName_Goal *)malloc(sizeof(controller_interface__action__DesiredPoseName_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interface__action__DesiredPoseName_Goal));
  bool success = controller_interface__action__DesiredPoseName_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_interface__action__DesiredPoseName_Goal__destroy(controller_interface__action__DesiredPoseName_Goal * msg)
{
  if (msg) {
    controller_interface__action__DesiredPoseName_Goal__fini(msg);
  }
  free(msg);
}


bool
controller_interface__action__DesiredPoseName_Goal__Sequence__init(controller_interface__action__DesiredPoseName_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_interface__action__DesiredPoseName_Goal * data = NULL;
  if (size) {
    data = (controller_interface__action__DesiredPoseName_Goal *)calloc(size, sizeof(controller_interface__action__DesiredPoseName_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interface__action__DesiredPoseName_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interface__action__DesiredPoseName_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
controller_interface__action__DesiredPoseName_Goal__Sequence__fini(controller_interface__action__DesiredPoseName_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_interface__action__DesiredPoseName_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

controller_interface__action__DesiredPoseName_Goal__Sequence *
controller_interface__action__DesiredPoseName_Goal__Sequence__create(size_t size)
{
  controller_interface__action__DesiredPoseName_Goal__Sequence * array = (controller_interface__action__DesiredPoseName_Goal__Sequence *)malloc(sizeof(controller_interface__action__DesiredPoseName_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_interface__action__DesiredPoseName_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_interface__action__DesiredPoseName_Goal__Sequence__destroy(controller_interface__action__DesiredPoseName_Goal__Sequence * array)
{
  if (array) {
    controller_interface__action__DesiredPoseName_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
controller_interface__action__DesiredPoseName_Goal__Sequence__are_equal(const controller_interface__action__DesiredPoseName_Goal__Sequence * lhs, const controller_interface__action__DesiredPoseName_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_Goal__Sequence__copy(
  const controller_interface__action__DesiredPoseName_Goal__Sequence * input,
  controller_interface__action__DesiredPoseName_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interface__action__DesiredPoseName_Goal);
    controller_interface__action__DesiredPoseName_Goal * data =
      (controller_interface__action__DesiredPoseName_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interface__action__DesiredPoseName_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          controller_interface__action__DesiredPoseName_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
controller_interface__action__DesiredPoseName_Result__init(controller_interface__action__DesiredPoseName_Result * msg)
{
  if (!msg) {
    return false;
  }
  // error
  return true;
}

void
controller_interface__action__DesiredPoseName_Result__fini(controller_interface__action__DesiredPoseName_Result * msg)
{
  if (!msg) {
    return;
  }
  // error
}

bool
controller_interface__action__DesiredPoseName_Result__are_equal(const controller_interface__action__DesiredPoseName_Result * lhs, const controller_interface__action__DesiredPoseName_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_Result__copy(
  const controller_interface__action__DesiredPoseName_Result * input,
  controller_interface__action__DesiredPoseName_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // error
  output->error = input->error;
  return true;
}

controller_interface__action__DesiredPoseName_Result *
controller_interface__action__DesiredPoseName_Result__create()
{
  controller_interface__action__DesiredPoseName_Result * msg = (controller_interface__action__DesiredPoseName_Result *)malloc(sizeof(controller_interface__action__DesiredPoseName_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interface__action__DesiredPoseName_Result));
  bool success = controller_interface__action__DesiredPoseName_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_interface__action__DesiredPoseName_Result__destroy(controller_interface__action__DesiredPoseName_Result * msg)
{
  if (msg) {
    controller_interface__action__DesiredPoseName_Result__fini(msg);
  }
  free(msg);
}


bool
controller_interface__action__DesiredPoseName_Result__Sequence__init(controller_interface__action__DesiredPoseName_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_interface__action__DesiredPoseName_Result * data = NULL;
  if (size) {
    data = (controller_interface__action__DesiredPoseName_Result *)calloc(size, sizeof(controller_interface__action__DesiredPoseName_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interface__action__DesiredPoseName_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interface__action__DesiredPoseName_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
controller_interface__action__DesiredPoseName_Result__Sequence__fini(controller_interface__action__DesiredPoseName_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_interface__action__DesiredPoseName_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

controller_interface__action__DesiredPoseName_Result__Sequence *
controller_interface__action__DesiredPoseName_Result__Sequence__create(size_t size)
{
  controller_interface__action__DesiredPoseName_Result__Sequence * array = (controller_interface__action__DesiredPoseName_Result__Sequence *)malloc(sizeof(controller_interface__action__DesiredPoseName_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_interface__action__DesiredPoseName_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_interface__action__DesiredPoseName_Result__Sequence__destroy(controller_interface__action__DesiredPoseName_Result__Sequence * array)
{
  if (array) {
    controller_interface__action__DesiredPoseName_Result__Sequence__fini(array);
  }
  free(array);
}

bool
controller_interface__action__DesiredPoseName_Result__Sequence__are_equal(const controller_interface__action__DesiredPoseName_Result__Sequence * lhs, const controller_interface__action__DesiredPoseName_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_Result__Sequence__copy(
  const controller_interface__action__DesiredPoseName_Result__Sequence * input,
  controller_interface__action__DesiredPoseName_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interface__action__DesiredPoseName_Result);
    controller_interface__action__DesiredPoseName_Result * data =
      (controller_interface__action__DesiredPoseName_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interface__action__DesiredPoseName_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          controller_interface__action__DesiredPoseName_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
controller_interface__action__DesiredPoseName_Feedback__init(controller_interface__action__DesiredPoseName_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback_error
  return true;
}

void
controller_interface__action__DesiredPoseName_Feedback__fini(controller_interface__action__DesiredPoseName_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback_error
}

bool
controller_interface__action__DesiredPoseName_Feedback__are_equal(const controller_interface__action__DesiredPoseName_Feedback * lhs, const controller_interface__action__DesiredPoseName_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback_error
  if (lhs->feedback_error != rhs->feedback_error) {
    return false;
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_Feedback__copy(
  const controller_interface__action__DesiredPoseName_Feedback * input,
  controller_interface__action__DesiredPoseName_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback_error
  output->feedback_error = input->feedback_error;
  return true;
}

controller_interface__action__DesiredPoseName_Feedback *
controller_interface__action__DesiredPoseName_Feedback__create()
{
  controller_interface__action__DesiredPoseName_Feedback * msg = (controller_interface__action__DesiredPoseName_Feedback *)malloc(sizeof(controller_interface__action__DesiredPoseName_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interface__action__DesiredPoseName_Feedback));
  bool success = controller_interface__action__DesiredPoseName_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_interface__action__DesiredPoseName_Feedback__destroy(controller_interface__action__DesiredPoseName_Feedback * msg)
{
  if (msg) {
    controller_interface__action__DesiredPoseName_Feedback__fini(msg);
  }
  free(msg);
}


bool
controller_interface__action__DesiredPoseName_Feedback__Sequence__init(controller_interface__action__DesiredPoseName_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_interface__action__DesiredPoseName_Feedback * data = NULL;
  if (size) {
    data = (controller_interface__action__DesiredPoseName_Feedback *)calloc(size, sizeof(controller_interface__action__DesiredPoseName_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interface__action__DesiredPoseName_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interface__action__DesiredPoseName_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
controller_interface__action__DesiredPoseName_Feedback__Sequence__fini(controller_interface__action__DesiredPoseName_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_interface__action__DesiredPoseName_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

controller_interface__action__DesiredPoseName_Feedback__Sequence *
controller_interface__action__DesiredPoseName_Feedback__Sequence__create(size_t size)
{
  controller_interface__action__DesiredPoseName_Feedback__Sequence * array = (controller_interface__action__DesiredPoseName_Feedback__Sequence *)malloc(sizeof(controller_interface__action__DesiredPoseName_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_interface__action__DesiredPoseName_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_interface__action__DesiredPoseName_Feedback__Sequence__destroy(controller_interface__action__DesiredPoseName_Feedback__Sequence * array)
{
  if (array) {
    controller_interface__action__DesiredPoseName_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
controller_interface__action__DesiredPoseName_Feedback__Sequence__are_equal(const controller_interface__action__DesiredPoseName_Feedback__Sequence * lhs, const controller_interface__action__DesiredPoseName_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_Feedback__Sequence__copy(
  const controller_interface__action__DesiredPoseName_Feedback__Sequence * input,
  controller_interface__action__DesiredPoseName_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interface__action__DesiredPoseName_Feedback);
    controller_interface__action__DesiredPoseName_Feedback * data =
      (controller_interface__action__DesiredPoseName_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interface__action__DesiredPoseName_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          controller_interface__action__DesiredPoseName_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "controller_interface/action/detail/desired_pose_name__functions.h"

bool
controller_interface__action__DesiredPoseName_SendGoal_Request__init(controller_interface__action__DesiredPoseName_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    controller_interface__action__DesiredPoseName_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!controller_interface__action__DesiredPoseName_Goal__init(&msg->goal)) {
    controller_interface__action__DesiredPoseName_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
controller_interface__action__DesiredPoseName_SendGoal_Request__fini(controller_interface__action__DesiredPoseName_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  controller_interface__action__DesiredPoseName_Goal__fini(&msg->goal);
}

bool
controller_interface__action__DesiredPoseName_SendGoal_Request__are_equal(const controller_interface__action__DesiredPoseName_SendGoal_Request * lhs, const controller_interface__action__DesiredPoseName_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!controller_interface__action__DesiredPoseName_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_SendGoal_Request__copy(
  const controller_interface__action__DesiredPoseName_SendGoal_Request * input,
  controller_interface__action__DesiredPoseName_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!controller_interface__action__DesiredPoseName_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

controller_interface__action__DesiredPoseName_SendGoal_Request *
controller_interface__action__DesiredPoseName_SendGoal_Request__create()
{
  controller_interface__action__DesiredPoseName_SendGoal_Request * msg = (controller_interface__action__DesiredPoseName_SendGoal_Request *)malloc(sizeof(controller_interface__action__DesiredPoseName_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interface__action__DesiredPoseName_SendGoal_Request));
  bool success = controller_interface__action__DesiredPoseName_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_interface__action__DesiredPoseName_SendGoal_Request__destroy(controller_interface__action__DesiredPoseName_SendGoal_Request * msg)
{
  if (msg) {
    controller_interface__action__DesiredPoseName_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence__init(controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_interface__action__DesiredPoseName_SendGoal_Request * data = NULL;
  if (size) {
    data = (controller_interface__action__DesiredPoseName_SendGoal_Request *)calloc(size, sizeof(controller_interface__action__DesiredPoseName_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interface__action__DesiredPoseName_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interface__action__DesiredPoseName_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence__fini(controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_interface__action__DesiredPoseName_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence *
controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence__create(size_t size)
{
  controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence * array = (controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence *)malloc(sizeof(controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence__destroy(controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence * array)
{
  if (array) {
    controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence__are_equal(const controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence * lhs, const controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence__copy(
  const controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence * input,
  controller_interface__action__DesiredPoseName_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interface__action__DesiredPoseName_SendGoal_Request);
    controller_interface__action__DesiredPoseName_SendGoal_Request * data =
      (controller_interface__action__DesiredPoseName_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interface__action__DesiredPoseName_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          controller_interface__action__DesiredPoseName_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
controller_interface__action__DesiredPoseName_SendGoal_Response__init(controller_interface__action__DesiredPoseName_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    controller_interface__action__DesiredPoseName_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
controller_interface__action__DesiredPoseName_SendGoal_Response__fini(controller_interface__action__DesiredPoseName_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
controller_interface__action__DesiredPoseName_SendGoal_Response__are_equal(const controller_interface__action__DesiredPoseName_SendGoal_Response * lhs, const controller_interface__action__DesiredPoseName_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_SendGoal_Response__copy(
  const controller_interface__action__DesiredPoseName_SendGoal_Response * input,
  controller_interface__action__DesiredPoseName_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

controller_interface__action__DesiredPoseName_SendGoal_Response *
controller_interface__action__DesiredPoseName_SendGoal_Response__create()
{
  controller_interface__action__DesiredPoseName_SendGoal_Response * msg = (controller_interface__action__DesiredPoseName_SendGoal_Response *)malloc(sizeof(controller_interface__action__DesiredPoseName_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interface__action__DesiredPoseName_SendGoal_Response));
  bool success = controller_interface__action__DesiredPoseName_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_interface__action__DesiredPoseName_SendGoal_Response__destroy(controller_interface__action__DesiredPoseName_SendGoal_Response * msg)
{
  if (msg) {
    controller_interface__action__DesiredPoseName_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence__init(controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_interface__action__DesiredPoseName_SendGoal_Response * data = NULL;
  if (size) {
    data = (controller_interface__action__DesiredPoseName_SendGoal_Response *)calloc(size, sizeof(controller_interface__action__DesiredPoseName_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interface__action__DesiredPoseName_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interface__action__DesiredPoseName_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence__fini(controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_interface__action__DesiredPoseName_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence *
controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence__create(size_t size)
{
  controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence * array = (controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence *)malloc(sizeof(controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence__destroy(controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence * array)
{
  if (array) {
    controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence__are_equal(const controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence * lhs, const controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence__copy(
  const controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence * input,
  controller_interface__action__DesiredPoseName_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interface__action__DesiredPoseName_SendGoal_Response);
    controller_interface__action__DesiredPoseName_SendGoal_Response * data =
      (controller_interface__action__DesiredPoseName_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interface__action__DesiredPoseName_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          controller_interface__action__DesiredPoseName_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
controller_interface__action__DesiredPoseName_GetResult_Request__init(controller_interface__action__DesiredPoseName_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    controller_interface__action__DesiredPoseName_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
controller_interface__action__DesiredPoseName_GetResult_Request__fini(controller_interface__action__DesiredPoseName_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
controller_interface__action__DesiredPoseName_GetResult_Request__are_equal(const controller_interface__action__DesiredPoseName_GetResult_Request * lhs, const controller_interface__action__DesiredPoseName_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_GetResult_Request__copy(
  const controller_interface__action__DesiredPoseName_GetResult_Request * input,
  controller_interface__action__DesiredPoseName_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

controller_interface__action__DesiredPoseName_GetResult_Request *
controller_interface__action__DesiredPoseName_GetResult_Request__create()
{
  controller_interface__action__DesiredPoseName_GetResult_Request * msg = (controller_interface__action__DesiredPoseName_GetResult_Request *)malloc(sizeof(controller_interface__action__DesiredPoseName_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interface__action__DesiredPoseName_GetResult_Request));
  bool success = controller_interface__action__DesiredPoseName_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_interface__action__DesiredPoseName_GetResult_Request__destroy(controller_interface__action__DesiredPoseName_GetResult_Request * msg)
{
  if (msg) {
    controller_interface__action__DesiredPoseName_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
controller_interface__action__DesiredPoseName_GetResult_Request__Sequence__init(controller_interface__action__DesiredPoseName_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_interface__action__DesiredPoseName_GetResult_Request * data = NULL;
  if (size) {
    data = (controller_interface__action__DesiredPoseName_GetResult_Request *)calloc(size, sizeof(controller_interface__action__DesiredPoseName_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interface__action__DesiredPoseName_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interface__action__DesiredPoseName_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
controller_interface__action__DesiredPoseName_GetResult_Request__Sequence__fini(controller_interface__action__DesiredPoseName_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_interface__action__DesiredPoseName_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

controller_interface__action__DesiredPoseName_GetResult_Request__Sequence *
controller_interface__action__DesiredPoseName_GetResult_Request__Sequence__create(size_t size)
{
  controller_interface__action__DesiredPoseName_GetResult_Request__Sequence * array = (controller_interface__action__DesiredPoseName_GetResult_Request__Sequence *)malloc(sizeof(controller_interface__action__DesiredPoseName_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_interface__action__DesiredPoseName_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_interface__action__DesiredPoseName_GetResult_Request__Sequence__destroy(controller_interface__action__DesiredPoseName_GetResult_Request__Sequence * array)
{
  if (array) {
    controller_interface__action__DesiredPoseName_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
controller_interface__action__DesiredPoseName_GetResult_Request__Sequence__are_equal(const controller_interface__action__DesiredPoseName_GetResult_Request__Sequence * lhs, const controller_interface__action__DesiredPoseName_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_GetResult_Request__Sequence__copy(
  const controller_interface__action__DesiredPoseName_GetResult_Request__Sequence * input,
  controller_interface__action__DesiredPoseName_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interface__action__DesiredPoseName_GetResult_Request);
    controller_interface__action__DesiredPoseName_GetResult_Request * data =
      (controller_interface__action__DesiredPoseName_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interface__action__DesiredPoseName_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          controller_interface__action__DesiredPoseName_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "controller_interface/action/detail/desired_pose_name__functions.h"

bool
controller_interface__action__DesiredPoseName_GetResult_Response__init(controller_interface__action__DesiredPoseName_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!controller_interface__action__DesiredPoseName_Result__init(&msg->result)) {
    controller_interface__action__DesiredPoseName_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
controller_interface__action__DesiredPoseName_GetResult_Response__fini(controller_interface__action__DesiredPoseName_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  controller_interface__action__DesiredPoseName_Result__fini(&msg->result);
}

bool
controller_interface__action__DesiredPoseName_GetResult_Response__are_equal(const controller_interface__action__DesiredPoseName_GetResult_Response * lhs, const controller_interface__action__DesiredPoseName_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!controller_interface__action__DesiredPoseName_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_GetResult_Response__copy(
  const controller_interface__action__DesiredPoseName_GetResult_Response * input,
  controller_interface__action__DesiredPoseName_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!controller_interface__action__DesiredPoseName_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

controller_interface__action__DesiredPoseName_GetResult_Response *
controller_interface__action__DesiredPoseName_GetResult_Response__create()
{
  controller_interface__action__DesiredPoseName_GetResult_Response * msg = (controller_interface__action__DesiredPoseName_GetResult_Response *)malloc(sizeof(controller_interface__action__DesiredPoseName_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interface__action__DesiredPoseName_GetResult_Response));
  bool success = controller_interface__action__DesiredPoseName_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_interface__action__DesiredPoseName_GetResult_Response__destroy(controller_interface__action__DesiredPoseName_GetResult_Response * msg)
{
  if (msg) {
    controller_interface__action__DesiredPoseName_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
controller_interface__action__DesiredPoseName_GetResult_Response__Sequence__init(controller_interface__action__DesiredPoseName_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_interface__action__DesiredPoseName_GetResult_Response * data = NULL;
  if (size) {
    data = (controller_interface__action__DesiredPoseName_GetResult_Response *)calloc(size, sizeof(controller_interface__action__DesiredPoseName_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interface__action__DesiredPoseName_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interface__action__DesiredPoseName_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
controller_interface__action__DesiredPoseName_GetResult_Response__Sequence__fini(controller_interface__action__DesiredPoseName_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_interface__action__DesiredPoseName_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

controller_interface__action__DesiredPoseName_GetResult_Response__Sequence *
controller_interface__action__DesiredPoseName_GetResult_Response__Sequence__create(size_t size)
{
  controller_interface__action__DesiredPoseName_GetResult_Response__Sequence * array = (controller_interface__action__DesiredPoseName_GetResult_Response__Sequence *)malloc(sizeof(controller_interface__action__DesiredPoseName_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_interface__action__DesiredPoseName_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_interface__action__DesiredPoseName_GetResult_Response__Sequence__destroy(controller_interface__action__DesiredPoseName_GetResult_Response__Sequence * array)
{
  if (array) {
    controller_interface__action__DesiredPoseName_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
controller_interface__action__DesiredPoseName_GetResult_Response__Sequence__are_equal(const controller_interface__action__DesiredPoseName_GetResult_Response__Sequence * lhs, const controller_interface__action__DesiredPoseName_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_GetResult_Response__Sequence__copy(
  const controller_interface__action__DesiredPoseName_GetResult_Response__Sequence * input,
  controller_interface__action__DesiredPoseName_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interface__action__DesiredPoseName_GetResult_Response);
    controller_interface__action__DesiredPoseName_GetResult_Response * data =
      (controller_interface__action__DesiredPoseName_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interface__action__DesiredPoseName_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          controller_interface__action__DesiredPoseName_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "controller_interface/action/detail/desired_pose_name__functions.h"

bool
controller_interface__action__DesiredPoseName_FeedbackMessage__init(controller_interface__action__DesiredPoseName_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    controller_interface__action__DesiredPoseName_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!controller_interface__action__DesiredPoseName_Feedback__init(&msg->feedback)) {
    controller_interface__action__DesiredPoseName_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
controller_interface__action__DesiredPoseName_FeedbackMessage__fini(controller_interface__action__DesiredPoseName_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  controller_interface__action__DesiredPoseName_Feedback__fini(&msg->feedback);
}

bool
controller_interface__action__DesiredPoseName_FeedbackMessage__are_equal(const controller_interface__action__DesiredPoseName_FeedbackMessage * lhs, const controller_interface__action__DesiredPoseName_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!controller_interface__action__DesiredPoseName_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_FeedbackMessage__copy(
  const controller_interface__action__DesiredPoseName_FeedbackMessage * input,
  controller_interface__action__DesiredPoseName_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!controller_interface__action__DesiredPoseName_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

controller_interface__action__DesiredPoseName_FeedbackMessage *
controller_interface__action__DesiredPoseName_FeedbackMessage__create()
{
  controller_interface__action__DesiredPoseName_FeedbackMessage * msg = (controller_interface__action__DesiredPoseName_FeedbackMessage *)malloc(sizeof(controller_interface__action__DesiredPoseName_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_interface__action__DesiredPoseName_FeedbackMessage));
  bool success = controller_interface__action__DesiredPoseName_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
controller_interface__action__DesiredPoseName_FeedbackMessage__destroy(controller_interface__action__DesiredPoseName_FeedbackMessage * msg)
{
  if (msg) {
    controller_interface__action__DesiredPoseName_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence__init(controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  controller_interface__action__DesiredPoseName_FeedbackMessage * data = NULL;
  if (size) {
    data = (controller_interface__action__DesiredPoseName_FeedbackMessage *)calloc(size, sizeof(controller_interface__action__DesiredPoseName_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_interface__action__DesiredPoseName_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_interface__action__DesiredPoseName_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence__fini(controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      controller_interface__action__DesiredPoseName_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence *
controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence__create(size_t size)
{
  controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence * array = (controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence *)malloc(sizeof(controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence__destroy(controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence * array)
{
  if (array) {
    controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence__are_equal(const controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence * lhs, const controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence__copy(
  const controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence * input,
  controller_interface__action__DesiredPoseName_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_interface__action__DesiredPoseName_FeedbackMessage);
    controller_interface__action__DesiredPoseName_FeedbackMessage * data =
      (controller_interface__action__DesiredPoseName_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_interface__action__DesiredPoseName_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          controller_interface__action__DesiredPoseName_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_interface__action__DesiredPoseName_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
