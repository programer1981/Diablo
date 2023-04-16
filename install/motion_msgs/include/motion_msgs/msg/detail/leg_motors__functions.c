// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motion_msgs:msg/LegMotors.idl
// generated code does not contain a copyright notice
#include "motion_msgs/msg/detail/leg_motors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
motion_msgs__msg__LegMotors__init(motion_msgs__msg__LegMotors * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    motion_msgs__msg__LegMotors__fini(msg);
    return false;
  }
  // left_hip_enc_rev
  // left_hip_pos
  // left_hip_vel
  // left_hip_iq
  // left_knee_enc_rev
  // left_knee_pos
  // left_knee_vel
  // left_knee_iq
  // left_wheel_enc_rev
  // left_wheel_pos
  // left_wheel_vel
  // left_wheel_iq
  // right_hip_enc_rev
  // right_hip_pos
  // right_hip_vel
  // right_hip_iq
  // right_knee_enc_rev
  // right_knee_pos
  // right_knee_vel
  // right_knee_iq
  // right_wheel_enc_rev
  // right_wheel_pos
  // right_wheel_vel
  // right_wheel_iq
  return true;
}

void
motion_msgs__msg__LegMotors__fini(motion_msgs__msg__LegMotors * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // left_hip_enc_rev
  // left_hip_pos
  // left_hip_vel
  // left_hip_iq
  // left_knee_enc_rev
  // left_knee_pos
  // left_knee_vel
  // left_knee_iq
  // left_wheel_enc_rev
  // left_wheel_pos
  // left_wheel_vel
  // left_wheel_iq
  // right_hip_enc_rev
  // right_hip_pos
  // right_hip_vel
  // right_hip_iq
  // right_knee_enc_rev
  // right_knee_pos
  // right_knee_vel
  // right_knee_iq
  // right_wheel_enc_rev
  // right_wheel_pos
  // right_wheel_vel
  // right_wheel_iq
}

motion_msgs__msg__LegMotors *
motion_msgs__msg__LegMotors__create()
{
  motion_msgs__msg__LegMotors * msg = (motion_msgs__msg__LegMotors *)malloc(sizeof(motion_msgs__msg__LegMotors));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motion_msgs__msg__LegMotors));
  bool success = motion_msgs__msg__LegMotors__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
motion_msgs__msg__LegMotors__destroy(motion_msgs__msg__LegMotors * msg)
{
  if (msg) {
    motion_msgs__msg__LegMotors__fini(msg);
  }
  free(msg);
}


bool
motion_msgs__msg__LegMotors__Sequence__init(motion_msgs__msg__LegMotors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  motion_msgs__msg__LegMotors * data = NULL;
  if (size) {
    data = (motion_msgs__msg__LegMotors *)calloc(size, sizeof(motion_msgs__msg__LegMotors));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motion_msgs__msg__LegMotors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motion_msgs__msg__LegMotors__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
motion_msgs__msg__LegMotors__Sequence__fini(motion_msgs__msg__LegMotors__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      motion_msgs__msg__LegMotors__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

motion_msgs__msg__LegMotors__Sequence *
motion_msgs__msg__LegMotors__Sequence__create(size_t size)
{
  motion_msgs__msg__LegMotors__Sequence * array = (motion_msgs__msg__LegMotors__Sequence *)malloc(sizeof(motion_msgs__msg__LegMotors__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = motion_msgs__msg__LegMotors__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
motion_msgs__msg__LegMotors__Sequence__destroy(motion_msgs__msg__LegMotors__Sequence * array)
{
  if (array) {
    motion_msgs__msg__LegMotors__Sequence__fini(array);
  }
  free(array);
}
