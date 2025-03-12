/* Copyright © 2020 Advanced Micro Devices, Inc. All rights reserved */

#ifndef _SIFT_CHIPID_H
#define _SIFT_CHIPID_H

#include <stdbool.h>

typedef enum {
  SIFT_CHIPID_NAVI10_W5700X = 0X7310,
  SIFT_CHIPID_NAVI10_W5700 = 0X7312,
  SIFT_CHIPID_NAVI10_5700 = 0X731B,
  SIFT_CHIPID_NAVI10_5600 = 0X731F,
  SIFT_CHIPID_NAVI21_V620 = 0X73A1,
  SIFT_CHIPID_NAVI21_W6900X = 0X73A2,
  SIFT_CHIPID_NAVI21_W6800 = 0X73A3,
  SIFT_CHIPID_NAVI21_6950XT = 0X73A5,
  SIFT_CHIPID_NAVI21_W6800X = 0X73AB,
  SIFT_CHIPID_NAVI21_V620MX = 0X73AE,
  SIFT_CHIPID_NAVI21_6900XT = 0X73AF,
  SIFT_CHIPID_NAVI21_6800XT = 0X73BF,
  SIFT_CHIPID_NAVI31_W7900 = 0X7448,
  SIFT_CHIPID_NAVI31_7900XT = 0X744C,
  SIFT_CHIPID_NAVI31_W7800 = 0X745E,
  SIFT_CHIPID_VEGA20_INSTINCT = 0X66A0,
  SIFT_CHIPID_VEGA20_MI50 = 0X66A1,
  SIFT_CHIPID_VEGA20 = 0X66A2,
  SIFT_CHIPID_VEGA20_VEGAII = 0X66A3,
  SIFT_CHIPID_VEGA20_VII = 0X66AF,
  SIFT_CHIPID_MI100_0 = 0X7388,
  SIFT_CHIPID_MI100_1 = 0X738C,
  SIFT_CHIPID_MI100_2 = 0X738E,
  SIFT_CHIPID_MI210 = 0X740F,
  SIFT_CHIPID_MI250X = 0X7408,
  SIFT_CHIPID_MI250X_MI250 = 0X740C,
  SIFT_CHIPID_MI300X = 0X74A1,
  SIFT_CHIPID_MI300X_SRIOV = 0X74B5,
  SIFT_CHIPID_MI300X_HF = 0X74A9,
  SIFT_CHIPID_MI300X_HF_SRIOV = 0X74BD,
  SIFT_CHIPID_MI300A = 0X74A0,
  SIFT_CHIPID_MI300A_SRIOV = 0X74B4,
  SIFT_CHIPID_MI325X = 0x74A5,
  SIFT_CHIPID_MI325X_SRIOV = 0x74B9,
} sift_chipid_t;

/// @brief Returns true if the id passed in matches a VEGA20 PCI Device ID
///
/// @param id sift_chipid_t to evaluate
/// @returns a bool (true if ID matches, false otherwise)
static inline bool is_vega20(sift_chipid_t id)
{
  switch (id) {
    case SIFT_CHIPID_VEGA20_INSTINCT:
      return true;
    case SIFT_CHIPID_VEGA20_MI50:
      return true;
    case SIFT_CHIPID_VEGA20:
      return true;
    case SIFT_CHIPID_VEGA20_VEGAII:
      return true;
    case SIFT_CHIPID_VEGA20_VII:
      return true;
    default:
      return false;
  }
}

/// @brief Returns true if the id passed in matches a MI100 PCI Device ID
///
/// @param id sift_chipid_t to evaluate
/// @returns a bool (true if ID matches, false otherwise)
static inline bool is_mi100(sift_chipid_t id)
{
  switch (id) {
    case SIFT_CHIPID_MI100_0:
      return true;
    case SIFT_CHIPID_MI100_1:
      return true;
    case SIFT_CHIPID_MI100_2:
      return true;
    default:
      return false;
  }
}

/// @brief Returns true if the id passed in matches a NAVI10 PCI Device ID
///
/// @param id sift_chipid_t to evaluate
/// @returns a bool (true if ID matches, false otherwise)
static inline bool is_navi10(sift_chipid_t id)
{
  switch (id) {
    case SIFT_CHIPID_NAVI10_W5700X:
      return true;
    case SIFT_CHIPID_NAVI10_W5700:
      return true;
    case SIFT_CHIPID_NAVI10_5700:
      return true;
    case SIFT_CHIPID_NAVI10_5600:
      return true;
    default:
      return false;
  }
}

