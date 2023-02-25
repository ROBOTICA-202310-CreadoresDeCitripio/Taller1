// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_bot_servcli:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SERVCLI__SRV__DETAIL__MOVE__STRUCT_H_
#define TURTLE_BOT_SERVCLI__SRV__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position_start'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in srv/Move in the package turtle_bot_servcli.
typedef struct turtle_bot_servcli__srv__Move_Request
{
  geometry_msgs__msg__Twist position_start;
} turtle_bot_servcli__srv__Move_Request;

// Struct for a sequence of turtle_bot_servcli__srv__Move_Request.
typedef struct turtle_bot_servcli__srv__Move_Request__Sequence
{
  turtle_bot_servcli__srv__Move_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_bot_servcli__srv__Move_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'position_destiny'
// already included above
// #include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in srv/Move in the package turtle_bot_servcli.
typedef struct turtle_bot_servcli__srv__Move_Response
{
  geometry_msgs__msg__Twist position_destiny;
} turtle_bot_servcli__srv__Move_Response;

// Struct for a sequence of turtle_bot_servcli__srv__Move_Response.
typedef struct turtle_bot_servcli__srv__Move_Response__Sequence
{
  turtle_bot_servcli__srv__Move_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_bot_servcli__srv__Move_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_BOT_SERVCLI__SRV__DETAIL__MOVE__STRUCT_H_
