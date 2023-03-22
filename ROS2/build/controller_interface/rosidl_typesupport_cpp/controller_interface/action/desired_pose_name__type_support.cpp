// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from controller_interface:action/DesiredPoseName.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "controller_interface/action/detail/desired_pose_name__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DesiredPoseName_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPoseName_Goal_type_support_ids_t;

static const _DesiredPoseName_Goal_type_support_ids_t _DesiredPoseName_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DesiredPoseName_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPoseName_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPoseName_Goal_type_support_symbol_names_t _DesiredPoseName_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_interface, action, DesiredPoseName_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_interface, action, DesiredPoseName_Goal)),
  }
};

typedef struct _DesiredPoseName_Goal_type_support_data_t
{
  void * data[2];
} _DesiredPoseName_Goal_type_support_data_t;

static _DesiredPoseName_Goal_type_support_data_t _DesiredPoseName_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPoseName_Goal_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPoseName_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPoseName_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPoseName_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPoseName_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPoseName_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace controller_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_interface::action::DesiredPoseName_Goal>()
{
  return &::controller_interface::action::rosidl_typesupport_cpp::DesiredPoseName_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_interface, action, DesiredPoseName_Goal)() {
  return get_message_type_support_handle<controller_interface::action::DesiredPoseName_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DesiredPoseName_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPoseName_Result_type_support_ids_t;

static const _DesiredPoseName_Result_type_support_ids_t _DesiredPoseName_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DesiredPoseName_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPoseName_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPoseName_Result_type_support_symbol_names_t _DesiredPoseName_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_interface, action, DesiredPoseName_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_interface, action, DesiredPoseName_Result)),
  }
};

typedef struct _DesiredPoseName_Result_type_support_data_t
{
  void * data[2];
} _DesiredPoseName_Result_type_support_data_t;

static _DesiredPoseName_Result_type_support_data_t _DesiredPoseName_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPoseName_Result_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPoseName_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPoseName_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPoseName_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPoseName_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPoseName_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace controller_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_interface::action::DesiredPoseName_Result>()
{
  return &::controller_interface::action::rosidl_typesupport_cpp::DesiredPoseName_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_interface, action, DesiredPoseName_Result)() {
  return get_message_type_support_handle<controller_interface::action::DesiredPoseName_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DesiredPoseName_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPoseName_Feedback_type_support_ids_t;

static const _DesiredPoseName_Feedback_type_support_ids_t _DesiredPoseName_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DesiredPoseName_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPoseName_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPoseName_Feedback_type_support_symbol_names_t _DesiredPoseName_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_interface, action, DesiredPoseName_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_interface, action, DesiredPoseName_Feedback)),
  }
};

typedef struct _DesiredPoseName_Feedback_type_support_data_t
{
  void * data[2];
} _DesiredPoseName_Feedback_type_support_data_t;

static _DesiredPoseName_Feedback_type_support_data_t _DesiredPoseName_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPoseName_Feedback_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPoseName_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPoseName_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPoseName_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPoseName_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPoseName_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace controller_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_interface::action::DesiredPoseName_Feedback>()
{
  return &::controller_interface::action::rosidl_typesupport_cpp::DesiredPoseName_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_interface, action, DesiredPoseName_Feedback)() {
  return get_message_type_support_handle<controller_interface::action::DesiredPoseName_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DesiredPoseName_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPoseName_SendGoal_Request_type_support_ids_t;

static const _DesiredPoseName_SendGoal_Request_type_support_ids_t _DesiredPoseName_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DesiredPoseName_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPoseName_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPoseName_SendGoal_Request_type_support_symbol_names_t _DesiredPoseName_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_interface, action, DesiredPoseName_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_interface, action, DesiredPoseName_SendGoal_Request)),
  }
};

typedef struct _DesiredPoseName_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DesiredPoseName_SendGoal_Request_type_support_data_t;

static _DesiredPoseName_SendGoal_Request_type_support_data_t _DesiredPoseName_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPoseName_SendGoal_Request_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPoseName_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPoseName_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPoseName_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPoseName_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPoseName_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace controller_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_interface::action::DesiredPoseName_SendGoal_Request>()
{
  return &::controller_interface::action::rosidl_typesupport_cpp::DesiredPoseName_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_interface, action, DesiredPoseName_SendGoal_Request)() {
  return get_message_type_support_handle<controller_interface::action::DesiredPoseName_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DesiredPoseName_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPoseName_SendGoal_Response_type_support_ids_t;

static const _DesiredPoseName_SendGoal_Response_type_support_ids_t _DesiredPoseName_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DesiredPoseName_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPoseName_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPoseName_SendGoal_Response_type_support_symbol_names_t _DesiredPoseName_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_interface, action, DesiredPoseName_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_interface, action, DesiredPoseName_SendGoal_Response)),
  }
};

typedef struct _DesiredPoseName_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DesiredPoseName_SendGoal_Response_type_support_data_t;

static _DesiredPoseName_SendGoal_Response_type_support_data_t _DesiredPoseName_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPoseName_SendGoal_Response_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPoseName_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPoseName_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPoseName_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPoseName_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPoseName_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace controller_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_interface::action::DesiredPoseName_SendGoal_Response>()
{
  return &::controller_interface::action::rosidl_typesupport_cpp::DesiredPoseName_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_interface, action, DesiredPoseName_SendGoal_Response)() {
  return get_message_type_support_handle<controller_interface::action::DesiredPoseName_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DesiredPoseName_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPoseName_SendGoal_type_support_ids_t;

static const _DesiredPoseName_SendGoal_type_support_ids_t _DesiredPoseName_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DesiredPoseName_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPoseName_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPoseName_SendGoal_type_support_symbol_names_t _DesiredPoseName_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_interface, action, DesiredPoseName_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_interface, action, DesiredPoseName_SendGoal)),
  }
};

