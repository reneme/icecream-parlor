cmake_minimum_required(VERSION 3.6)
project("icecream-parlor")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

set(CMAKE_CXX_STANDARD 14)

find_package(Lzo REQUIRED)

add_library(Icecream UNKNOWN IMPORTED)
set_target_properties(Icecream PROPERTIES
    IMPORTED_LOCATION /usr/local/lib/libicecc.a
    INTERFACE_INCLUDE_DIRECTORIES /usr/local/include
)

add_executable(icecream-parlor "main.cpp")
target_link_libraries(icecream-parlor PUBLIC Icecream Lzo)
