cmake_minimum_required(VERSION 3.0)

project(WzorzecKomendy)

set(CXX_STANDARD 17)

add_executable(WzorzecKomendy ComplexCommand.cpp Invoker.cpp SimpleCommand.cpp Receiver.cpp main.cpp)

target_include_directories(WzorzecKomendy PUBLIC ${CMAKE_SOURCE_DIR})