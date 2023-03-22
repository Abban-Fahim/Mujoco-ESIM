// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_event_data_interface:msg/CameraEvents.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__STRUCT_H_
#define CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 't'
// Member 'p'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/CameraEvents in the package camera_event_data_interface.
typedef struct camera_event_data_interface__msg__CameraEvents
{
  rosidl_runtime_c__uint16__Sequence x;
  rosidl_runtime_c__uint16__Sequence y;
  rosidl_runtime_c__uint64__Sequence t;
  rosidl_runtime_c__int8__Sequence p;
} camera_event_data_interface__msg__CameraEvents;

// Struct for a sequence of camera_event_data_interface__msg__CameraEvents.
typedef struct camera_event_data_interface__msg__CameraEvents__Sequence
{
  camera_event_data_interface__msg__CameraEvents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_event_data_interface__msg__CameraEvents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_EVENT_DATA_INTERFACE__MSG__DETAIL__CAMERA_EVENTS__STRUCT_H_
