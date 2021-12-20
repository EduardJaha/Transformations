/**
 * @file main.cc
 * @author Eduard Jaha (jaha.eduard@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-12-17
 * @copyright Copyright (c) 2021
 */
#include "EigenWrapper/eigen_wrapper.hpp"

/**
 * @brief Exeutes all the transformed matrixes and the identity matrix
 *
 * @return int
 */
int main() {
  std::cout << "#### Identity matrix ####" << std::endl;
  EigenWrapper matrix(Eigen::Matrix3d::Identity());
  std::cout << matrix.getMatrix3d() << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Translate ####" << std::endl;
  matrix.setTranslate(Eigen::Vector2d(2, 2));
  std::cout << matrix.getTranslate() << std::endl;
  std::cout << matrix.translate(Eigen::Vector3d(1, 1, 1)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Scale about origin ####" << std::endl;
  matrix.setScale(Eigen::Vector2d(1, 2));
  std::cout << matrix.getScale() << std::endl;
  std::cout << matrix.scale(Eigen::Vector3d(1, 2, 3)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Rotate about origin ####" << std::endl;
  matrix.setRotate(kRotateAngle);
  std::cout << matrix.getRotate() << std::endl;
  std::cout << matrix.rotate(Eigen::Vector3d(1, 0, 0)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Shear in x-axis ####" << std::endl;
  matrix.setShearX(kShearXAngle);
  std::cout << matrix.getShearX() << std::endl;
  std::cout << matrix.shearX(Eigen::Vector3d(2, 0, 1)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Shear in y-axis ####" << std::endl;
  matrix.setShearY(kShearYAngle);
  std::cout << matrix.getShearY() << std::endl;
  std::cout << matrix.shearY(Eigen::Vector3d(1, 1, 0)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Reflect about origin ####" << std::endl;
  matrix.setReflectO();
  std::cout << matrix.getReflectO() << std::endl;
  std::cout << matrix.reflectO(Eigen::Vector3d(0, 0, 1)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Reflect about x-axis ####" << std::endl;
  matrix.setReflectX();
  std::cout << matrix.getReflectX() << std::endl;
  std::cout << matrix.reflectX(Eigen::Vector3d(0, 1, 0)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Reflect about y-axis ####" << std::endl;
  matrix.setReflectY();
  std::cout << matrix.getReflectY() << std::endl;
  std::cout << matrix.reflectY(Eigen::Vector3d(0, 1, 1)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  return 0;
}