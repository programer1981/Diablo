// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from motion_msgs:msg/LegMotors.idl
// generated code does not contain a copyright notice
#include "motion_msgs/msg/detail/leg_motors__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "motion_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "motion_msgs/msg/detail/leg_motors__struct.h"
#include "motion_msgs/msg/detail/leg_motors__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_motion_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _LegMotors__ros_msg_type = motion_msgs__msg__LegMotors;

static bool _LegMotors__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LegMotors__ros_msg_type * ros_message = static_cast<const _LegMotors__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: left_hip_enc_rev
  {
    cdr << ros_message->left_hip_enc_rev;
  }

  // Field name: left_hip_pos
  {
    cdr << ros_message->left_hip_pos;
  }

  // Field name: left_hip_vel
  {
    cdr << ros_message->left_hip_vel;
  }

  // Field name: left_hip_iq
  {
    cdr << ros_message->left_hip_iq;
  }

  // Field name: left_knee_enc_rev
  {
    cdr << ros_message->left_knee_enc_rev;
  }

  // Field name: left_knee_pos
  {
    cdr << ros_message->left_knee_pos;
  }

  // Field name: left_knee_vel
  {
    cdr << ros_message->left_knee_vel;
  }

  // Field name: left_knee_iq
  {
    cdr << ros_message->left_knee_iq;
  }

  // Field name: left_wheel_enc_rev
  {
    cdr << ros_message->left_wheel_enc_rev;
  }

  // Field name: left_wheel_pos
  {
    cdr << ros_message->left_wheel_pos;
  }

  // Field name: left_wheel_vel
  {
    cdr << ros_message->left_wheel_vel;
  }

  // Field name: left_wheel_iq
  {
    cdr << ros_message->left_wheel_iq;
  }

  // Field name: right_hip_enc_rev
  {
    cdr << ros_message->right_hip_enc_rev;
  }

  // Field name: right_hip_pos
  {
    cdr << ros_message->right_hip_pos;
  }

  // Field name: right_hip_vel
  {
    cdr << ros_message->right_hip_vel;
  }

  // Field name: right_hip_iq
  {
    cdr << ros_message->right_hip_iq;
  }

  // Field name: right_knee_enc_rev
  {
    cdr << ros_message->right_knee_enc_rev;
  }

  // Field name: right_knee_pos
  {
    cdr << ros_message->right_knee_pos;
  }

  // Field name: right_knee_vel
  {
    cdr << ros_message->right_knee_vel;
  }

  // Field name: right_knee_iq
  {
    cdr << ros_message->right_knee_iq;
  }

  // Field name: right_wheel_enc_rev
  {
    cdr << ros_message->right_wheel_enc_rev;
  }

  // Field name: right_wheel_pos
  {
    cdr << ros_message->right_wheel_pos;
  }

  // Field name: right_wheel_vel
  {
    cdr << ros_message->right_wheel_vel;
  }

  // Field name: right_wheel_iq
  {
    cdr << ros_message->right_wheel_iq;
  }

  return true;
}

