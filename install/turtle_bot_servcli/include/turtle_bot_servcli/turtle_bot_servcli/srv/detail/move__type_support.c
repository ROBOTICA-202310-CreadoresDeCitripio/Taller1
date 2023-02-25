// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_bot_servcli:srv/Move.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_bot_servcli/srv/detail/move__rosidl_typesupport_introspection_c.h"
#include "turtle_bot_servcli/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_bot_servcli/srv/detail/move__functions.h"
#include "turtle_bot_servcli/srv/detail/move__struct.h"


// Include directives for member types
// Member `position_start`
#include "geometry_msgs/msg/twist.h"
// Member `position_start`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_bot_servcli__srv__Move_Request__init(message_memory);
}

void turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_fini_function(void * message_memory)
{
  turtle_bot_servcli__srv__Move_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_member_array[1] = {
  {
    "position_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_bot_servcli__srv__Move_Request, position_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_members = {
  "turtle_bot_servcli__srv",  // message namespace
  "Move_Request",  // message name
  1,  // number of fields
  sizeof(turtle_bot_servcli__srv__Move_Request),
  turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_member_array,  // message members
  turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle = {
  0,
  &turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_bot_servcli
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_bot_servcli, srv, Move_Request)() {
  turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle.typesupport_identifier) {
    turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtle_bot_servcli__srv__Move_Request__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtle_bot_servcli/srv/detail/move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtle_bot_servcli/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtle_bot_servcli/srv/detail/move__functions.h"
// already included above
// #include "turtle_bot_servcli/srv/detail/move__struct.h"


// Include directives for member types
// Member `position_destiny`
// already included above
// #include "geometry_msgs/msg/twist.h"
// Member `position_destiny`
// already included above
// #include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_bot_servcli__srv__Move_Response__init(message_memory);
}

void turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_fini_function(void * message_memory)
{
  turtle_bot_servcli__srv__Move_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_member_array[1] = {
  {
    "position_destiny",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_bot_servcli__srv__Move_Response, position_destiny),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_members = {
  "turtle_bot_servcli__srv",  // message namespace
  "Move_Response",  // message name
  1,  // number of fields
  sizeof(turtle_bot_servcli__srv__Move_Response),
  turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_member_array,  // message members
  turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle = {
  0,
  &turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_bot_servcli
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_bot_servcli, srv, Move_Response)() {
  turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle.typesupport_identifier) {
    turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtle_bot_servcli__srv__Move_Response__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtle_bot_servcli/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtle_bot_servcli/srv/detail/move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtle_bot_servcli__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_members = {
  "turtle_bot_servcli__srv",  // service namespace
  "Move",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtle_bot_servcli__srv__detail__move__rosidl_typesupport_introspection_c__Move_Request_message_type_support_handle,
  NULL  // response message
  // turtle_bot_servcli__srv__detail__move__rosidl_typesupport_introspection_c__Move_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtle_bot_servcli__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle = {
  0,
  &turtle_bot_servcli__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_bot_servcli, srv, Move_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_bot_servcli, srv, Move_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_bot_servcli
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_bot_servcli, srv, Move)() {
  if (!turtle_bot_servcli__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle.typesupport_identifier) {
    turtle_bot_servcli__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtle_bot_servcli__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_bot_servcli, srv, Move_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_bot_servcli, srv, Move_Response)()->data;
  }

  return &turtle_bot_servcli__srv__detail__move__rosidl_typesupport_introspection_c__Move_service_type_support_handle;
}
