cmake_minimum_required(VERSION 3.30.1)
project(libVzl
  VERSION 0.1.0
  DESCRIPTION "General purpose library with a bunch of useful implementations for C-lang"
  LANGUAGES C)

if(NOT CMAKE_COMPILER_IS_GNUCC)
  message(FATAL_ERROR "GCC not available...")
endif()

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "" FORCE)
endif()
message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}...")

add_library(c_setup INTERFACE)
target_compile_options(c_setup INTERFACE -Wall -Werror -Wextra -Wshadow 
  -Wdouble-promotion -Wformat=2 -Wformat-truncation -Wundef -fno-common 
  -Wconversion -Wfloat-equal -Wpointer-arith -Wcast-align -Wstrict-prototypes 
  -Wwrite-strings -Wcast-qual -Wswitch-default -Wunreachable-code -Winit-self
  -Wuninitialized -pedantic-errors -Wfatal-errors -Wpedantic)# -Waggregate-return)
target_compile_features(c_setup INTERFACE c_std_23)
target_include_directories(c_setup INTERFACE ${PROJECT_SOURCE_DIR})

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g3 -ggdb3 -Og -fstack-usage --coverage -fsanitize=address -fsanitize=undefined -finstrument-functions -save-temps -gdwarf -grecord-gcc-switches -gno-record-gcc-switches -gstrict-dwarf -gno-strict-dwarf -gcolumn-info -gno-column-info -D DEBUG -D _DEBUG")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O4 -Wunused-parameter -ffunction-sections -fdata-sections --gc-sections -Wpadded march=native -D NDEBUG -D _NDEBUG")

add_subdirectory(${PROJECT_NAME})
add_subdirectory(sandbox)
