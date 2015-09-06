#cmake_minimum_required(VERSION 2.8)
#project(CS585)
file(GLOB SRCS *.cpp)

add_executable(testtrivial ${SRCS})

target_link_libraries(testtrivial
  libgtest 
  libgmock
)

add_test(NAME testtrivial COMMAND testtrivial)