cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_C_FLAGS_RELEASE "/MT")
#set(CMAKE_C_FLAGS_DEBUG "/MTd")
message(STATUS "CMAKE_C_FLAGS_RELEASE ${CMAKE_C_FLAGS_RELEASE}")
message(STATUS "CMAKE_C_FLAGS_DEBUG ${CMAKE_C_FLAGS_DEBUG}")

find_package(Threads REQUIRED)

file(GLOB_RECURSE libsrcfiles RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ./*.c)
add_library(testlib STATIC ${libsrcfiles})
target_compile_options(testlib PRIVATE /Zl)
#target_link_options(testlib PRIVATE /NODEFAULTLIB)
#set_target_properties(testlib PROPERTIES STATIC_LIBRARY_OPTIONS /NODEFAULTLIB)
