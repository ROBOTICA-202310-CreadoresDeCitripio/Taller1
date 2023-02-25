// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_bot_servcli:msg/Posicion.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__STRUCT_H_
#define TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'posicion'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/Posicion in the package turtle_bot_servcli.
typedef struct turtle_bot_servcli__msg__Posicion
{
  geometry_msgs__msg__Twist posicion;
} turtle_bot_servcli__msg__Posicion;

// Struct for a sequence of turtle_bot_servcli__msg__Posicion.
typedef struct turtle_bot_servcli__msg__Posicion__Sequence
{
  turtle_bot_servcli__msg__Posicion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_bot_servcli__msg__Posicion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__STRUCT_H_
