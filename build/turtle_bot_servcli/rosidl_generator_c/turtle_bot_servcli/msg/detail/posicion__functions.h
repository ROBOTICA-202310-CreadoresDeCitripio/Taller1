// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtle_bot_servcli:msg/Posicion.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__FUNCTIONS_H_
#define TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_bot_servcli/msg/rosidl_generator_c__visibility_control.h"

#include "turtle_bot_servcli/msg/detail/posicion__struct.h"

/// Initialize msg/Posicion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_bot_servcli__msg__Posicion
 * )) before or use
 * turtle_bot_servcli__msg__Posicion__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_servcli
bool
turtle_bot_servcli__msg__Posicion__init(turtle_bot_servcli__msg__Posicion * msg);

/// Finalize msg/Posicion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_servcli
void
turtle_bot_servcli__msg__Posicion__fini(turtle_bot_servcli__msg__Posicion * msg);

/// Create msg/Posicion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_bot_servcli__msg__Posicion__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_servcli
turtle_bot_servcli__msg__Posicion *
turtle_bot_servcli__msg__Posicion__create();

/// Destroy msg/Posicion message.
/**
 * It calls
 * turtle_bot_servcli__msg__Posicion__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_servcli
void
turtle_bot_servcli__msg__Posicion__destroy(turtle_bot_servcli__msg__Posicion * msg);

/// Check for msg/Posicion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_servcli
bool
turtle_bot_servcli__msg__Posicion__are_equal(const turtle_bot_servcli__msg__Posicion * lhs, const turtle_bot_servcli__msg__Posicion * rhs);

/// Copy a msg/Posicion message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_servcli
bool
turtle_bot_servcli__msg__Posicion__copy(
  const turtle_bot_servcli__msg__Posicion * input,
  turtle_bot_servcli__msg__Posicion * output);

/// Initialize array of msg/Posicion messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_bot_servcli__msg__Posicion__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_servcli
bool
turtle_bot_servcli__msg__Posicion__Sequence__init(turtle_bot_servcli__msg__Posicion__Sequence * array, size_t size);

/// Finalize array of msg/Posicion messages.
/**
 * It calls
 * turtle_bot_servcli__msg__Posicion__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_servcli
void
turtle_bot_servcli__msg__Posicion__Sequence__fini(turtle_bot_servcli__msg__Posicion__Sequence * array);

/// Create array of msg/Posicion messages.
/**
 * It allocates the memory for the array and calls
 * turtle_bot_servcli__msg__Posicion__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_servcli
turtle_bot_servcli__msg__Posicion__Sequence *
turtle_bot_servcli__msg__Posicion__Sequence__create(size_t size);

/// Destroy array of msg/Posicion messages.
/**
 * It calls
 * turtle_bot_servcli__msg__Posicion__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_servcli
void
turtle_bot_servcli__msg__Posicion__Sequence__destroy(turtle_bot_servcli__msg__Posicion__Sequence * array);

/// Check for msg/Posicion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_servcli
bool
turtle_bot_servcli__msg__Posicion__Sequence__are_equal(const turtle_bot_servcli__msg__Posicion__Sequence * lhs, const turtle_bot_servcli__msg__Posicion__Sequence * rhs);

/// Copy an array of msg/Posicion messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_bot_servcli
bool
turtle_bot_servcli__msg__Posicion__Sequence__copy(
  const turtle_bot_servcli__msg__Posicion__Sequence * input,
  turtle_bot_servcli__msg__Posicion__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__FUNCTIONS_H_
