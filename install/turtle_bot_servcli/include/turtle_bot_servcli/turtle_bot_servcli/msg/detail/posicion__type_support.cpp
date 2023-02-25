// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from turtle_bot_servcli:msg/Posicion.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "turtle_bot_servcli/msg/detail/posicion__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtle_bot_servcli
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Posicion_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtle_bot_servcli::msg::Posicion(_init);
}

void Posicion_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtle_bot_servcli::msg::Posicion *>(message_memory);
  typed_message->~Posicion();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Posicion_message_member_array[1] = {
  {
    "posicion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Twist>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_bot_servcli::msg::Posicion, posicion),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Posicion_message_members = {
  "turtle_bot_servcli::msg",  // message namespace
  "Posicion",  // message name
  1,  // number of fields
  sizeof(turtle_bot_servcli::msg::Posicion),
  Posicion_message_member_array,  // message members
  Posicion_init_function,  // function to initialize message memory (memory has to be allocated)
  Posicion_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Posicion_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Posicion_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace turtle_bot_servcli


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_bot_servcli::msg::Posicion>()
{
  return &::turtle_bot_servcli::msg::rosidl_typesupport_introspection_cpp::Posicion_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_bot_servcli, msg, Posicion)() {
  return &::turtle_bot_servcli::msg::rosidl_typesupport_introspection_cpp::Posicion_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
