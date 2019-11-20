cmake_minimum_required(VERSION 3.8)
project(steganography)

set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_C_STANDARD 11)

if(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror -pedantic")
endif()

set(SOURCE_FILES main.c)
add_executable(steganography ${SOURCE_FILES})