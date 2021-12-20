/**
 * @file eigen_wrapper.hpp
 * @author Eduard Jaha (jaha.eduard@gmail.com)
 * @brief Header files of the functions
 * @version 0.1
 * @date 2021-12-17
 * @copyright Copyright (c) 2021
 *
 */
#ifndef __EIGEN_WRAPPER__
#define __EIGEN_WRAPPER__

#include <math.h>

#include <Eigen/Dense>
#include <Eigen/Geometry>
#include <cmath>
#include <iostream>

/**
 * @brief Namespace for specific values that were used in the code
 *
 */
namespace {
constexpr int kHalfCircleAngle = 180;
constexpr double kRotateAngle = 90.0;
constexpr double kShearXAngle = 45.0;
constexpr double kShearYAngle = 45.0;
}  // namespace

/**
 * @brief EigenWrapper class. that has all the funtion headers and variables
 */
class EigenWrapper {
 private:
  /**
   * @brief Declaration of variable matrix_
   */
  Eigen::Matrix3d matrix_;

  /**
   * @brief Declaration of variable translate_
   */
  Eigen::Matrix3d translate_;

  /**
   * @brief Declaration of variable scale_
   */
  Eigen::Matrix3d scale_;

  /**
   * @brief Declaration of variable rotate_
   */
  Eigen::Matrix3d rotate_;

  /**
   * @brief Declaration of variable shearY_
   */
  Eigen::Matrix3d shearY_;

  /**
   * @brief Declaration of variable shearX_
   */
  Eigen::Matrix3d shearX_;

  /**
   * @brief Declaration of variable reflectO_
   */
  Eigen::Matrix3d reflectO_;

  /**
   * @brief Declaration of variable reflectY_
   */
  Eigen::Matrix3d reflectY_;

  /**
   * @brief Declaration of variable reflectX_
   */
  Eigen::Matrix3d reflectX_;

 public:
  /**
   * @brief Constructs a new Eigen Wrapper:: Eigen Wrapper object
   * @param identity
   */
  EigenWrapper() = delete;

  /**
   * @brief Construct a new Eigen Wrapper object
   *
   * @param identity
   */
  explicit EigenWrapper(Eigen::Matrix3d identity);

  /**
   * @brief Set the Base Matrix object
   *
   * @param identity
   * @return true
   * @return false
   */
  bool setBaseMatrix(const Eigen::Matrix3d &identity);

  /**
   * @brief Get the Matrix3d object
   *
   * @return Eigen::Matrix3d
   */
  Eigen::Matrix3d getMatrix3d() const;

  /**
   * @brief This function will translate the previous identity matrix on the
   * X(0,2) and Y(1,2)
   *
   * @param Translate
   * @return true
   * @return false
   */
  bool setTranslate(const Eigen::Vector2d &Translate);

  /**
   * @brief Get the Translate object
   *
   * @return Eigen::Matrix3d
   */
  Eigen::Matrix3d getTranslate(void) const;

  /**
   * @brief It multiplies translate_ with the point_Translate
   *
   * @param point_Translate
   * @return Eigen::Vector3d
   */
  Eigen::Vector3d translate(Eigen::Vector3d point_Translate);

  /**
   * @brief This function will set the scale for width and height at the
   * identity matrix at the positions (0,0) and (1,1)
   * @param Scale
   * @return true
   * @return false
   */
  bool setScale(const Eigen::Vector2d &Scale);

  /**
   * @brief Get the Scale object
   *
   * @return Eigen::Matrix3d
   */
  Eigen::Matrix3d getScale(void) const;

  /**
   * @brief It multiplies scale_ with the point_Scale
   *
   * @param point_Scale
   * @return Eigen::Vector3d
   */
  Eigen::Vector3d scale(Eigen::Vector3d point_Scale);

  /**
   * @brief This function will rotate the identity matrix by origin
   *
   * @param degree
   * @return true
   * @return false
   */
  bool setRotate(const double &degree);

  /**
   * @brief Get the Rotate object
   *
   * @return Eigen::Matrix3d
   */
  Eigen::Matrix3d getRotate(void) const;

  /**
   * @brief It multiplies rotate_ with the point_Rotate
   *
   * @param point_Rotate
   * @return Eigen::Vector3d
   */
  Eigen::Vector3d rotate(Eigen::Vector3d point_Rotate);

  /**
   * @brief This function will shear the identity matrix on X direction
   *
   * @param shearX
   * @return true
   * @return false
   */
  bool setShearX(const double &shearX);

  /**
   * @brief Get the Shear X object
   *
   * @return Eigen::Matrix3d
   */
  Eigen::Matrix3d getShearX(void) const;

  /**
   * @brief It multiplies shearX_ with the point_ShearX
   *
   * @param point_ShearX
   * @return Eigen::Vector3d
   */
  Eigen::Vector3d shearX(Eigen::Vector3d point_ShearX);

  /**
   * @brief This function will shear the identity matrix about Y-axis
   *
   * @return true
   * @return false
   */
  bool setShearY(const double &shearY);

  /**
   * @brief Get the Shear Y object
   *
   * @return Eigen::Matrix3d
   */
  Eigen::Matrix3d getShearY(void) const;

  /**
   * @brief It multiplies shearY_ with the point_ShearY
   *
   * @param point_ShearY
   * @return Eigen::Vector3d
   */
  Eigen::Vector3d shearY(Eigen::Vector3d point_ShearY);

  /**
   * @brief This function will reflect the identity matrix about origin
   *
   * @return true
   * @return false
   */
  bool setReflectO();

  /**
   * @brief Get the Reflect O object
   *
   * @return Eigen::Matrix3d
   */
  Eigen::Matrix3d getReflectO(void) const;

  /**
   * @brief It multiplies reflectO_ with the point_ReflectO
   *
   * @param point_ReflectO
   * @return Eigen::Vector3d
   */
  Eigen::Vector3d reflectO(Eigen::Vector3d point_ReflectO);

  /**
   * @brief This function will the reflect the identity matrix about X-axis
   *
   * @return true
   * @return false
   */
  bool setReflectX();

  /**
   * @brief Get the Reflect X object
   *
   * @return Eigen::Matrix3d
   */
  Eigen::Matrix3d getReflectX(void) const;

  /**
   * @brief It multiplies reflectX_ with the point_ReflectX
   *
   * @param point_ReflectX
   * @return Eigen::Vector3d
   */
  Eigen::Vector3d reflectX(Eigen::Vector3d point_ReflectX);

  /**
   * @brief This function will reflect the identity matrix about Y-axis
   *
   * @return true
   * @return false
   */
  bool setReflectY();

  /**
   * @brief Get the Reflect Y object
   *
   * @return Eigen::Matrix3d
   */
  Eigen::Matrix3d getReflectY(void) const;

  /**
   * @brief It multiplies reflectX_ with the point_ReflectX
   *
   * @param point_ReflectY
   * @return Eigen::Vector3d
   */
  Eigen::Vector3d reflectY(Eigen::Vector3d point_ReflectY);
};

#endif  // END __EIGEN_WRAPPER__