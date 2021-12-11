#include "eigen_wrapper.hpp"

EigenWrapper::EigenWrapper(Eigen::Matrix3d identity)
{
    if (!this->setBaseMatrix(identity))
    {
        std::cerr << "Error";
    }
};

bool EigenWrapper::setBaseMatrix(Eigen::Matrix3d identity)
{
    this->matrix_ = identity;
    return true;
}

Eigen::Matrix3d EigenWrapper::getMatrix3d(void)
{
    return this->matrix_;
}

bool EigenWrapper::setTranslate(Eigen::Vector2d Translate)
{
    this->translate_ = this->matrix_;

    this->translate_(0, 2) = Translate(0);
    this->translate_(1, 2) = Translate(1);

    return true;
}

Eigen::Matrix3d EigenWrapper::getTranslate(void)
{
    return this->translate_;
}

Eigen::Vector3d EigenWrapper::translate(Eigen::Vector3d point_Translate)
{
    return this->getTranslate() * point_Translate;
}

bool EigenWrapper::setScale(Eigen::Vector2d Scale)
{
    this->scale_ = this->matrix_;

    this->scale_(0, 0) = Scale(0);
    this->scale_(1, 1) = Scale(1);

    return true;
}

Eigen::Matrix3d EigenWrapper::getScale(void)
{
    return this->scale_;
}

Eigen::Vector3d EigenWrapper::scale(Eigen::Vector3d point_Scale)
{
    return this->getScale() * point_Scale;
}

bool EigenWrapper::setRotate(double angle)
{
    this->rotate_ = this->matrix_;

    this->rotate_(0, 0) = std::cos((angle * (M_PI / 180)));
    this->rotate_(0, 1) = std::sin((angle * (M_PI / 180)));
    this->rotate_(1, 0) = -std::sin((angle * (M_PI / 180)));
    this->rotate_(1, 1) = std::cos((angle * (M_PI / 180)));

    return true;
}

Eigen::Matrix3d EigenWrapper::getRotate(void)
{
    return this->rotate_;
}

bool EigenWrapper::setShearX(double shearX)
{
    this->shearX_ = this->matrix_;

    this->shearX_(0, 1) = std::tan(shearX);

    return true;
}

Eigen::Matrix3d EigenWrapper::getShearX(void)
{
    return this->shearX_;
}

bool EigenWrapper::setShearY(double shearY)
{
    this->shearY_ = this->matrix_;

    this->shearY_(1, 0) = std::tan(shearY);

    return true;
}

Eigen::Matrix3d EigenWrapper::getShearY(void)
{
    return this->shearY_;
}

bool EigenWrapper::setReflectO()
{
    this->reflectO_ = this->matrix_;

    this->reflectO_(0, 0) = -1;
    this->reflectO_(1, 1) = -1;

    return true;
}

Eigen::Matrix3d EigenWrapper::getReflectO(void)
{
    return this->reflectO_;
}

bool EigenWrapper::setReflectX()
{
    this->reflectX_ = this->matrix_;

    this->reflectX_(0, 0) = 1;
    this->reflectX_(1, 1) = -1;

    return true;
}

Eigen::Matrix3d EigenWrapper::getReflectX(void)
{
    return this->reflectX_;
}

bool EigenWrapper::setReflectY()
{
    this->reflectY_ = this->matrix_;

    this->reflectY_(0, 0) = -1;
    this->reflectY_(1, 1) = 1;

    return true;
}

Eigen::Matrix3d EigenWrapper::getReflectY(void)
{
    return this->reflectY_;
}
