// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_bot_servcli:msg/Posicion.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__TRAITS_HPP_
#define TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_bot_servcli/msg/detail/posicion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'posicion'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace turtle_bot_servcli
{

namespace msg
{

inline void to_flow_style_yaml(
  const Posicion & msg,
  std::ostream & out)
{
  out << "{";
  // member: posicion
  {
    out << "posicion: ";
    to_flow_style_yaml(msg.posicion, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Posicion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: posicion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posicion:\n";
    to_block_style_yaml(msg.posicion, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Posicion & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace turtle_bot_servcli

namespace rosidl_generator_traits
{

[[deprecated("use turtle_bot_servcli::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_bot_servcli::msg::Posicion & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_bot_servcli::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_bot_servcli::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtle_bot_servcli::msg::Posicion & msg)
{
  return turtle_bot_servcli::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_bot_servcli::msg::Posicion>()
{
  return "turtle_bot_servcli::msg::Posicion";
}

template<>
inline const char * name<turtle_bot_servcli::msg::Posicion>()
{
  return "turtle_bot_servcli/msg/Posicion";
}

template<>
struct has_fixed_size<turtle_bot_servcli::msg::Posicion>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<turtle_bot_servcli::msg::Posicion>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<turtle_bot_servcli::msg::Posicion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__TRAITS_HPP_
