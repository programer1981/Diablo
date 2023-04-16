// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motion_msgs:msg/MotionCtrl.idl
// generated code does not contain a copyright notice

#ifndef MOTION_MSGS__MSG__DETAIL__MOTION_CTRL__TRAITS_HPP_
#define MOTION_MSGS__MSG__DETAIL__MOTION_CTRL__TRAITS_HPP_

#include "motion_msgs/msg/detail/motion_ctrl__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<motion_msgs::msg::MotionCtrl>()
{
  return "motion_msgs::msg::MotionCtrl";
}

template<>
inline const char * name<motion_msgs::msg::MotionCtrl>()
{
  return "motion_msgs/msg/MotionCtrl";
}

template<>
struct has_fixed_size<motion_msgs::msg::MotionCtrl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motion_msgs::msg::MotionCtrl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motion_msgs::msg::MotionCtrl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTION_MSGS__MSG__DETAIL__MOTION_CTRL__TRAITS_HPP_
