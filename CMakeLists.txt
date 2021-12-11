cmake_minimum_required (VERSION 2.8.11)
project(Transformations)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)


include_directories(
    include/
)

add_library(test
    src/eigen_wrapper.cc
    )

add_executable(matrix
    main.cc
    )

target_link_libraries(test Eigen3::Eigen)
target_link_libraries(matrix test)