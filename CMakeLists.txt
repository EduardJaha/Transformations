cmake_minimum_required (VERSION 2.8.11)
project(Transformations)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR} ${Eigen_INCLUDE_DIRS})

include_directories(
    include/
)

add_library(testing
    src/eigen_wrapper.cc
    )

add_executable(matrix
    main.cc
    )

target_link_libraries(testing Eigen3::Eigen)
target_link_libraries(matrix testing)

add_subdirectory(test)