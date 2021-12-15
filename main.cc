#include "eigen_wrapper.hpp"

int main()
{
    // Prints the idntity matrix
    std::cout << "#### Identity matrix ####" << std::endl;
    EigenWrapper matrix(Eigen::Matrix3d::Identity());
    std::cout << matrix.getMatrix3d() << std::endl;

    // Prints the Translated identity matrix
    std::cout << "#### Translate ####" << std::endl;
    matrix.setTranslate(Eigen::Vector2d(2, 2));
    std::cout << matrix.getTranslate() << std::endl;
    std::cout << matrix.translate(Eigen::Vector3d(1, 1, 1)) << std::endl;

    // Prints the Scaled identity matrix about the origin
    std::cout << "#### Scale about origin ####" << std::endl;
    matrix.setScale(Eigen::Vector2d(1, 2));
    std::cout << matrix.getScale() << std::endl;
    std::cout << matrix.scale(Eigen::Vector3d(1, 2, 3)) << std::endl;

    // Prints the Rotated identity matrix about the origin
    std::cout << "#### Rotate about origin ####" << std::endl;
    matrix.setRotate(180);
    std::cout << matrix.getRotate() << std::endl;

    // Prints the Sheared identity matrix in X-axis
    std::cout << "#### Shear in x-axis ####" << std::endl;
    matrix.setShearX(45);
    std::cout << matrix.getShearX() << std::endl;

    // Prints the Sheared identity matrix in Y-axis
    std::cout << "#### Shear in y-axis ####" << std::endl;
    matrix.setShearY(30);
    std::cout << matrix.getShearY() << std::endl;

    // Prints the Reflected identity matrix about the origin
    std::cout << "#### Reflect about origin ####" << std::endl;
    matrix.setReflectO();
    std::cout << matrix.getReflectO() << std::endl;

    // Prints the Reflected identity matrix about X-axis
    std::cout << "#### Reflect about x-axis ####" << std::endl;
    matrix.setReflectX();
    std::cout << matrix.getReflectX() << std::endl;

    // Prints the Reflected identity matrix about Y-axis
    std::cout << "#### Reflect about y-axis ####" << std::endl;
    matrix.setReflectY();
    std::cout << matrix.getReflectY() << std::endl;

    return 0;
}