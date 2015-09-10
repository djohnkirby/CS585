set(libAlloc_SRCS *.h *.cpp)

add_library(libAlloc STATIC ${libAlloc_SRCS})

target_include_directories(libAlloc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})