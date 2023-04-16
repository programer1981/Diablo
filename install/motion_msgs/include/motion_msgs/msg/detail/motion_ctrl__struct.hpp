// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motion_msgs:msg/MotionCtrl.idl
// generated code does not contain a copyright notice

#ifndef MOTION_MSGS__MSG__DETAIL__MOTION_CTRL__STRUCT_HPP_
#define MOTION_MSGS__MSG__DETAIL__MOTION_CTRL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__motion_msgs__msg__MotionCtrl __attribute__((deprecated))
#else
# define DEPRECATED__motion_msgs__msg__MotionCtrl __declspec(deprecated)
#endif

namespace motion_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionCtrl_
{
  using Type = MotionCtrl_<ContainerAllocator>;

  explicit MotionCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_id = 0l;
      this->value = 0.0;
    }
  }

  explicit MotionCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_id = 0l;
      this->value = 0.0;
    }
  }

  // field types and members
  using _cmd_id_type =
    int32_t;
  _cmd_id_type cmd_id;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__cmd_id(
    const int32_t & _arg)
  {
    this->cmd_id = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motion_msgs::msg::MotionCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const motion_msgs::msg::MotionCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motion_msgs::msg::MotionCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motion_msgs::msg::MotionCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motion_msgs::msg::MotionCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motion_msgs::msg::MotionCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motion_msgs::msg::MotionCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motion_msgs::msg::MotionCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motion_msgs::msg::MotionCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motion_msgs::msg::MotionCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motion_msgs__msg__MotionCtrl
    std::shared_ptr<motion_msgs::msg::MotionCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motion_msgs__msg__MotionCtrl
    std::shared_ptr<motion_msgs::msg::MotionCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionCtrl_ & other) const
  {
    if (this->cmd_id != other.cmd_id) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionCtrl_

// alias to use template instance with default allocator
using MotionCtrl =
  motion_msgs::msg::MotionCtrl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motion_msgs

#endif  // MOTION_MSGS__MSG__DETAIL__MOTION_CTRL__STRUCT_HPP_
