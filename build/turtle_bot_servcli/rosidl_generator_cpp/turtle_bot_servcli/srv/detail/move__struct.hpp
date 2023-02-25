// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_bot_servcli:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SERVCLI__SRV__DETAIL__MOVE__STRUCT_HPP_
#define TURTLE_BOT_SERVCLI__SRV__DETAIL__MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position_start'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_bot_servcli__srv__Move_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_bot_servcli__srv__Move_Request __declspec(deprecated)
#endif

namespace turtle_bot_servcli
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Request_
{
  using Type = Move_Request_<ContainerAllocator>;

  explicit Move_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_start(_init)
  {
    (void)_init;
  }

  explicit Move_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_start(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _position_start_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _position_start_type position_start;

  // setters for named parameter idiom
  Type & set__position_start(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->position_start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_bot_servcli::srv::Move_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_bot_servcli::srv::Move_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_bot_servcli::srv::Move_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_bot_servcli::srv::Move_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_bot_servcli::srv::Move_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_bot_servcli::srv::Move_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_bot_servcli::srv::Move_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_bot_servcli::srv::Move_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_bot_servcli::srv::Move_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_bot_servcli::srv::Move_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_bot_servcli__srv__Move_Request
    std::shared_ptr<turtle_bot_servcli::srv::Move_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_bot_servcli__srv__Move_Request
    std::shared_ptr<turtle_bot_servcli::srv::Move_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Request_ & other) const
  {
    if (this->position_start != other.position_start) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Request_

// alias to use template instance with default allocator
using Move_Request =
  turtle_bot_servcli::srv::Move_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_bot_servcli


// Include directives for member types
// Member 'position_destiny'
// already included above
// #include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_bot_servcli__srv__Move_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_bot_servcli__srv__Move_Response __declspec(deprecated)
#endif

namespace turtle_bot_servcli
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Response_
{
  using Type = Move_Response_<ContainerAllocator>;

  explicit Move_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_destiny(_init)
  {
    (void)_init;
  }

  explicit Move_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_destiny(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _position_destiny_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _position_destiny_type position_destiny;

  // setters for named parameter idiom
  Type & set__position_destiny(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->position_destiny = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_bot_servcli::srv::Move_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_bot_servcli::srv::Move_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_bot_servcli::srv::Move_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_bot_servcli::srv::Move_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_bot_servcli::srv::Move_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_bot_servcli::srv::Move_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_bot_servcli::srv::Move_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_bot_servcli::srv::Move_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_bot_servcli::srv::Move_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_bot_servcli::srv::Move_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_bot_servcli__srv__Move_Response
    std::shared_ptr<turtle_bot_servcli::srv::Move_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_bot_servcli__srv__Move_Response
    std::shared_ptr<turtle_bot_servcli::srv::Move_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Response_ & other) const
  {
    if (this->position_destiny != other.position_destiny) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Response_

// alias to use template instance with default allocator
using Move_Response =
  turtle_bot_servcli::srv::Move_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_bot_servcli

namespace turtle_bot_servcli
{

namespace srv
{

struct Move
{
  using Request = turtle_bot_servcli::srv::Move_Request;
  using Response = turtle_bot_servcli::srv::Move_Response;
};

}  // namespace srv

}  // namespace turtle_bot_servcli

#endif  // TURTLE_BOT_SERVCLI__SRV__DETAIL__MOVE__STRUCT_HPP_
