// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motion_msgs:msg/MotionCtrl.idl
// generated code does not contain a copyright notice

#ifndef MOTION_MSGS__MSG__DETAIL__MOTION_CTRL__BUILDER_HPP_
#define MOTION_MSGS__MSG__DETAIL__MOTION_CTRL__BUILDER_HPP_

#include "motion_msgs/msg/detail/motion_ctrl__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace motion_msgs
{

namespace msg
{

namespace builder
{

class Init_MotionCtrl_value
{
public:
  explicit Init_MotionCtrl_value(::motion_msgs::msg::MotionCtrl & msg)
  : msg_(msg)
  {}
  ::motion_msgs::msg::MotionCtrl value(::motion_msgs::msg::MotionCtrl::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motion_msgs::msg::MotionCtrl msg_;
};

class Init_MotionCtrl_cmd_id
{
public:
  Init_MotionCtrl_cmd_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionCtrl_value cmd_id(::motion_msgs::msg::MotionCtrl::_cmd_id_type arg)
  {
    msg_.cmd_id = std::move(arg);
    return Init_MotionCtrl_value(msg_);
  }

private:
  ::motion_msgs::msg::MotionCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motion_msgs::msg::MotionCtrl>()
{
  return motion_msgs::msg::builder::Init_MotionCtrl_cmd_id();
}

}  // namespace motion_msgs

#endif  // MOTION_MSGS__MSG__DETAIL__MOTION_CTRL__BUILDER_HPP_
