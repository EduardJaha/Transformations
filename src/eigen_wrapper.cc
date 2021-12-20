/**
 * @file eigen_wrapper.cc
 * @author Eduard Jaha (jaha.eduard@gmail.com)
 * @brief Functions that are implemented
 * @version 0.1
 * @date 2021-12-17
 * @copyright Copyright (c) 2021
 */
#include "EigenWrapper/eigen_wrapper.hpp"

EigenWrapper::EigenWrapper(Eigen::Matrix3d identity) {
  if (!this->setBaseMatrix(identity)) {
    std::cerr << "Error on setting up the object" << std::endl;
  }
}
bool EigenWrapper::setBaseMatrix(const Eigen::Matrix3d &identity) {
  this->matrix_ = identity;

  return true;
}
Eigen::Matrix3d EigenWrapper::getMatrix3d(void) const { return this->matrix_; }

bool EigenWrapper::setTranslate(const Eigen::Vector2d &Translate) {
  this->translate_ = this->matrix_;
  this->translate_(0, 2) = Translate(0);
  this->translate_(1, 2) = Translate(1);

  return true;
}
Eigen::Matrix3d EigenWrapper::getTranslate(void) const {
  return this->translate_;
}
Eigen::Vector3d EigenWrapper::translate(Eigen::Vector3d point_Translate) {
  return this->getTranslate() * point_Translate;
}

bool EigenWrapper::setScale(const Eigen::Vector2d &Scale) {
  this->scale_ = this->matrix_;
  this->scale_(0, 0) = Scale(0);
  this->scale_(1, 1) = Scale(1);

  return true;
}
Eigen::Matrix3d EigenWrapper::getScale(void) const { return this->scale_; }
Eigen::Vector3d EigenWrapper::scale(Eigen::Vector3d point_Scale) {
  return this->getScale() * point_Scale;
}

bool EigenWrapper::setRotate(const double &angle) {
  this->rotate_ = this->matrix_;
  this->rotate_(0, 0) = std::cos((angle * (M_PI / kHalfCircleAngle)));
  this->rotate_(0, 1) = std::sin((angle * (M_PI / kHalfCircleAngle)));
  this->rotate_(1, 0) = -std::sin((angle * (M_PI / kHalfCircleAngle)));
  this->rotate_(1, 1) = std::cos((angle * (M_PI / kHalfCircleAngle)));

  return true;
}
Eigen::Matrix3d EigenWrapper::getRotate(void) const { return this->rotate_; }
Eigen::Vector3d EigenWrapper::rotate(Eigen::Vector3d point_Rotate) {
  return this->getRotate() * point_Rotate;
}

bool EigenWrapper::setShearX(const double &shearX) {
  this->shearX_ = this->matrix_;
  this->shearX_(0, 1) = std::tan(shearX * (M_PI / kHalfCircleAngle));

  return true;
}
Eigen::Matrix3d EigenWrapper::getShearX(void) const { return this->shearX_; }
Eigen::Vector3d EigenWrapper::shearX(Eigen::Vector3d point_ShearX) {
  return this->getShearX() * point_ShearX;
}

bool EigenWrapper::setShearY(const double &shearY) {
  this->shearY_ = this->matrix_;
  this->shearY_(1, 0) = std::tan(shearY * (M_PI / kHalfCircleAngle));

  return true;
}
Eigen::Matrix3d EigenWrapper::getShearY(void) const { return this->shearY_; }
Eigen::Vector3d EigenWrapper::shearY(Eigen::Vector3d point_ShearY) {
  return this->getShearY() * point_ShearY;
}

bool EigenWrapper::setReflectO() {
  this->reflectO_ = this->matrix_;
  this->reflectO_(0, 0) = -1;
  this->reflectO_(1, 1) = -1;

  return true;
}
Eigen::Matrix3d EigenWrapper::getReflectO(void) const {
  return this->reflectO_;
}
Eigen::Vector3d EigenWrapper::reflectO(Eigen::Vector3d point_ReflectO) {
  return this->getReflectO() * point_ReflectO;
}

bool EigenWrapper::setReflectX() {
  this->reflectX_ = this->matrix_;
  this->reflectX_(0, 0) = 1;
  this->reflectX_(1, 1) = -1;

  return true;
}
Eigen::Matrix3d EigenWrapper::getReflectX(void) const {
  return this->reflectX_;
}
Eigen::Vector3d EigenWrapper::reflectX(Eigen::Vector3d point_ReflectX) {
  return this->getReflectX() * point_ReflectX;
}

bool EigenWrapper::setReflectY() {
  this->reflectY_ = this->matrix_;
  this->reflectY_(0, 0) = -1;
  this->reflectY_(1, 1) = 1;

  return true;
}
Eigen::Matrix3d EigenWrapper::getReflectY(void) const {
  return this->reflectY_;
}
Eigen::Vector3d EigenWrapper::reflectY(Eigen::Vector3d point_ReflectY) {
  return this->getReflectY() * point_ReflectY;
}