// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motion_msgs:msg/MotionCtrl.idl
// generated code does not contain a copyright notice
#include "motion_msgs/msg/detail/motion_ctrl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
motion_msgs__msg__MotionCtrl__init(motion_msgs__msg__MotionCtrl * msg)
{
  if (!msg) {
    return false;
  }
  // cmd_id
  // value
  return true;
}

void
motion_msgs__msg__MotionCtrl__fini(motion_msgs__msg__MotionCtrl * msg)
{
  if (!msg) {
    return;
  }
  // cmd_id
  // value
}

motion_msgs__msg__MotionCtrl *
motion_msgs__msg__MotionCtrl__create()
{
  motion_msgs__msg__MotionCtrl * msg = (motion_msgs__msg__MotionCtrl *)malloc(sizeof(motion_msgs__msg__MotionCtrl));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motion_msgs__msg__MotionCtrl));
  bool success = motion_msgs__msg__MotionCtrl__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
motion_msgs__msg__MotionCtrl__destroy(motion_msgs__msg__MotionCtrl * msg)
{
  if (msg) {
    motion_msgs__msg__MotionCtrl__fini(msg);
  }
  free(msg);
}


bool
motion_msgs__msg__MotionCtrl__Sequence__init(motion_msgs__msg__MotionCtrl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  motion_msgs__msg__MotionCtrl * data = NULL;
  if (size) {
    data = (motion_msgs__msg__MotionCtrl *)calloc(size, sizeof(motion_msgs__msg__MotionCtrl));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motion_msgs__msg__MotionCtrl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motion_msgs__msg__MotionCtrl__fini(&data[i - 1]);
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
motion_msgs__msg__MotionCtrl__Sequence__fini(motion_msgs__msg__MotionCtrl__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      motion_msgs__msg__MotionCtrl__fini(&array->data[i]);
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

motion_msgs__msg__MotionCtrl__Sequence *
motion_msgs__msg__MotionCtrl__Sequence__create(size_t size)
{
  motion_msgs__msg__MotionCtrl__Sequence * array = (motion_msgs__msg__MotionCtrl__Sequence *)malloc(sizeof(motion_msgs__msg__MotionCtrl__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = motion_msgs__msg__MotionCtrl__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
motion_msgs__msg__MotionCtrl__Sequence__destroy(motion_msgs__msg__MotionCtrl__Sequence * array)
{
  if (array) {
    motion_msgs__msg__MotionCtrl__Sequence__fini(array);
  }
  free(array);
}