typedef struct _DesiredPoseName_SendGoal_type_support_data_t
{
  void * data[2];
} _DesiredPoseName_SendGoal_type_support_data_t;

static _DesiredPoseName_SendGoal_type_support_data_t _DesiredPoseName_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPoseName_SendGoal_service_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPoseName_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DesiredPoseName_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DesiredPoseName_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DesiredPoseName_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPoseName_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace controller_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<controller_interface::action::DesiredPoseName_SendGoal>()
{
  return &::controller_interface::action::rosidl_typesupport_cpp::DesiredPoseName_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DesiredPoseName_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPoseName_GetResult_Request_type_support_ids_t;

static const _DesiredPoseName_GetResult_Request_type_support_ids_t _DesiredPoseName_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DesiredPoseName_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPoseName_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPoseName_GetResult_Request_type_support_symbol_names_t _DesiredPoseName_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_interface, action, DesiredPoseName_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_interface, action, DesiredPoseName_GetResult_Request)),
  }
};

typedef struct _DesiredPoseName_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DesiredPoseName_GetResult_Request_type_support_data_t;

static _DesiredPoseName_GetResult_Request_type_support_data_t _DesiredPoseName_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPoseName_GetResult_Request_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPoseName_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPoseName_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPoseName_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPoseName_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPoseName_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace controller_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_interface::action::DesiredPoseName_GetResult_Request>()
{
  return &::controller_interface::action::rosidl_typesupport_cpp::DesiredPoseName_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_interface, action, DesiredPoseName_GetResult_Request)() {
  return get_message_type_support_handle<controller_interface::action::DesiredPoseName_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DesiredPoseName_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPoseName_GetResult_Response_type_support_ids_t;

static const _DesiredPoseName_GetResult_Response_type_support_ids_t _DesiredPoseName_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DesiredPoseName_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPoseName_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPoseName_GetResult_Response_type_support_symbol_names_t _DesiredPoseName_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_interface, action, DesiredPoseName_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_interface, action, DesiredPoseName_GetResult_Response)),
  }
};

typedef struct _DesiredPoseName_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DesiredPoseName_GetResult_Response_type_support_data_t;

static _DesiredPoseName_GetResult_Response_type_support_data_t _DesiredPoseName_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPoseName_GetResult_Response_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPoseName_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPoseName_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPoseName_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPoseName_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPoseName_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace controller_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_interface::action::DesiredPoseName_GetResult_Response>()
{
  return &::controller_interface::action::rosidl_typesupport_cpp::DesiredPoseName_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_interface, action, DesiredPoseName_GetResult_Response)() {
  return get_message_type_support_handle<controller_interface::action::DesiredPoseName_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DesiredPoseName_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPoseName_GetResult_type_support_ids_t;

static const _DesiredPoseName_GetResult_type_support_ids_t _DesiredPoseName_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DesiredPoseName_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPoseName_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPoseName_GetResult_type_support_symbol_names_t _DesiredPoseName_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_interface, action, DesiredPoseName_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_interface, action, DesiredPoseName_GetResult)),
  }
};

typedef struct _DesiredPoseName_GetResult_type_support_data_t
{
  void * data[2];
} _DesiredPoseName_GetResult_type_support_data_t;

static _DesiredPoseName_GetResult_type_support_data_t _DesiredPoseName_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPoseName_GetResult_service_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPoseName_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DesiredPoseName_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DesiredPoseName_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DesiredPoseName_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPoseName_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace controller_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<controller_interface::action::DesiredPoseName_GetResult>()
{
  return &::controller_interface::action::rosidl_typesupport_cpp::DesiredPoseName_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DesiredPoseName_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DesiredPoseName_FeedbackMessage_type_support_ids_t;

static const _DesiredPoseName_FeedbackMessage_type_support_ids_t _DesiredPoseName_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DesiredPoseName_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DesiredPoseName_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DesiredPoseName_FeedbackMessage_type_support_symbol_names_t _DesiredPoseName_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_interface, action, DesiredPoseName_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_interface, action, DesiredPoseName_FeedbackMessage)),
  }
};

typedef struct _DesiredPoseName_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DesiredPoseName_FeedbackMessage_type_support_data_t;

static _DesiredPoseName_FeedbackMessage_type_support_data_t _DesiredPoseName_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DesiredPoseName_FeedbackMessage_message_typesupport_map = {
  2,
  "controller_interface",
  &_DesiredPoseName_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DesiredPoseName_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DesiredPoseName_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DesiredPoseName_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DesiredPoseName_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace controller_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_interface::action::DesiredPoseName_FeedbackMessage>()
{
  return &::controller_interface::action::rosidl_typesupport_cpp::DesiredPoseName_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_interface, action, DesiredPoseName_FeedbackMessage)() {
  return get_message_type_support_handle<controller_interface::action::DesiredPoseName_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "controller_interface/action/detail/desired_pose_name__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace controller_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t DesiredPoseName_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace controller_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<controller_interface::action::DesiredPoseName>()
{
  using ::controller_interface::action::rosidl_typesupport_cpp::DesiredPoseName_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  DesiredPoseName_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::controller_interface::action::DesiredPoseName::Impl::SendGoalService>();
  DesiredPoseName_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::controller_interface::action::DesiredPoseName::Impl::GetResultService>();
  DesiredPoseName_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::controller_interface::action::DesiredPoseName::Impl::CancelGoalService>();
  DesiredPoseName_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::controller_interface::action::DesiredPoseName::Impl::FeedbackMessage>();
  DesiredPoseName_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::controller_interface::action::DesiredPoseName::Impl::GoalStatusMessage>();
  return &DesiredPoseName_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
