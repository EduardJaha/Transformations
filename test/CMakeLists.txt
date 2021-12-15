cmake_minimum_required (VERSION 2.8.11)
project(Transformations)

include_directories(googletest
    /include
    ../include
    )

add_executable(TEST11 
    eigen_wrapper_test.cc ../src/eigen_wrapper.cc
    )

target_link_libraries(TEST11 ${GTEST_BOTH_LIBRARIES} pthread testing)

add_test(
    NAME runUnitTests
    COMMAND TEST11)