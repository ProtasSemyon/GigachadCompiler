cmake_minimum_required(VERSION 3.0.0)
project(GigachadCompiler VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory("lib/antlr")

file(
  GLOB_RECURSE
  SOURCES
  CONFIGURE_DEPENDS
  "src/*.h"
  "src/*.cpp"
  )

add_executable(GigachadCompiler ${SOURCES} main.cpp)

# Find LLVM package
find_package(LLVM REQUIRED CONFIG)

# Set up include directories and compile options for LLVM
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

set(LLVM_LIBS LLVM-15)


target_link_libraries(${PROJECT_NAME} antlr4_static)
target_include_directories(${PROJECT_NAME} PUBLIC ./src/generated)
target_include_directories(${PROJECT_NAME} PUBLIC ./src/syntax_error)
target_include_directories(${PROJECT_NAME} PUBLIC ./src/scope)
target_include_directories(${PROJECT_NAME} PUBLIC ./src)
target_include_directories(${PROJECT_NAME} PUBLIC .)

target_include_directories(${PROJECT_NAME} PUBLIC /usr/include/antlr4-runtime)
target_link_libraries(${PROJECT_NAME} ${LLVM_LIBS})

