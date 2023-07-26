cmake_minimum_required(VERSION 3.0.0)

include_directories(./)

set(SRCS 
  bubble_sort.c
)
add_executable(bubble_sort ${SRCS})
target_link_libraries(bubble_sort sort)

set(SRCS 
  insertion_sort.c
)
add_executable(insertion_sort ${SRCS})
target_link_libraries(insertion_sort sort)

set(SRCS 
  selection_sort.c
)
add_executable(selection_sort ${SRCS})
target_link_libraries(selection_sort sort)

set(SRCS 
  quick_sort.c
)
add_executable(quick_sort ${SRCS})
target_link_libraries(quick_sort sort)

set(SRCS 
  merge_sort.c
)
add_executable(merge_sort ${SRCS})
target_link_libraries(merge_sort sort)

set(SRCS 
  benchmark.c
)
add_executable(benchmark ${SRCS})
target_link_libraries(benchmark sort)
