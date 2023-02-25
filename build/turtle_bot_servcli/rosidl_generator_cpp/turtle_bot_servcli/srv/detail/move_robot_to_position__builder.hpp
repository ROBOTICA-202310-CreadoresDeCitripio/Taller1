// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_bot_servcli:srv/MoveRobotToPosition.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SERVCLI__SRV__DETAIL__MOVE_ROBOT_TO_POSITION__BUILDER_HPP_
#define TURTLE_BOT_SERVCLI__SRV__DETAIL__MOVE_ROBOT_TO_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_bot_servcli/srv/detail/move_robot_to_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_bot_servcli
{

namespace srv
{

namespace builder
{

class Init_MoveRobotToPosition_Request_position_start
{
public:
  Init_MoveRobotToPosition_Request_position_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_bot_servcli::srv::MoveRobotToPosition_Request position_start(::turtle_bot_servcli::srv::MoveRobotToPosition_Request::_position_start_type arg)
  {
    msg_.position_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_bot_servcli::srv::MoveRobotToPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_bot_servcli::srv::MoveRobotToPosition_Request>()
{
  return turtle_bot_servcli::srv::builder::Init_MoveRobotToPosition_Request_position_start();
}

}  // namespace turtle_bot_servcli


namespace turtle_bot_servcli
{

namespace srv
{

namespace builder
{

class Init_MoveRobotToPosition_Response_position_destiny
{
public:
  Init_MoveRobotToPosition_Response_position_destiny()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_bot_servcli::srv::MoveRobotToPosition_Response position_destiny(::turtle_bot_servcli::srv::MoveRobotToPosition_Response::_position_destiny_type arg)
  {
    msg_.position_destiny = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_bot_servcli::srv::MoveRobotToPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_bot_servcli::srv::MoveRobotToPosition_Response>()
{
  return turtle_bot_servcli::srv::builder::Init_MoveRobotToPosition_Response_position_destiny();
}

}  // namespace turtle_bot_servcli

#endif  // TURTLE_BOT_SERVCLI__SRV__DETAIL__MOVE_ROBOT_TO_POSITION__BUILDER_HPP_
