/**
 * @file eigen_wrapper.hpp
 * @author Eduard Jaha (jaha.eduard@gmail.com)
 * @brief Header files and definitions of class EigenWrapper
 * @version 0.1
 * @date 2021-12-17
 * @copyright Copyright (c) 2021
 *
 */
#ifndef TRANSFORMATIONS_EIGEN_WRAPPER_H
#define TRANSFORMATIONS_EIGEN_WRAPPER_H

#include <Eigen/Dense>
#include <Eigen/Geometry>
#include <cmath>

/**
 * @brief Anonymous namespace for specific constants that were used in the code
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
   * @brief Declaration of variable translate_, that stores the value of
   * translated matrix
   */
  Eigen::Matrix3d translate_;

  /**
   * @brief Declaration of variable scale_, that stores the value of scaled
   * matrix
   */
  Eigen::Matrix3d scale_;

  /**
   * @brief Declaration of variable rotate_, that stores the value of rotated
   * matrix
   */
  Eigen::Matrix3d rotate_;

  /**
   * @brief Declaration of variable shearX_, that stores the value of sheared X
   * direction matrix
   */
  Eigen::Matrix3d shearX_;

  /**
   * @brief Declaration of variable shearY_, that stores the value of sheared Y
   * direction matrix
   */
  Eigen::Matrix3d shearY_;

  /**
   * @brief Declaration of variable reflectO_, that stores the value of
   * reflected O axis matrix
   */
  Eigen::Matrix3d reflectO_;

  /**
   * @brief Declaration of variable reflectY_, that stores the value of
   * reflected Y axis matrix
   */
  Eigen::Matrix3d reflectY_;

  /**
   * @brief Declaration of variable reflectX_, that stores the value of
   * reflected X axis matrix
   */
  Eigen::Matrix3d reflectX_;

 public:
  /**
   * @brief Deleting 0 argument constructor
   * @param identity, Identity matrix
   */
  EigenWrapper() = delete;

  /**
   * @brief Construct a new Eigen Wrapper object
   *
   * @param identity, Identity matrix
   */
  explicit EigenWrapper(const Eigen::Matrix3d &identity);

  /**
   * @brief Set the Base Matrix object
   *
   * @param identity, Identity matrix
   * @return true, if matrix is returned corrctly
   * @return false, if matrix is returned uncorrectly
   */
  bool SetBaseMatrix(const Eigen::Matrix3d &identity);

  /**
   * @brief Get the Matrix3d object
   *
   * @return Eigen::Matrix3d, a matrix 3x3 that stores the values of
   * SetBaseMatrix and returns them at the Get function
   */
  Eigen::Matrix3d GetMatrix3d() const;

  /**
   * @brief This function will translate the previous identity matrix on the
   * X(0,2) and Y(1,2)
   *
   * @param Translate is a int value that is send to the matrix to translate it
   * @return true, if matrix is returned corrctly
   * @return false, if matrix is returned uncorrectly
   */
  bool SetTranslate(const Eigen::Vector2d &Translate);

  /**
   * @brief Get the Translate object
   *
   * @return Eigen::Matrix3d, a matrix 3x3 that stores the values of
   * SetTranslate and returns them at the Get function
   */
  Eigen::Matrix3d GetTranslate(void) const;

  /**
   * @brief It multiplies translate_ with the point_Translate
   *
   * @param point_Translate, the point that multiplies the 3d matrix
   * @return Eigen::Vector3d, that is the product of matrix multiplied with the
   * point
   */
  Eigen::Vector3d Translate(const Eigen::Vector3d &point_Translate);

  /**
   * @brief This function will set the scale for width and height at the
   * identity matrix at the positions (0,0) and (1,1)
   *
   * @param Scale is a int value that is send to the matrix to scale it
   * @return true, if matrix scale is returned corrctly
   * @return false, if matrix scale is returned uncorrectly
   */
  bool SetScale(const Eigen::Vector2d &Scale);

  /**
   * @brief Get the Scale object
   *
   * @return Eigen::Matrix3d, a matrix 3x3 that stores the values of SetScale
   * and returns them at the Get function
   */
  Eigen::Matrix3d GetScale(void) const;

  /**
   * @brief It multiplies scale_ with the point_Scale
   *
   * @param point_Scale, the point that multiplies the 3d matrix
   * @return Eigen::Vector3d, that is the product of matrix multiplied with the
   * point
   */
  Eigen::Vector3d Scale(const Eigen::Vector3d &point_Scale);

  /**
   * @brief This function will rotate the identity matrix by origin
   *
   * @param degree is a double value that is send to the matrix to rotate it
   * @return true, if matrix rotate is returned corrctly
   * @return false, if matrix rotate is returned uncorrectly
   */
  bool SetRotate(const double &degree);

  /**
   * @brief Get the Rotate object
   *
   * @return Eigen::Matrix3d, a matrix 3x3 that stores the values of SetRotate
   * and returns them at the Get function
   */
  Eigen::Matrix3d GetRotate(void) const;

  /**
   * @brief It multiplies rotate_ with the point_Rotate
   *
   * @param point_Rotate, the point that multiplies the 3d matrix
   * @return Eigen::Vector3d, that is the product of matrix multiplied with the
   * point
   */
  Eigen::Vector3d Rotate(const Eigen::Vector3d &point_Rotate);

  /**
   * @brief This function will shear the identity matrix on X direction
   *
   * @param shearX is a double value that is send to the matrix to shear it in x
   * direction
   * @return true, if matrix shearX is returned corrctly
   * @return false, if matrix shear Xis returned uncorrectly
   */
  bool SetShearX(const double &shearX);

  /**
   * @brief Get the Shear X object
   *
   * @return Eigen::Matrix3d, a matrix 3x3 that stores the values of SetShearX
   * and returns them at the Get function
   */
  Eigen::Matrix3d GetShearX(void) const;

  /**
   * @brief It multiplies shearX_ with the point_ShearX
   *
   * @param point_ShearX, the point that multiplies the 3d matrix
   * @return Eigen::Vector3d, that is the product of matrix multiplied with the
   * point
   */
  Eigen::Vector3d ShearX(const Eigen::Vector3d &point_ShearX);

  /**
   * @brief This function will shear the identity matrix about Y-axis
   *
   * @param shearX is a double value that is send to the matrix to shear it in x
   * direction
   * @return true, if matrix shearYis returned corrctly
   * @return false, if matrix shearY is returned uncorrectly
   */
  bool SetShearY(const double &shearY);

  /**
   * @brief Get the Shear Y object
   *
   * @return Eigen::Matrix3d, a matrix 3x3 that stores the values of SetShearY
   * and returns them at the Get function
   */
  Eigen::Matrix3d GetShearY(void) const;

  /**
   * @brief It multiplies shearY_ with the point_ShearY
   *
   * @param point_ShearY, the point that multiplies the 3d matrix
   * @return Eigen::Vector3d, that is the product of matrix multiplied with the
   * point
   */
  Eigen::Vector3d ShearY(const Eigen::Vector3d &point_ShearY);

  /**
   * @brief This function will reflect the identity matrix about origin
   *
   * @return true, if matrix reflectO is returned corrctly
   * @return false, if matrix reflect O is returned uncorrectly
   */
  bool SetReflectO();

  /**
   * @brief Get the Reflect O object
   *
   * @return Eigen::Matrix3d, a matrix 3x3 that stores the values of SetReflectO
   * and returns them at the Get function
   */
  Eigen::Matrix3d GetReflectO(void) const;

  /**
   * @brief It multiplies reflectO_ with the point_ReflectO
   *
   * @param point_ReflectO the point that multiplies the 3d matrix
   * @return Eigen::Vector3d, that is the product of matrix multiplied with the
   * point
   */
  Eigen::Vector3d ReflectO(const Eigen::Vector3d &point_ReflectO);

  /**
   * @brief This function will the reflect the identity matrix about X-axis
   *
   * @return true, if matrix reflectX is returned corrctly
   * @return false, if matrix reflectX is returned uncorrectly
   */
  bool SetReflectX();

  /**
   * @brief Get the Reflect X object
   *
   * @return Eigen::Matrix3d, a matrix 3x3 that stores the values of SetReflectX
   * and returns them at the Get function
   */
  Eigen::Matrix3d GetReflectX(void) const;

  /**
   * @brief It multiplies reflectX_ with the point_ReflectX
   *
   * @param point_ReflectX the point that multiplies the 3d matrix
   * @return Eigen::Vector3d, that is the product of matrix multiplied with the
   * point
   */
  Eigen::Vector3d ReflectX(const Eigen::Vector3d &point_ReflectX);

  /**
   * @brief This function will reflect the identity matrix about Y-axis
   *
   * @return true, if matrix reflectY is returned corrctly
   * @return false, if matrix reflectY is returned uncorrectly
   */
  bool SetReflectY();

  /**
   * @brief Get the Reflect Y object
   *
   * @return Eigen::Matrix3d, a matrix 3x3 that stores the values of SetReflectY
   * and returns them at the Get function
   */
  Eigen::Matrix3d GetReflectY(void) const;

  /**
   * @brief It multiplies reflectX_ with the point_ReflectX
   *
   * @param point_ReflectY, a point that multiplies the 3d matrix
   * @return Eigen::Vector3d, that is the product of matrix multiplied with the
   * point
   */
  Eigen::Vector3d ReflectY(const Eigen::Vector3d &point_ReflectY);
};

#endif  // TRANSFORMATIONS_EIGEN_WRAPPER_H
