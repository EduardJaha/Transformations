#include "eigen_wrapper.hpp"

/**
 * @brief Construct a new Eigen Wrapper:: Eigen Wrapper object
 * 
 * @param identity 
 */

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

/**
 * @brief This function will translate the previous identity matrix on the X(0,2) and Y(1,2)
 * 
 * @param Translate 
 * @return true 
 * @return false 
 */

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

/**
 * @brief This function will set the scale for width and height 
 *        at the identity matrix at the positions (0,0) and (1,1)
 * @param Scale 
 * @return true 
 * @return false 
 */

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

/**
 * @brief This function will rotate the identity matrix by origin
 * 
 * @param angle 
 * @return true 
 * @return false 
 */

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

/**
 * @brief This function will shear the identity matrix on X direction
 * 
 * @param shearX 
 * @return true 
 * @return false 
 */

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

/**
 * @brief This function will shear the identity matrix in Y direction
 * 
 * @param shearY 
 * @return true 
 * @return false 
 */

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

/**
 * @brief This matrix will reflect the identity matrix about origin
 * 
 * @return true 
 * @return false 
 */

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

/**
 * @brief This matrix will the reflect the identity matrix about X-axis
 * 
 * @return true 
 * @return false 
 */

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

/**
 * @brief This function will rotate the identity matrix about Y-axis
 * 
 * @return true 
 * @return false 
 */

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
