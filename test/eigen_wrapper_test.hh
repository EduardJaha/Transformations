/**
 * @file eigen_wrapper_test.hh
 * @author Eduard Jaha (jaha.eduard@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-12-17
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef __EIGEN_WRAPPER_TEST__
#define __EIGEN_WRAPPER_TEST__

#include <gtest/gtest.h>
#include <math.h>

#include <Eigen/Dense>
#include <Eigen/Geometry>
#include <cmath>
#include <iostream>

#include "EigenWrapper/eigen_wrapper.hpp"

/**
 * @brief Class to execute Tests fixtures of EigenWrapper
 */
class EigenWrapperTest : public ::testing ::Test {
 public:
  /**
   * @brief Variable of EigenWrapper
   *
   */
  EigenWrapper eigen_wrapper{Eigen::Matrix3d::Identity()};

 protected:
  EigenWrapperTest() {}
  ~EigenWrapperTest() = default;
};

#endif