/// @brief Returns true if the id passed in matches a NAVI21 PCI Device ID
///
/// @param id sift_chipid_t to evaluate
/// @returns a bool (true if ID matches, false otherwise)
static inline bool is_navi21(sift_chipid_t id)
{
  switch (id) {
    case SIFT_CHIPID_NAVI21_V620:
      return true;
    case SIFT_CHIPID_NAVI21_W6900X:
      return true;
    case SIFT_CHIPID_NAVI21_W6800:
      return true;
    case SIFT_CHIPID_NAVI21_6950XT:
      return true;
    case SIFT_CHIPID_NAVI21_W6800X:
      return true;
    case SIFT_CHIPID_NAVI21_V620MX:
      return true;
    case SIFT_CHIPID_NAVI21_6900XT:
      return true;
    case SIFT_CHIPID_NAVI21_6800XT:
      return true;
    default:
      return false;
  }
}

/// @brief Returns true if the id passed in matches a NAVI31 PCI Device ID
///
/// @param id sift_chipid_t to evaluate
/// @returns a bool (true if ID matches, false otherwise)
static inline bool is_navi31(sift_chipid_t id)
{
  switch (id) { 
    case SIFT_CHIPID_NAVI31_W7900:
      return true;
    case SIFT_CHIPID_NAVI31_7900XT:
      return true;
    case SIFT_CHIPID_NAVI31_W7800:
      return true;
    default:
      return false;
  }
}

/// @brief Returns true if the id passed in matches a MI200 PCI Device ID
///
/// @param id sift_chipid_t to evaluate
/// @returns a bool (true if ID matches, false otherwise)
static inline bool is_mi200(sift_chipid_t id)
{
  switch (id) {
    case SIFT_CHIPID_MI210:
      return true;
    case SIFT_CHIPID_MI250X:
      return true;
    case SIFT_CHIPID_MI250X_MI250:
      return true;
    default:
      return false;
  }
}

/// @brief Returns true if the id passed in matches a MI300X PCI Device ID
///
/// @param id sift_chipid_t to evaluate
/// @returns a bool (true if ID matches, false otherwise)
static inline bool is_mi300x(sift_chipid_t id)
{
  switch (id) {
    case SIFT_CHIPID_MI300X:
      return true;
    case SIFT_CHIPID_MI300X_SRIOV:
      return true;
    default:
      return false;
  }
}

/// @brief Returns true if the id passed in matches a MI300X HF PCI Device ID
///
/// @param id sift_chipid_t to evaluate
/// @returns a bool (true if ID matches, false otherwise)
static inline bool is_mi300x_hf(sift_chipid_t id)
{
  switch (id) {
    case SIFT_CHIPID_MI300X_HF:
      return true;
    case SIFT_CHIPID_MI300X_HF_SRIOV:
      return true;
    default:
      return false;
  }
}

/// @brief Returns true if the id passed in matches a MI300A PCI Device ID
///
/// @param id sift_chipid_t to evaluate
/// @returns a bool (true if ID matches, false otherwise)
static inline bool is_mi300a(sift_chipid_t id)
{
  switch (id) {
    case SIFT_CHIPID_MI300A:
      return true;
    case SIFT_CHIPID_MI300A_SRIOV:
      return true;
    default:
      return false;
  }
}

/// @brief Returns true if the id passed in matches a MI325X PCI Device ID
///
/// @param id sift_chipid_t to evaluate
/// @returns a bool (true if ID matches, false otherwise)
static inline bool is_mi325x(sift_chipid_t id)
{
  switch (id) {
    case SIFT_CHIPID_MI325X:
      return true;
    case SIFT_CHIPID_MI325X_SRIOV:
      return true;
    default:
      return false;
  }
}

/// @brief Returns true if the id passed in matches a MI300 PCI Device ID
///
/// @param id sift_chipid_t to evaluate
/// @returns a bool (true if ID matches, false otherwise)
static inline bool is_mi300(sift_chipid_t id)
{
  return is_mi300a(id) || is_mi300x(id) || is_mi300x_hf(id);
}

/// @brief Returns true if the id passed in matches a MI3XX PCI Device ID
///
/// @param id sift_chipid_t to evaluate
/// @returns a bool (true if ID matches, false otherwise)
static inline bool is_mi3xx(sift_chipid_t id)
{
  return is_mi300(id) || is_mi325x(id) || is_mi300x_hf(id);
}

#endif  // _EMBERS_AMDGPU_CHIPID_H_
