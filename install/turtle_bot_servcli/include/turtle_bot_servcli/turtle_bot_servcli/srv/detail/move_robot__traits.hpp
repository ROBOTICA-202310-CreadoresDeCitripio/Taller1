// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_bot_servcli:srv/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SERVCLI__SRV__DETAIL__MOVE_ROBOT__TRAITS_HPP_
#define TURTLE_BOT_SERVCLI__SRV__DETAIL__MOVE_ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_bot_servcli/srv/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position_start'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace turtle_bot_servcli
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveRobot_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: position_start
  {
    out << "position_start: ";
    to_flow_style_yaml(msg.position_start, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_start:\n";
    to_block_style_yaml(msg.position_start, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_bot_servcli

namespace rosidl_generator_traits
{

[[deprecated("use turtle_bot_servcli::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_bot_servcli::srv::MoveRobot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_bot_servcli::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_bot_servcli::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_bot_servcli::srv::MoveRobot_Request & msg)
{
  return turtle_bot_servcli::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_bot_servcli::srv::MoveRobot_Request>()
{
  return "turtle_bot_servcli::srv::MoveRobot_Request";
}

template<>
inline const char * name<turtle_bot_servcli::srv::MoveRobot_Request>()
{
  return "turtle_bot_servcli/srv/MoveRobot_Request";
}

template<>
struct has_fixed_size<turtle_bot_servcli::srv::MoveRobot_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<turtle_bot_servcli::srv::MoveRobot_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<turtle_bot_servcli::srv::MoveRobot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'position_destiny'
// already included above
// #include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace turtle_bot_servcli
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveRobot_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: position_destiny
  {
    out << "position_destiny: ";
    to_flow_style_yaml(msg.position_destiny, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position_destiny
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_destiny:\n";
    to_block_style_yaml(msg.position_destiny, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_bot_servcli

namespace rosidl_generator_traits
{

[[deprecated("use turtle_bot_servcli::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_bot_servcli::srv::MoveRobot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_bot_servcli::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_bot_servcli::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_bot_servcli::srv::MoveRobot_Response & msg)
{
  return turtle_bot_servcli::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_bot_servcli::srv::MoveRobot_Response>()
{
  return "turtle_bot_servcli::srv::MoveRobot_Response";
}

template<>
inline const char * name<turtle_bot_servcli::srv::MoveRobot_Response>()
{
  return "turtle_bot_servcli/srv/MoveRobot_Response";
}

template<>
struct has_fixed_size<turtle_bot_servcli::srv::MoveRobot_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<turtle_bot_servcli::srv::MoveRobot_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<turtle_bot_servcli::srv::MoveRobot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_bot_servcli::srv::MoveRobot>()
{
  return "turtle_bot_servcli::srv::MoveRobot";
}

template<>
inline const char * name<turtle_bot_servcli::srv::MoveRobot>()
{
  return "turtle_bot_servcli/srv/MoveRobot";
}

template<>
struct has_fixed_size<turtle_bot_servcli::srv::MoveRobot>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_bot_servcli::srv::MoveRobot_Request>::value &&
    has_fixed_size<turtle_bot_servcli::srv::MoveRobot_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_bot_servcli::srv::MoveRobot>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_bot_servcli::srv::MoveRobot_Request>::value &&
    has_bounded_size<turtle_bot_servcli::srv::MoveRobot_Response>::value
  >
{
};

template<>
struct is_service<turtle_bot_servcli::srv::MoveRobot>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_bot_servcli::srv::MoveRobot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_bot_servcli::srv::MoveRobot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_BOT_SERVCLI__SRV__DETAIL__MOVE_ROBOT__TRAITS_HPP_