static bool _LegMotors__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LegMotors__ros_msg_type * ros_message = static_cast<_LegMotors__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: left_hip_enc_rev
  {
    cdr >> ros_message->left_hip_enc_rev;
  }

  // Field name: left_hip_pos
  {
    cdr >> ros_message->left_hip_pos;
  }

  // Field name: left_hip_vel
  {
    cdr >> ros_message->left_hip_vel;
  }

  // Field name: left_hip_iq
  {
    cdr >> ros_message->left_hip_iq;
  }

  // Field name: left_knee_enc_rev
  {
    cdr >> ros_message->left_knee_enc_rev;
  }

  // Field name: left_knee_pos
  {
    cdr >> ros_message->left_knee_pos;
  }

  // Field name: left_knee_vel
  {
    cdr >> ros_message->left_knee_vel;
  }

  // Field name: left_knee_iq
  {
    cdr >> ros_message->left_knee_iq;
  }

  // Field name: left_wheel_enc_rev
  {
    cdr >> ros_message->left_wheel_enc_rev;
  }

  // Field name: left_wheel_pos
  {
    cdr >> ros_message->left_wheel_pos;
  }

  // Field name: left_wheel_vel
  {
    cdr >> ros_message->left_wheel_vel;
  }

  // Field name: left_wheel_iq
  {
    cdr >> ros_message->left_wheel_iq;
  }

  // Field name: right_hip_enc_rev
  {
    cdr >> ros_message->right_hip_enc_rev;
  }

  // Field name: right_hip_pos
  {
    cdr >> ros_message->right_hip_pos;
  }

  // Field name: right_hip_vel
  {
    cdr >> ros_message->right_hip_vel;
  }

  // Field name: right_hip_iq
  {
    cdr >> ros_message->right_hip_iq;
  }

  // Field name: right_knee_enc_rev
  {
    cdr >> ros_message->right_knee_enc_rev;
  }

  // Field name: right_knee_pos
  {
    cdr >> ros_message->right_knee_pos;
  }

  // Field name: right_knee_vel
  {
    cdr >> ros_message->right_knee_vel;
  }

  // Field name: right_knee_iq
  {
    cdr >> ros_message->right_knee_iq;
  }

  // Field name: right_wheel_enc_rev
  {
    cdr >> ros_message->right_wheel_enc_rev;
  }

  // Field name: right_wheel_pos
  {
    cdr >> ros_message->right_wheel_pos;
  }

  // Field name: right_wheel_vel
  {
    cdr >> ros_message->right_wheel_vel;
  }

  // Field name: right_wheel_iq
  {
    cdr >> ros_message->right_wheel_iq;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_msgs
size_t get_serialized_size_motion_msgs__msg__LegMotors(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LegMotors__ros_msg_type * ros_message = static_cast<const _LegMotors__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name left_hip_enc_rev
  {
    size_t item_size = sizeof(ros_message->left_hip_enc_rev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_hip_pos
  {
    size_t item_size = sizeof(ros_message->left_hip_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_hip_vel
  {
    size_t item_size = sizeof(ros_message->left_hip_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_hip_iq
  {
    size_t item_size = sizeof(ros_message->left_hip_iq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_knee_enc_rev
  {
    size_t item_size = sizeof(ros_message->left_knee_enc_rev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_knee_pos
  {
    size_t item_size = sizeof(ros_message->left_knee_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_knee_vel
  {
    size_t item_size = sizeof(ros_message->left_knee_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_knee_iq
  {
    size_t item_size = sizeof(ros_message->left_knee_iq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_wheel_enc_rev
  {
    size_t item_size = sizeof(ros_message->left_wheel_enc_rev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_wheel_pos
  {
    size_t item_size = sizeof(ros_message->left_wheel_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_wheel_vel
  {
    size_t item_size = sizeof(ros_message->left_wheel_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_wheel_iq
  {
    size_t item_size = sizeof(ros_message->left_wheel_iq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_hip_enc_rev
  {
    size_t item_size = sizeof(ros_message->right_hip_enc_rev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_hip_pos
  {
    size_t item_size = sizeof(ros_message->right_hip_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_hip_vel
  {
    size_t item_size = sizeof(ros_message->right_hip_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_hip_iq
  {
    size_t item_size = sizeof(ros_message->right_hip_iq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_knee_enc_rev
  {
    size_t item_size = sizeof(ros_message->right_knee_enc_rev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_knee_pos
  {
    size_t item_size = sizeof(ros_message->right_knee_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_knee_vel
  {
    size_t item_size = sizeof(ros_message->right_knee_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_knee_iq
  {
    size_t item_size = sizeof(ros_message->right_knee_iq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_wheel_enc_rev
  {
    size_t item_size = sizeof(ros_message->right_wheel_enc_rev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_wheel_pos
  {
    size_t item_size = sizeof(ros_message->right_wheel_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_wheel_vel
  {
    size_t item_size = sizeof(ros_message->right_wheel_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_wheel_iq
  {
    size_t item_size = sizeof(ros_message->right_wheel_iq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LegMotors__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_motion_msgs__msg__LegMotors(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motion_msgs
size_t max_serialized_size_motion_msgs__msg__LegMotors(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: left_hip_enc_rev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_hip_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_hip_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_hip_iq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_knee_enc_rev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_knee_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_knee_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_knee_iq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_wheel_enc_rev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_wheel_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_wheel_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_wheel_iq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_hip_enc_rev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_hip_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_hip_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_hip_iq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_knee_enc_rev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_knee_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_knee_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_knee_iq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_wheel_enc_rev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_wheel_pos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_wheel_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_wheel_iq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LegMotors__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_motion_msgs__msg__LegMotors(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LegMotors = {
  "motion_msgs::msg",
  "LegMotors",
  _LegMotors__cdr_serialize,
  _LegMotors__cdr_deserialize,
  _LegMotors__get_serialized_size,
  _LegMotors__max_serialized_size
};

static rosidl_message_type_support_t _LegMotors__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LegMotors,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motion_msgs, msg, LegMotors)() {
  return &_LegMotors__type_support;
}

#if defined(__cplusplus)
}
#endif
