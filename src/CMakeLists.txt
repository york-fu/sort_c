cmake_minimum_required(VERSION 3.0.0)

include_directories(./)
set(SRCS 
  sort.c
)
add_library(${PROJECT_NAME} STATIC ${SRCS})
target_include_directories(${PROJECT_NAME} PUBLIC ./)
