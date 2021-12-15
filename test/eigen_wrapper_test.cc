#include "eigen_wrapper_test.hh"

/**
 * @brief The following test fictures will test the functions that 
 *        were created for the matrixes in the example asked
 */

//  Translate identity matrix
TEST_F(EigenWrapperTest, setTranslate)
{
    Eigen::Vector2d translateT;
    translateT << 2, 2;
    EXPECT_TRUE(this->base.setTranslate(translateT));
}

TEST_F(EigenWrapperTest, getTranslate)
{
    Eigen::Matrix3d _translate;
    _translate << 1, 0, 2,
                  0, 1, 2,
                  0, 0, 1;
    EXPECT_EQ(_translate, this->base.getTranslate());
}

TEST_F(EigenWrapperTest, translate)
{
    Eigen::Vector3d _translate, _result;
    _translate << 0, 0, 1;
    _result << 2, 2, 1;

    ASSERT_EQ(_result, base.translate(_translate));
}
/////////////////////////////////////////////////////////////////////////////

// Scale identity matrix
TEST_F(EigenWrapperTest, setScale)
{
    Eigen::Vector2d scaleT;
    scaleT << 3, 3;
    EXPECT_TRUE(this->base.setScale(scaleT));
}

TEST_F(EigenWrapperTest, getScale)
{
    Eigen::Matrix3d _scale;
    _scale << 3, 0, 0,
              0, 3, 0,
              0, 0, 1;
    EXPECT_EQ(_scale, this->base.getScale());
}

TEST_F(EigenWrapperTest, scale)
{
    Eigen::Vector3d _scale, _result;
    _scale << 1, 1, 1;
    _result << 3, 3, 1;

    ASSERT_EQ(_result, base.scale(_scale));
}
/////////////////////////////////////////////////////////////////////////////

// Test rotate identity matrix
TEST_F(EigenWrapperTest, setRotate) 
{
    EXPECT_TRUE(this->base.setRotate(90.0));
}

TEST_F(EigenWrapperTest, getRotate)
{
    Eigen::Matrix3d _rotate;
   _rotate <<  cos((M_PI / 180) * 45.0), sin((M_PI / 180) * 45.0), 0,
            -sin((M_PI / 180) * 45.0), cos((M_PI / 180) * 45.0), 0,
                       0,                   0,              1;
    ASSERT_EQ(_rotate, this->base.getRotate());
}

TEST_F(EigenWrapperTest, rotate)
{
    Eigen::Vector3d _rotate, _result;
    _rotate << 1, 0, 1;
    _result <<cos((M_PI / 180) * 45.0)*1, -1, 1;

    ASSERT_EQ(_result, this->base.rotate(_rotate));
}
/////////////////////////////////////////////////////////////////////////////

// Test shear identity matrix in X direnction
TEST_F(EigenWrapperTest, setShearX)
{
    EXPECT_TRUE(this->base.setShearX(45));
}

TEST_F(EigenWrapperTest, getShearX)
{
    Eigen::Matrix3d _shearX;
    _shearX << 1, tan(45), 0,
               0, 1, 0,
               0, 0, 1;
    EXPECT_NE(_shearX, this->base.getShearX());
}

TEST_F(EigenWrapperTest, shearX)
{
    Eigen::Vector3d _shearX, _result;
    _shearX << 1, 1, 1;
    _result << 2, 1, 1;

    ASSERT_EQ(_result, base.shearX(_shearX));
}
/////////////////////////////////////////////////////////////////////////////

// Test shear identity matrix in Y direnction
TEST_F(EigenWrapperTest, setShearY)
{
    EXPECT_TRUE(this->base.setShearY(45));
}

TEST_F(EigenWrapperTest, getShearY)
{
    Eigen::Matrix3d _shearY;
    _shearY << 1, 0, 0,
               tan(45), 1, 0,
               0, 0, 1;

    EXPECT_NE(_shearY, this->base.getShearY());
}

TEST_F(EigenWrapperTest, shearY)
{
    Eigen::Vector3d _shearY, _result;
    _shearY << 1, 1, 1;
    _result << 1, 2, 1;

    EXPECT_NE(_result, base.shearY(_shearY));
}

// Testing Reflect about origin
TEST_F(EigenWrapperTest, setReflectO_Test)
{
    ASSERT_TRUE(this->base.setReflectO());
}

// Testing Reflect about X-axis
TEST_F(EigenWrapperTest, setReflectX_Test)
{
    ASSERT_TRUE(this->base.setReflectX());
};

// Testing Reflect about Y-axis
TEST_F(EigenWrapperTest, setReflectY_Test)
{
    ASSERT_TRUE(this->base.setReflectY());
};

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}