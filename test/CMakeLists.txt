include_directories(
  ${GTEST_INCLUDE_DIR} 
)

add_executable( ${PROJECT_NAME}_test 
  eigen_wrapper_test.cc 
)

target_link_libraries( ${PROJECT_NAME}_test 
  ${PROJECT_NAME}_lib
  ${GTEST_BOTH_LIBRARIES} 
  pthread
)

add_test(
  NAME eigen_wrapper_test
  COMMAND ${PROJECT_NAME}_test
)
