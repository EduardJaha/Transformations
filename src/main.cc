/**
 * @file main.cc
 * @author Eduard Jaha (jaha.eduard@gmail.com)
 * @brief The functions that were created in eigen_wrapper.cc will be runned in
 * main
 * @version 0.1
 * @date 2021-12-17
 * @copyright Copyright (c) 2021
 */
#include <iostream>

#include "EigenWrapper/eigen_wrapper.hpp"

/**
 * @brief Exeutes all the transformed matrixes and the identity matrix
 *
 * @param argc the number of arguments being passed in program from the command
 * line
 * @param argv the array of arguments
 * @return int
 */
int main(int argc, char **argv) {
  std::cout << std::endl;
  std::cout << "#### Identity matrix ####" << std::endl;
  EigenWrapper matrix(Eigen::Matrix3d::Identity());
  std::cout << matrix.GetMatrix3d() << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Translate ####" << std::endl;
  matrix.SetTranslate(Eigen::Vector2d(2, 2));
  std::cout << matrix.GetTranslate() << std::endl;
  std::cout << matrix.Translate(Eigen::Vector3d(1, 1, 1)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Scale about origin ####" << std::endl;
  matrix.SetScale(Eigen::Vector2d(1, 2));
  std::cout << matrix.GetScale() << std::endl;
  std::cout << matrix.Scale(Eigen::Vector3d(1, 2, 3)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Rotate about origin ####" << std::endl;
  matrix.SetRotate(kRotateAngle);
  std::cout << matrix.GetRotate() << std::endl;
  std::cout << matrix.Rotate(Eigen::Vector3d(1, 0, 0)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Shear in x-axis ####" << std::endl;
  matrix.SetShearX(kShearXAngle);
  std::cout << matrix.GetShearX() << std::endl;
  std::cout << matrix.ShearX(Eigen::Vector3d(2, 0, 1)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Shear in y-axis ####" << std::endl;
  matrix.SetShearY(kShearYAngle);
  std::cout << matrix.GetShearY() << std::endl;
  std::cout << matrix.ShearY(Eigen::Vector3d(1, 1, 0)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Reflect about origin ####" << std::endl;
  matrix.SetReflectO();
  std::cout << matrix.GetReflectO() << std::endl;
  std::cout << matrix.ReflectO(Eigen::Vector3d(0, 0, 1)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Reflect about x-axis ####" << std::endl;
  matrix.SetReflectX();
  std::cout << matrix.GetReflectX() << std::endl;
  std::cout << matrix.ReflectX(Eigen::Vector3d(0, 1, 0)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  std::cout << "#### Reflect about y-axis ####" << std::endl;
  matrix.SetReflectY();
  std::cout << matrix.GetReflectY() << std::endl;
  std::cout << matrix.ReflectY(Eigen::Vector3d(0, 1, 1)) << std::endl;
  std::cout << "#########################\n" << std::endl;

  return 0;
}
