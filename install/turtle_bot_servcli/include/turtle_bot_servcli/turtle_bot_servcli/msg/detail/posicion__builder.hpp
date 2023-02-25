// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_bot_servcli:msg/Posicion.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__BUILDER_HPP_
#define TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_bot_servcli/msg/detail/posicion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_bot_servcli
{

namespace msg
{

namespace builder
{

class Init_Posicion_posicion
{
public:
  Init_Posicion_posicion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_bot_servcli::msg::Posicion posicion(::turtle_bot_servcli::msg::Posicion::_posicion_type arg)
  {
    msg_.posicion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_bot_servcli::msg::Posicion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_bot_servcli::msg::Posicion>()
{
  return turtle_bot_servcli::msg::builder::Init_Posicion_posicion();
}

}  // namespace turtle_bot_servcli

#endif  // TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__BUILDER_HPP_
