// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from controller_interface:action/DesiredPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "controller_interface/msg/rosidl_typesupport_c__visibility_control.h"
#include "controller_interface/action/detail/desired_pose__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DesiredPose_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPose_Goal_type_support_ids_t;

static const _DesiredPose_Goal_type_support_ids_t _DesiredPose_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DesiredPose_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPose_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPose_Goal_type_support_symbol_names_t _DesiredPose_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_interface, action, DesiredPose_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_Goal)),
  }
};

typedef struct _DesiredPose_Goal_type_support_data_t
{
  void * data[2];
} _DesiredPose_Goal_type_support_data_t;

static _DesiredPose_Goal_type_support_data_t _DesiredPose_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPose_Goal_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPose_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPose_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPose_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPose_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPose_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace controller_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, controller_interface, action, DesiredPose_Goal)() {
  return &::controller_interface::action::rosidl_typesupport_c::DesiredPose_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DesiredPose_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPose_Result_type_support_ids_t;

static const _DesiredPose_Result_type_support_ids_t _DesiredPose_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DesiredPose_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPose_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPose_Result_type_support_symbol_names_t _DesiredPose_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_interface, action, DesiredPose_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_Result)),
  }
};

typedef struct _DesiredPose_Result_type_support_data_t
{
  void * data[2];
} _DesiredPose_Result_type_support_data_t;

static _DesiredPose_Result_type_support_data_t _DesiredPose_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPose_Result_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPose_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPose_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPose_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPose_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPose_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace controller_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, controller_interface, action, DesiredPose_Result)() {
  return &::controller_interface::action::rosidl_typesupport_c::DesiredPose_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DesiredPose_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPose_Feedback_type_support_ids_t;

static const _DesiredPose_Feedback_type_support_ids_t _DesiredPose_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DesiredPose_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPose_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPose_Feedback_type_support_symbol_names_t _DesiredPose_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_interface, action, DesiredPose_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_Feedback)),
  }
};

typedef struct _DesiredPose_Feedback_type_support_data_t
{
  void * data[2];
} _DesiredPose_Feedback_type_support_data_t;

static _DesiredPose_Feedback_type_support_data_t _DesiredPose_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPose_Feedback_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPose_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPose_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPose_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPose_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPose_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace controller_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, controller_interface, action, DesiredPose_Feedback)() {
  return &::controller_interface::action::rosidl_typesupport_c::DesiredPose_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DesiredPose_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPose_SendGoal_Request_type_support_ids_t;

static const _DesiredPose_SendGoal_Request_type_support_ids_t _DesiredPose_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DesiredPose_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPose_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPose_SendGoal_Request_type_support_symbol_names_t _DesiredPose_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_interface, action, DesiredPose_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_SendGoal_Request)),
  }
};

typedef struct _DesiredPose_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DesiredPose_SendGoal_Request_type_support_data_t;

static _DesiredPose_SendGoal_Request_type_support_data_t _DesiredPose_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPose_SendGoal_Request_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPose_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPose_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPose_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPose_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPose_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace controller_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, controller_interface, action, DesiredPose_SendGoal_Request)() {
  return &::controller_interface::action::rosidl_typesupport_c::DesiredPose_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DesiredPose_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPose_SendGoal_Response_type_support_ids_t;

static const _DesiredPose_SendGoal_Response_type_support_ids_t _DesiredPose_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DesiredPose_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPose_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPose_SendGoal_Response_type_support_symbol_names_t _DesiredPose_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_interface, action, DesiredPose_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_SendGoal_Response)),
  }
};

typedef struct _DesiredPose_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DesiredPose_SendGoal_Response_type_support_data_t;

static _DesiredPose_SendGoal_Response_type_support_data_t _DesiredPose_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPose_SendGoal_Response_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPose_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPose_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPose_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPose_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPose_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace controller_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, controller_interface, action, DesiredPose_SendGoal_Response)() {
  return &::controller_interface::action::rosidl_typesupport_c::DesiredPose_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DesiredPose_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPose_SendGoal_type_support_ids_t;

static const _DesiredPose_SendGoal_type_support_ids_t _DesiredPose_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DesiredPose_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPose_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPose_SendGoal_type_support_symbol_names_t _DesiredPose_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_interface, action, DesiredPose_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_SendGoal)),
  }
};

typedef struct _DesiredPose_SendGoal_type_support_data_t
{
  void * data[2];
} _DesiredPose_SendGoal_type_support_data_t;

