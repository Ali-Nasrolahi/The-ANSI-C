cmake_minimum_required(VERSION 3.1 )


project(Sample LANGUAGES C)

set(myDir ${CMAKE_CURRENT_SOURCE_DIR})
set(SRC)
include("${myDir}/Chapter01/CMakeLists.txt")
add_executable(prog ${SRC})
add_compile_options(prog -g)
set_property(TARGET prog PROPERTY C_STANDARD 90)