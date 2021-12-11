#include <math.h>
#include <cmath>
#include <iostream>
#include <Eigen/Dense>
#include <Eigen/Geometry>

class EigenWrapper
{
private:
    Eigen::Matrix3d scale_;
    Eigen::Matrix3d matrix_;
    Eigen::Matrix3d reflectO_;
    Eigen::Matrix3d reflectY_;
    Eigen::Matrix3d reflectX_;
    Eigen::Matrix3d shearY_;
    Eigen::Matrix3d shearX_;
    Eigen::Matrix3d translate_;
    Eigen::Matrix3d rotate_;

public:
    EigenWrapper() = delete;
    explicit EigenWrapper(Eigen::Matrix3d identity);

    bool setBaseMatrix(Eigen::Matrix3d identity);           // done
    Eigen::Matrix3d getMatrix3d();

    bool setTranslate(Eigen::Vector2d Translate);           // done
    Eigen::Matrix3d getTranslate(void);
    Eigen::Vector3d translate(Eigen::Vector3d point_Translate);

    bool setScale(Eigen::Vector2d Scale);                   // done
    Eigen::Matrix3d getScale(void);
    Eigen::Vector3d scale(Eigen::Vector3d point_Scale);

    bool setRotate(double degree);                          // done                      
    Eigen::Matrix3d getRotate(void);

    bool setShearX(double shearX);                          // done
    Eigen::Matrix3d getShearX(void);

    bool setShearY(double shearY);                          // done
    Eigen::Matrix3d getShearY(void);

    bool setReflectO();                                     // done
    Eigen::Matrix3d getReflectO(void);

    bool setReflectX();                                     // done
    Eigen::Matrix3d getReflectX(void);          

    bool setReflectY();                                     // done
    Eigen::Matrix3d getReflectY(void);
};