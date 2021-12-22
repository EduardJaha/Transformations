/**
 * @file eigen_wrapper.cc
 * @author Eduard Jaha (jaha.eduard@gmail.com)
 * @brief Functions from class EigenWrapper, that are implemented to be used in main
 * @version 0.1
 * @date 2021-12-17
 * @copyright Copyright (c) 2021
 */
#include "EigenWrapper/eigen_wrapper.hpp"

#include <iostream>

EigenWrapper::EigenWrapper(const Eigen::Matrix3d &identity) {
  if (!this->SetBaseMatrix(identity)) {
    std::cerr << "Error on setting up the object" << std::endl;
  }
}

bool EigenWrapper::SetBaseMatrix(const Eigen::Matrix3d &identity) {
  this->matrix_ = identity;

  return true;
}

Eigen::Matrix3d EigenWrapper::GetMatrix3d(void) const { return this->matrix_; }

bool EigenWrapper::SetTranslate(const Eigen::Vector2d &Translate) {
  this->translate_ = this->matrix_;
  this->translate_(0, 2) = Translate(0);
  this->translate_(1, 2) = Translate(1);

  return true;
}

Eigen::Matrix3d EigenWrapper::GetTranslate(void) const {
  return this->translate_;
}

Eigen::Vector3d EigenWrapper::Translate(
    const Eigen::Vector3d &point_Translate) {
  return this->GetTranslate() * point_Translate;
}

bool EigenWrapper::SetScale(const Eigen::Vector2d &Scale) {
  this->scale_ = this->matrix_;
  this->scale_(0, 0) = Scale(0);
  this->scale_(1, 1) = Scale(1);

  return true;
}

Eigen::Matrix3d EigenWrapper::GetScale(void) const { return this->scale_; }

Eigen::Vector3d EigenWrapper::Scale(const Eigen::Vector3d &point_Scale) {
  return this->GetScale() * point_Scale;
}

bool EigenWrapper::SetRotate(const double &angle) {
  this->rotate_ = this->matrix_;
  this->rotate_(0, 0) = std::cos((angle * (M_PI / kHalfCircleAngle)));
  this->rotate_(0, 1) = std::sin((angle * (M_PI / kHalfCircleAngle)));
  this->rotate_(1, 0) = -std::sin((angle * (M_PI / kHalfCircleAngle)));
  this->rotate_(1, 1) = std::cos((angle * (M_PI / kHalfCircleAngle)));

  return true;
}

Eigen::Matrix3d EigenWrapper::GetRotate(void) const { return this->rotate_; }

Eigen::Vector3d EigenWrapper::Rotate(const Eigen::Vector3d &point_Rotate) {
  return this->GetRotate() * point_Rotate;
}

bool EigenWrapper::SetShearX(const double &shearX) {
  this->shearX_ = this->matrix_;
  this->shearX_(0, 1) = std::tan(shearX * (M_PI / kHalfCircleAngle));

  return true;
}

Eigen::Matrix3d EigenWrapper::GetShearX(void) const { return this->shearX_; }

Eigen::Vector3d EigenWrapper::ShearX(const Eigen::Vector3d &point_ShearX) {
  return this->GetShearX() * point_ShearX;
}

bool EigenWrapper::SetShearY(const double &shearY) {
  this->shearY_ = this->matrix_;
  this->shearY_(1, 0) = std::tan(shearY * (M_PI / kHalfCircleAngle));

  return true;
}

Eigen::Matrix3d EigenWrapper::GetShearY(void) const { return this->shearY_; }

Eigen::Vector3d EigenWrapper::ShearY(const Eigen::Vector3d &point_ShearY) {
  return this->GetShearY() * point_ShearY;
}

bool EigenWrapper::SetReflectO() {
  this->reflectO_ = this->matrix_;
  this->reflectO_(0, 0) = -1;
  this->reflectO_(1, 1) = -1;

  return true;
}

Eigen::Matrix3d EigenWrapper::GetReflectO(void) const {
  return this->reflectO_;
}

Eigen::Vector3d EigenWrapper::ReflectO(const Eigen::Vector3d &point_ReflectO) {
  return this->GetReflectO() * point_ReflectO;
}

bool EigenWrapper::SetReflectX() {
  this->reflectX_ = this->matrix_;
  this->reflectX_(0, 0) = 1;
  this->reflectX_(1, 1) = -1;

  return true;
}

Eigen::Matrix3d EigenWrapper::GetReflectX(void) const {
  return this->reflectX_;
}

Eigen::Vector3d EigenWrapper::ReflectX(const Eigen::Vector3d &point_ReflectX) {
  return this->GetReflectX() * point_ReflectX;
}

bool EigenWrapper::SetReflectY() {
  this->reflectY_ = this->matrix_;
  this->reflectY_(0, 0) = -1;
  this->reflectY_(1, 1) = 1;

  return true;
}

Eigen::Matrix3d EigenWrapper::GetReflectY(void) const {
  return this->reflectY_;
}

Eigen::Vector3d EigenWrapper::ReflectY(const Eigen::Vector3d &point_ReflectY) {
  return this->GetReflectY() * point_ReflectY;
}
