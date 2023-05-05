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

set(TYPE_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/types)
set(IR_OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR}/ir)

file(GLOB_RECURSE TYPE_SOURCES ${TYPE_SOURCE_DIR}/*.c)

foreach(TYPE_SOURCE ${TYPE_SOURCES})
  get_filename_component(TYPE_SOURCE_NAME ${TYPE_SOURCE} NAME_WE)
  set(TYPE_BC_FILE ${IR_OUTPUT_DIR}/${TYPE_SOURCE_NAME}.bc)
  add_custom_command(
    OUTPUT ${TYPE_BC_FILE}
    COMMAND mkdir -p ${IR_OUTPUT_DIR}
    COMMAND clang -S -emit-llvm ${TYPE_SOURCE} -o ${TYPE_BC_FILE}
    DEPENDS ${TYPE_SOURCE}
  )
  list(APPEND TYPE_BC_FILES ${TYPE_BC_FILE})
endforeach()

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/types.bc
    COMMAND llvm-link ${TYPE_BC_FILES} -o ${TYPE_SOURCE_DIR}/types.bc
    DEPENDS ${TYPE_BC_FILES})

add_custom_target(IR ALL DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/types.bc)

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

