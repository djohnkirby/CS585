cmake_minimum_required(VERSION 2.8)

project(CS585)

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
set(GAME_SRC game.m.cpp)
add_executable(game ${GAME_SRC})

install(TARGETS game DESTINATION bin)