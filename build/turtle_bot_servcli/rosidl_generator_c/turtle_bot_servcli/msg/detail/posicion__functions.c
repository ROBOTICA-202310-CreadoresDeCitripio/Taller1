// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_bot_servcli:msg/Posicion.idl
// generated code does not contain a copyright notice
#include "turtle_bot_servcli/msg/detail/posicion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `posicion`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
turtle_bot_servcli__msg__Posicion__init(turtle_bot_servcli__msg__Posicion * msg)
{
  if (!msg) {
    return false;
  }
  // posicion
  if (!geometry_msgs__msg__Twist__init(&msg->posicion)) {
    turtle_bot_servcli__msg__Posicion__fini(msg);
    return false;
  }
  return true;
}

void
turtle_bot_servcli__msg__Posicion__fini(turtle_bot_servcli__msg__Posicion * msg)
{
  if (!msg) {
    return;
  }
  // posicion
  geometry_msgs__msg__Twist__fini(&msg->posicion);
}

bool
turtle_bot_servcli__msg__Posicion__are_equal(const turtle_bot_servcli__msg__Posicion * lhs, const turtle_bot_servcli__msg__Posicion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // posicion
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->posicion), &(rhs->posicion)))
  {
    return false;
  }
  return true;
}

bool
turtle_bot_servcli__msg__Posicion__copy(
  const turtle_bot_servcli__msg__Posicion * input,
  turtle_bot_servcli__msg__Posicion * output)
{
  if (!input || !output) {
    return false;
  }
  // posicion
  if (!geometry_msgs__msg__Twist__copy(
      &(input->posicion), &(output->posicion)))
  {
    return false;
  }
  return true;
}

turtle_bot_servcli__msg__Posicion *
turtle_bot_servcli__msg__Posicion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_bot_servcli__msg__Posicion * msg = (turtle_bot_servcli__msg__Posicion *)allocator.allocate(sizeof(turtle_bot_servcli__msg__Posicion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_bot_servcli__msg__Posicion));
  bool success = turtle_bot_servcli__msg__Posicion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_bot_servcli__msg__Posicion__destroy(turtle_bot_servcli__msg__Posicion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_bot_servcli__msg__Posicion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_bot_servcli__msg__Posicion__Sequence__init(turtle_bot_servcli__msg__Posicion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_bot_servcli__msg__Posicion * data = NULL;

  if (size) {
    data = (turtle_bot_servcli__msg__Posicion *)allocator.zero_allocate(size, sizeof(turtle_bot_servcli__msg__Posicion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_bot_servcli__msg__Posicion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_bot_servcli__msg__Posicion__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtle_bot_servcli__msg__Posicion__Sequence__fini(turtle_bot_servcli__msg__Posicion__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_bot_servcli__msg__Posicion__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtle_bot_servcli__msg__Posicion__Sequence *
turtle_bot_servcli__msg__Posicion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_bot_servcli__msg__Posicion__Sequence * array = (turtle_bot_servcli__msg__Posicion__Sequence *)allocator.allocate(sizeof(turtle_bot_servcli__msg__Posicion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_bot_servcli__msg__Posicion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_bot_servcli__msg__Posicion__Sequence__destroy(turtle_bot_servcli__msg__Posicion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_bot_servcli__msg__Posicion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_bot_servcli__msg__Posicion__Sequence__are_equal(const turtle_bot_servcli__msg__Posicion__Sequence * lhs, const turtle_bot_servcli__msg__Posicion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_bot_servcli__msg__Posicion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_bot_servcli__msg__Posicion__Sequence__copy(
  const turtle_bot_servcli__msg__Posicion__Sequence * input,
  turtle_bot_servcli__msg__Posicion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_bot_servcli__msg__Posicion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_bot_servcli__msg__Posicion * data =
      (turtle_bot_servcli__msg__Posicion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_bot_servcli__msg__Posicion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_bot_servcli__msg__Posicion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_bot_servcli__msg__Posicion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
