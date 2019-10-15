cmake_minimum_required(VERSION 3.15)
project(Pong)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(Pong main.cpp Bat.h Bat.cpp Ball.h Ball.cpp Constants.h)
target_link_libraries(Pong sfml-graphics sfml-audio)