add_executable( ${PROJECT_NAME}_test 
  eigen_wrapper_test.cc 
)

target_link_libraries( ${PROJECT_NAME}_test 
  ${GTEST_BOTH_LIBRARIES} 
  pthread Transformations_lib)

add_test(
  NAME eigen_wrapper_test
  COMMAND ${PROJECT_NAME}_test
)