// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_bot_servcli:msg/Posicion.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__STRUCT_HPP_
#define TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'posicion'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_bot_servcli__msg__Posicion __attribute__((deprecated))
#else
# define DEPRECATED__turtle_bot_servcli__msg__Posicion __declspec(deprecated)
#endif

namespace turtle_bot_servcli
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Posicion_
{
  using Type = Posicion_<ContainerAllocator>;

  explicit Posicion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : posicion(_init)
  {
    (void)_init;
  }

  explicit Posicion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : posicion(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _posicion_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _posicion_type posicion;

  // setters for named parameter idiom
  Type & set__posicion(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->posicion = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_bot_servcli::msg::Posicion_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_bot_servcli::msg::Posicion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_bot_servcli::msg::Posicion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_bot_servcli::msg::Posicion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_bot_servcli::msg::Posicion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_bot_servcli::msg::Posicion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_bot_servcli::msg::Posicion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_bot_servcli::msg::Posicion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_bot_servcli::msg::Posicion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_bot_servcli::msg::Posicion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_bot_servcli__msg__Posicion
    std::shared_ptr<turtle_bot_servcli::msg::Posicion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_bot_servcli__msg__Posicion
    std::shared_ptr<turtle_bot_servcli::msg::Posicion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Posicion_ & other) const
  {
    if (this->posicion != other.posicion) {
      return false;
    }
    return true;
  }
  bool operator!=(const Posicion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Posicion_

// alias to use template instance with default allocator
using Posicion =
  turtle_bot_servcli::msg::Posicion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_bot_servcli

#endif  // TURTLE_BOT_SERVCLI__MSG__DETAIL__POSICION__STRUCT_HPP_
