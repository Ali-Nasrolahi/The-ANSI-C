cmake_minimum_required(VERSION 3.18)

project(Sample LANGUAGES C)

set(myDir ${CMAKE_CURRENT_SOURCE_DIR})
include("${myDir}/Chapter01/CMakeLists.txt")
include("${myDir}/Chapter02/CMakeLists.txt")
include("${myDir}/Chapter03/CMakeLists.txt")
include("${myDir}/Chapter04/CMakeLists.txt")

foreach(X IN LISTS SRC)
    get_filename_component(EXECUTABLE_NAME ${X} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${X})
    add_compile_options(-g)
    set_property(TARGET ${EXECUTABLE_NAME} PROPERTY C_STANDARD 90)
endforeach()
