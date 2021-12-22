/**
 * @file eigen_wrapper_test.hh
 * @author Eduard Jaha (jaha.eduard@gmail.com)
 * @brief The header files of class EigenWrapperTest for testing the matrixes in
 * eigen_wrapper_test.cc
 * @version 0.1
 * @date 2021-12-17
 *
 * @copyright Copyright (c) 2021
 *
 */
#ifndef TRANSFORMATIONS_EIGEN_WRAPPER_TEST_H
#define TRANSFORMATIONS_EIGEN_WRAPPER_TEST_H

#include <gtest/gtest.h>

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
  /**
   * @brief Construct a new Eigen Wrapper Test object
   *
   */
  EigenWrapperTest() {}

  /**
   * @brief Destroy the Eigen Wrapper Test object
   *
   */
  ~EigenWrapperTest() = default;
};

#endif  // TRANSFORMATIONS_EIGEN_WRAPPER_TEST__
