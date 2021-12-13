#include "eigen_wrapper.hpp"

int main()
{
    std::cout << "#### Identity matrix ####" << std::endl;
    EigenWrapper matrix(Eigen::Matrix3d::Identity());
    std::cout << matrix.getMatrix3d() << std::endl;

    std::cout << "#### Translate ####" << std::endl;
    matrix.setTranslate(Eigen::Vector2d(2, 2));
    std::cout << matrix.getTranslate() << std::endl;
    std::cout << matrix.translate(Eigen::Vector3d(1, 1, 1)) << std::endl;

    std::cout << "#### Scale about origin ####" << std::endl;
    matrix.setScale(Eigen::Vector2d(1, 2));
    std::cout << matrix.getScale() << std::endl;
    std::cout << matrix.scale(Eigen::Vector3d(1, 2, 3)) << std::endl;

    std::cout << "#### Rotate about origin ####" << std::endl;
    matrix.setRotate(180);
    std::cout << matrix.getRotate() << std::endl;

    std::cout << "#### Shear in x-axis ####" << std::endl;
    matrix.setShearX(45);
    std::cout << matrix.getShearX() << std::endl;

    std::cout << "#### Shear in y-axis ####" << std::endl;
    matrix.setShearY(30);
    std::cout << matrix.getShearY() << std::endl;

    std::cout << "#### Reflect about origin ####" << std::endl;
    matrix.setReflectO();
    std::cout << matrix.getReflectO() << std::endl;

    std::cout << "#### Reflect about x-axis ####" << std::endl;
    matrix.setReflectX();
    std::cout << matrix.getReflectX() << std::endl;

    std::cout << "#### Reflect about y-axis ####" << std::endl;
    matrix.setReflectY();
    std::cout << matrix.getReflectY() << std::endl;

    return 0;
}