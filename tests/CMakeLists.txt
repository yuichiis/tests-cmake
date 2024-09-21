cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_C_FLAGS_RELEASE "/MT")
#set(CMAKE_C_FLAGS_DEBUG "/MTd")
message(STATUS "CMAKE_C_FLAGS_RELEASE ${CMAKE_C_FLAGS_RELEASE}")
message(STATUS "CMAKE_C_FLAGS_DEBUG ${CMAKE_C_FLAGS_DEBUG}")

find_package(Threads REQUIRED)

file(GLOB_RECURSE testfiles RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ./*.c)
add_executable(test_main ${testfiles})
target_link_libraries(test_main testlib)