static _DesiredPose_SendGoal_type_support_data_t _DesiredPose_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPose_SendGoal_service_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPose_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DesiredPose_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DesiredPose_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DesiredPose_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPose_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace controller_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_controller_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, controller_interface, action, DesiredPose_SendGoal)() {
  return &::controller_interface::action::rosidl_typesupport_c::DesiredPose_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DesiredPose_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPose_GetResult_Request_type_support_ids_t;

static const _DesiredPose_GetResult_Request_type_support_ids_t _DesiredPose_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DesiredPose_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPose_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPose_GetResult_Request_type_support_symbol_names_t _DesiredPose_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_interface, action, DesiredPose_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_GetResult_Request)),
  }
};

typedef struct _DesiredPose_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DesiredPose_GetResult_Request_type_support_data_t;

static _DesiredPose_GetResult_Request_type_support_data_t _DesiredPose_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPose_GetResult_Request_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPose_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPose_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPose_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPose_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPose_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace controller_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, controller_interface, action, DesiredPose_GetResult_Request)() {
  return &::controller_interface::action::rosidl_typesupport_c::DesiredPose_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DesiredPose_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPose_GetResult_Response_type_support_ids_t;

static const _DesiredPose_GetResult_Response_type_support_ids_t _DesiredPose_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DesiredPose_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPose_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPose_GetResult_Response_type_support_symbol_names_t _DesiredPose_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_interface, action, DesiredPose_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_GetResult_Response)),
  }
};

typedef struct _DesiredPose_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DesiredPose_GetResult_Response_type_support_data_t;

static _DesiredPose_GetResult_Response_type_support_data_t _DesiredPose_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPose_GetResult_Response_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPose_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPose_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPose_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPose_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPose_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace controller_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, controller_interface, action, DesiredPose_GetResult_Response)() {
  return &::controller_interface::action::rosidl_typesupport_c::DesiredPose_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DesiredPose_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPose_GetResult_type_support_ids_t;

static const _DesiredPose_GetResult_type_support_ids_t _DesiredPose_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DesiredPose_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPose_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPose_GetResult_type_support_symbol_names_t _DesiredPose_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_interface, action, DesiredPose_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_GetResult)),
  }
};

typedef struct _DesiredPose_GetResult_type_support_data_t
{
  void * data[2];
} _DesiredPose_GetResult_type_support_data_t;

static _DesiredPose_GetResult_type_support_data_t _DesiredPose_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPose_GetResult_service_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPose_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DesiredPose_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DesiredPose_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DesiredPose_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPose_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace controller_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_controller_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, controller_interface, action, DesiredPose_GetResult)() {
  return &::controller_interface::action::rosidl_typesupport_c::DesiredPose_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "controller_interface/action/detail/desired_pose__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _DesiredPose_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPose_FeedbackMessage_type_support_ids_t;

static const _DesiredPose_FeedbackMessage_type_support_ids_t _DesiredPose_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DesiredPose_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPose_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPose_FeedbackMessage_type_support_symbol_names_t _DesiredPose_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_interface, action, DesiredPose_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_interface, action, DesiredPose_FeedbackMessage)),
  }
};

typedef struct _DesiredPose_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DesiredPose_FeedbackMessage_type_support_data_t;

static _DesiredPose_FeedbackMessage_type_support_data_t _DesiredPose_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPose_FeedbackMessage_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPose_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPose_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPose_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPose_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPose_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace controller_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_controller_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, controller_interface, action, DesiredPose_FeedbackMessage)() {
  return &::controller_interface::action::rosidl_typesupport_c::DesiredPose_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "controller_interface/action/desired_pose.h"
#include "controller_interface/action/detail/desired_pose__type_support.h"

static rosidl_action_type_support_t _controller_interface__action__DesiredPose__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_controller_interface
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, controller_interface, action, DesiredPose)()
{
  // Thread-safe by always writing the same values to the static struct
  _controller_interface__action__DesiredPose__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, controller_interface, action, DesiredPose_SendGoal)();
  _controller_interface__action__DesiredPose__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, controller_interface, action, DesiredPose_GetResult)();
  _controller_interface__action__DesiredPose__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _controller_interface__action__DesiredPose__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, controller_interface, action, DesiredPose_FeedbackMessage)();
  _controller_interface__action__DesiredPose__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_controller_interface__action__DesiredPose__typesupport_c;
}

#ifdef __cplusplus
}
#endif
