
#
# Project setup
#

cmake_minimum_required(VERSION 3.10)

project(kiraz-hw1 C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

# Release

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_C_FLAGS "-Wall -Wextra -Wno-unused-variable -Wno-unused-function")
set(CMAKE_C_FLAGS_DEBUG "-g")
set(CMAKE_C_FLAGS_RELEASE "-O3")

add_compile_options(
    -Werror=return-type
)

#
# Flex/Bison boilerplate
#

find_package(BISON REQUIRED)
find_package(FLEX REQUIRED)

if (WIN32)
    set (ADDITIONAL_FLEX_FLAGS "--wincompat")
else()
    set (ADDITIONAL_FLEX_FLAGS "")
endif()

#
# Common Code
#

# Own files
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#
# Homework 1
#

FLEX_TARGET(HW1
    ${CMAKE_CURRENT_SOURCE_DIR}/lex.l
    ${CMAKE_CURRENT_SOURCE_DIR}/kiraz-lexer.c
    DEFINES_FILE ${CMAKE_CURRENT_SOURCE_DIR}/kiraz-lexer.h
    COMPILE_FLAGS ${ADDITIONAL_FLEX_FLAGS}
)

# no bison target
#ADD_FLEX_BISON_DEPENDENCY(HW1_FLEX HW1_BISON)

add_executable(kiraz-lexer-out main.c base_class_token.c dynamic.c all_class_tokens.c ${FLEX_HW1_OUTPUTS})
target_link_libraries(kiraz-lexer-out ${FLEX_LIBRARIES})
