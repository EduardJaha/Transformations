#ifndef __EIGEN_WRAPPER_TEST__
#define __EIGEN_WRAPPER_TEST__

#include <gtest/gtest.h>
#include <math.h>
#include <cmath>
#include <iostream>
#include <Eigen/Eigen>
#include <Eigen/Dense>
#include <Eigen/Geometry>
#include "eigen_wrapper.hpp"

class EigenWrapperTest : public ::testing ::Test
{
public:
    EigenWrapper base{Eigen::Matrix3d::Identity()};

protected:
    EigenWrapperTest() {}
    ~EigenWrapperTest() = default;

}; 

#endif