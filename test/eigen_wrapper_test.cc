#include "eigen_wrapper_test.hh"

/**
 * @brief The following test fictures will test the functions that 
 *        were created for the matrixes in the example asked
 */

// Tessting the Rotate
TEST_F(EigenWrapperTest, setRotate_Test)
{
    ASSERT_TRUE(this->base.setRotate(-5));
};

// Testing Shear in X direction
TEST_F(EigenWrapperTest, setShearX_Test)
{
    ASSERT_TRUE(this->base.setShearX(10));
};

// Testing Shear in Y direction
TEST_F(EigenWrapperTest, setShearY_Test)
{
    ASSERT_TRUE(this->base.setShearY(8));
};

// Testing Reflect about origin
TEST_F(EigenWrapperTest, setReflectO_Test)
{
    ASSERT_TRUE(this->base.setReflectO());
};

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