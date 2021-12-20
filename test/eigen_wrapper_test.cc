/**
 * @file eigen_wrapper_test.cc
 * @author Eduard Jaha (jaha.eduard@gmail.com)
 * @brief Test functions that are implemented
 * @version 0.1
 * @date 2021-12-17
 * @copyright Copyright (c) 2021
 */
#include "eigen_wrapper_test.hh"

/**
 * @brief Construct a new test f object. Check if setTranslate is executed,
 *        by comparing the boolean if it's true.
 */
TEST_F(EigenWrapperTest, setTranslate) {
  Eigen::Vector2d translateT;
  translateT << 2, 2;
  EXPECT_TRUE(this->eigen_wrapper.setTranslate(translateT));
}
/**
 * @brief Construct a new test f object. Check if the matrix in the previous
 * test, was set correctly. _translate matrix is compared with the getTranslate
 * matrix in file eigen_wrapper.cc
 */
TEST_F(EigenWrapperTest, getTranslate) {
  Eigen::Matrix3d _translate;
  _translate << 1, 0, 2, 0, 1, 2, 0, 0, 1;
  ASSERT_EQ(_translate, this->eigen_wrapper.getTranslate());
}
/**
 * @brief Construct a new test f object. translate multiplies the transform
 * matrix with a point to a given new transformed point. It tests if _result
 * matrix is equal to what translate returns
 */
TEST_F(EigenWrapperTest, translate) {
  Eigen::Vector3d _translate, _result;
  _translate << 0, 0, 1;
  _result << 2, 2, 1;

  ASSERT_EQ(_result, eigen_wrapper.translate(_translate));
}

/**
 * @brief Construct a new test f object. Check if setScale is executed,
 *        by comparing the boolean if it's true.
 */
TEST_F(EigenWrapperTest, setScale) {
  Eigen::Vector2d scaleT;
  scaleT << 3, 3;
  EXPECT_TRUE(this->eigen_wrapper.setScale(scaleT));
}
/**
 * @brief Construct a new test f object. Check if the matrix in the previous
 * test, was set correctly. _scale matrix is compared with the getScale matrix
 * in file eigen_wrapper.cc
 */
TEST_F(EigenWrapperTest, getScale) {
  Eigen::Matrix3d _scale;
  _scale << 3, 0, 0, 0, 3, 0, 0, 0, 1;
  ASSERT_EQ(_scale, this->eigen_wrapper.getScale());
}
/**
 * @brief Construct a new test f object. scale multiplies the transform matrix
 * with a point to a given new transformed point. It tests if _result matrix is
 * equal to what scale returns
 */
TEST_F(EigenWrapperTest, scale) {
  Eigen::Vector3d _scale, _result;
  _scale << 1, 1, 1;
  _result << 3, 3, 1;

  ASSERT_EQ(_result, eigen_wrapper.scale(_scale));
}

/**
 * @brief Construct a new test f object. Check if setRotate is executed,
 *        by comparing the boolean if it's true.
 */
TEST_F(EigenWrapperTest, setRotate) {
  EXPECT_TRUE(this->eigen_wrapper.setRotate(kRotateAngle));
}
/**
 * @brief Construct a new test f object. Check if the matrix in the previous
 * test, was set correctly. _rotate matrix is compared with the getRotate matrix
 * in file eigen_wrapper.cc
 */
TEST_F(EigenWrapperTest, getRotate) {
  Eigen::Matrix3d _rotate;
  _rotate << cos((M_PI / kHalfCircleAngle) * kRotateAngle),
      sin((M_PI / kHalfCircleAngle) * kRotateAngle), 0,
      -sin((M_PI / kHalfCircleAngle) * kRotateAngle),
      cos((M_PI / kHalfCircleAngle) * kRotateAngle), 0, 0, 0, 1;
  ASSERT_EQ(_rotate, this->eigen_wrapper.getRotate());
}
/**
 * @brief Construct a new test f object. rotate multiplies the transform matrix
 * with a point to a given new transformed point. It tests if _result matrix is
 * equal to what rotate returns.
 */
TEST_F(EigenWrapperTest, rotate) {
  Eigen::Vector3d _rotate, _result;
  _rotate << 1, 0, 1;
  _result << cos((M_PI / kHalfCircleAngle) * kRotateAngle) * 1, -1, 1;

  ASSERT_EQ(_result, this->eigen_wrapper.rotate(_rotate));
}

/**
 * @brief Construct a new test f object. Check if setShearX is executed,
 *        by comparing the boolean if it's true.
 */
TEST_F(EigenWrapperTest, setShearX) {
  EXPECT_TRUE(this->eigen_wrapper.setShearX(kShearXAngle));
}
/**
 * @brief Construct a new test f object. Check if the matrix in the previous
 * test, was set correctly. _shearX matrix is compared with the getShearX matrix
 * in file eigen_wrapper.cc
 */
TEST_F(EigenWrapperTest, getShearX) {
  Eigen::Matrix3d _shearX;
  _shearX << 1, tan(kShearXAngle * (M_PI / kHalfCircleAngle)), 0, 0, 1, 0, 0, 0,
      1;
  ASSERT_EQ(_shearX, this->eigen_wrapper.getShearX());
}
/**
 * @brief Construct a new test f object. shearX multiplies the transform matrix
 * with a point to a given new transformed point. It tests if _result matrix is
 * equal to what shearX returns.
 */
