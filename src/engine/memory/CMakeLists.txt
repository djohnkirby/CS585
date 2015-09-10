set(libAlloc_SRCS 
  iallocator.cpp 
  counting_allocator.cpp 
  default_allocator.cpp
  )

add_library(libAlloc STATIC ${libAlloc_SRCS})

target_include_directories(libAlloc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})