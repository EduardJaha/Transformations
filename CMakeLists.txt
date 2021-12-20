cmake_minimum_required (VERSION 2.8.11)
project(Transformations)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)
find_package(GTest REQUIRED)

include_directories(
  include/
  ${GTEST_INCLUDE_DIR} 
  ${Eigen_INCLUDE_DIRS}
)

add_library( ${PROJECT_NAME}_lib
  src/eigen_wrapper.cc
)

add_executable( ${PROJECT_NAME}
  src/main.cc
)

target_link_libraries( ${PROJECT_NAME}_lib 
  Eigen3::Eigen
)

target_link_libraries( ${PROJECT_NAME} 
  ${PROJECT_NAME}_lib
)

enable_testing()

add_subdirectory(test)