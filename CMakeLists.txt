cmake_minimum_required(VERSION 3.0.0)
project(sort VERSION 0.1.0)

include(CTest)
enable_testing()

option(EXAMPLE "build example" ON)

add_subdirectory(src)

if(EXAMPLE)
  add_subdirectory(example)
endif(EXAMPLE)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
