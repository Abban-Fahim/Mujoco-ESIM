// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_event_data_interface:msg/CameraEvents.idl
// generated code does not contain a copyright notice
#include "camera_event_data_interface/msg/detail/camera_events__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `x`
// Member `y`
// Member `t`
// Member `p`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
camera_event_data_interface__msg__CameraEvents__init(camera_event_data_interface__msg__CameraEvents * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->x, 0)) {
    camera_event_data_interface__msg__CameraEvents__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->y, 0)) {
    camera_event_data_interface__msg__CameraEvents__fini(msg);
    return false;
  }
  // t
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->t, 0)) {
    camera_event_data_interface__msg__CameraEvents__fini(msg);
    return false;
  }
  // p
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->p, 0)) {
    camera_event_data_interface__msg__CameraEvents__fini(msg);
    return false;
  }
  return true;
}

void
camera_event_data_interface__msg__CameraEvents__fini(camera_event_data_interface__msg__CameraEvents * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__uint16__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__uint16__Sequence__fini(&msg->y);
  // t
  rosidl_runtime_c__uint64__Sequence__fini(&msg->t);
  // p
  rosidl_runtime_c__int8__Sequence__fini(&msg->p);
}

bool
camera_event_data_interface__msg__CameraEvents__are_equal(const camera_event_data_interface__msg__CameraEvents * lhs, const camera_event_data_interface__msg__CameraEvents * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // t
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->t), &(rhs->t)))
  {
    return false;
  }
  // p
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->p), &(rhs->p)))
  {
    return false;
  }
  return true;
}

bool
camera_event_data_interface__msg__CameraEvents__copy(
  const camera_event_data_interface__msg__CameraEvents * input,
  camera_event_data_interface__msg__CameraEvents * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // t
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->t), &(output->t)))
  {
    return false;
  }
  // p
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->p), &(output->p)))
  {
    return false;
  }
  return true;
}

camera_event_data_interface__msg__CameraEvents *
camera_event_data_interface__msg__CameraEvents__create()
{
  camera_event_data_interface__msg__CameraEvents * msg = (camera_event_data_interface__msg__CameraEvents *)malloc(sizeof(camera_event_data_interface__msg__CameraEvents));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_event_data_interface__msg__CameraEvents));
  bool success = camera_event_data_interface__msg__CameraEvents__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
camera_event_data_interface__msg__CameraEvents__destroy(camera_event_data_interface__msg__CameraEvents * msg)
{
  if (msg) {
    camera_event_data_interface__msg__CameraEvents__fini(msg);
  }
  free(msg);
}


bool
camera_event_data_interface__msg__CameraEvents__Sequence__init(camera_event_data_interface__msg__CameraEvents__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  camera_event_data_interface__msg__CameraEvents * data = NULL;
  if (size) {
    data = (camera_event_data_interface__msg__CameraEvents *)calloc(size, sizeof(camera_event_data_interface__msg__CameraEvents));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_event_data_interface__msg__CameraEvents__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_event_data_interface__msg__CameraEvents__fini(&data[i - 1]);
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
camera_event_data_interface__msg__CameraEvents__Sequence__fini(camera_event_data_interface__msg__CameraEvents__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      camera_event_data_interface__msg__CameraEvents__fini(&array->data[i]);
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

camera_event_data_interface__msg__CameraEvents__Sequence *
camera_event_data_interface__msg__CameraEvents__Sequence__create(size_t size)
{
  camera_event_data_interface__msg__CameraEvents__Sequence * array = (camera_event_data_interface__msg__CameraEvents__Sequence *)malloc(sizeof(camera_event_data_interface__msg__CameraEvents__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = camera_event_data_interface__msg__CameraEvents__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
camera_event_data_interface__msg__CameraEvents__Sequence__destroy(camera_event_data_interface__msg__CameraEvents__Sequence * array)
{
  if (array) {
    camera_event_data_interface__msg__CameraEvents__Sequence__fini(array);
  }
  free(array);
}

bool
camera_event_data_interface__msg__CameraEvents__Sequence__are_equal(const camera_event_data_interface__msg__CameraEvents__Sequence * lhs, const camera_event_data_interface__msg__CameraEvents__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_event_data_interface__msg__CameraEvents__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_event_data_interface__msg__CameraEvents__Sequence__copy(
  const camera_event_data_interface__msg__CameraEvents__Sequence * input,
  camera_event_data_interface__msg__CameraEvents__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_event_data_interface__msg__CameraEvents);
    camera_event_data_interface__msg__CameraEvents * data =
      (camera_event_data_interface__msg__CameraEvents *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_event_data_interface__msg__CameraEvents__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          camera_event_data_interface__msg__CameraEvents__fini(&data[i]);
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
    if (!camera_event_data_interface__msg__CameraEvents__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
