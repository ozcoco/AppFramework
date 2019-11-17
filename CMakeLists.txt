cmake_minimum_required(VERSION 3.15)
project(SerialPortDemo)

add_subdirectory(core)

include_directories(${CMAKE_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 17)

add_executable(SerialPortDemo main.cpp core/App.cpp core/App.h core/Message.cpp core/Message.h core/Handler.cpp core/Handler.h core/Looper.cpp core/Looper.h)

target_link_libraries(SerialPortDemo core pthread)