TEST_F(EigenWrapperTest, shearX) {
  Eigen::Vector3d _shearX, _result;
  _shearX << 1, 1, 1;
  _result << 2, 1, 1;

  ASSERT_EQ(_result, eigen_wrapper.shearX(_shearX));
}

/**
 * @brief Construct a new test f object. Check if setShearY is executed,
 *        by comparing the boolean if it's true.
 */
TEST_F(EigenWrapperTest, setShearY) {
  EXPECT_TRUE(this->eigen_wrapper.setShearY(kShearYAngle));
}
/**
 * @brief Construct a new test f object. Check if the matrix in the previous
 * test, was set correctly. _shearY matrix is compared with the getShearY matrix
 * in file eigen_wrapper.cc
 */
TEST_F(EigenWrapperTest, getShearY) {
  Eigen::Matrix3d _shearY;
  _shearY << 1, 0, 0, tan(kShearYAngle * (M_PI / kHalfCircleAngle)), 1, 0, 0, 0,
      1;
  ASSERT_EQ(_shearY, this->eigen_wrapper.getShearY());
}
/**
 * @brief Construct a new test f object. shearY multiplies the transform matrix
 * with a point to a given new transformed point. It tests if _result matrix is
 * equal to what shearY returns.
 */
TEST_F(EigenWrapperTest, shearY) {
  Eigen::Vector3d _shearY, _result;
  _shearY << 1, 1, 1;
  _result << 1, 2, 1;

  ASSERT_EQ(_result, eigen_wrapper.shearY(_shearY));
}

/**
 * @brief Construct a new test f object. Check if setReflectO is executed,
 *        by comparing the boolean if it's true.
 */
TEST_F(EigenWrapperTest, setReflectO) {
  ASSERT_TRUE(this->eigen_wrapper.setReflectO());
}
/**
 * @brief Construct a new test f object. Check if the matrix in the previous
 * test, was set correctly. _reflectO matrix is compared with the getReflectO
 * matrix in file eigen_wrapper.cc
 */
TEST_F(EigenWrapperTest, getReflectO) {
  Eigen::Matrix3d _reflectO;
  _reflectO << -1, 0, 0, 0, -1, 0, 0, 0, 1;
  ASSERT_EQ(_reflectO, this->eigen_wrapper.getReflectO());
}
/**
 * @brief Construct a new test f object. reflectO multiplies the transform
 * matrix with a point to a given new transformed point. It tests if _result
 * matrix is equal to what reflectO returns.
 */
TEST_F(EigenWrapperTest, reflectO) {
  Eigen::Vector3d _reflectO, _result;
  _reflectO << 1, 1, 1;
  _result << -1, -1, 1;

  ASSERT_EQ(_result, this->eigen_wrapper.reflectO(_reflectO));
}

/**
 * @brief Construct a new test f object. Check if setReflectX is executed,
 *        by comparing the boolean if it's true.
 */
TEST_F(EigenWrapperTest, setReflectX) {
  ASSERT_TRUE(this->eigen_wrapper.setReflectX());
}
/**
 * @brief Construct a new test f object. Check if the matrix in the previous
 * test, was set correctly. _reflectX matrix is compared with the getReflectX
 * matrix in file eigen_wrapper.cc
 */
TEST_F(EigenWrapperTest, getReflectX) {
  Eigen::Matrix3d _reflectX;
  _reflectX << 1, 0, 0, 0, -1, 0, 0, 0, 1;
  ASSERT_EQ(_reflectX, this->eigen_wrapper.getReflectX());
}
/**
 * @brief Construct a new test f object. reflectX multiplies the transform
 * matrix with a point to a given new transformed point. It tests if _result
 * matrix is equal to what reflectX returns.
 */
TEST_F(EigenWrapperTest, reflectX) {
  Eigen::Vector3d _reflectX, _result;
  _reflectX << 1, 1, 1;
  _result << 1, -1, 1;

  ASSERT_EQ(_result, this->eigen_wrapper.reflectX(_reflectX));
}

/**
 * @brief Construct a new test f object. Check if setReflectY is executed,
 *        by comparing the boolean if it's true.
 */
TEST_F(EigenWrapperTest, setReflectY) {
  ASSERT_TRUE(this->eigen_wrapper.setReflectY());
}
/**
 * @brief Construct a new test f object. Check if the matrix in the previous
 * test, was set correctly. _reflectY matrix is compared with the getReflectY
 * matrix in file eigen_wrapper.cc
 */
TEST_F(EigenWrapperTest, getReflectY) {
  Eigen::Matrix3d _reflectY;
  _reflectY << -1, 0, 0, 0, 1, 0, 0, 0, 1;
  ASSERT_EQ(_reflectY, this->eigen_wrapper.getReflectY());
}
/**
 * @brief Construct a new test f object. reflectY multiplies the transform
 * matrix with a point to a given new transformed point. It tests if _result
 * matrix is equal to what reflectY returns.
 */
TEST_F(EigenWrapperTest, reflectY) {
  Eigen::Vector3d _reflectY, _result;
  _reflectY << 1, 1, 1;
  _result << -1, 1, 1;

  ASSERT_EQ(_result, this->eigen_wrapper.reflectY(_reflectY));
}

/**
 * @brief All the test are runned in main
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}