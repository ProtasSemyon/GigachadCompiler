cmake_minimum_required(VERSION 3.0.0)
project(GigachadCompiler VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(antlr)

file(
  GLOB_RECURSE
  SOURCES
  CONFIGURE_DEPENDS
  "generated/*.h"
  "generated/*.cpp"
  "src/*.h"
  "src/*.cpp")

add_executable(GigachadCompiler ${SOURCES} main.cpp)


target_link_libraries(${PROJECT_NAME} antlr4_static)
target_include_directories(${PROJECT_NAME} PUBLIC ./generated)
target_include_directories(${PROJECT_NAME} PUBLIC .)
target_include_directories(${PROJECT_NAME} PUBLIC ./src)

target_include_directories(${PROJECT_NAME} PUBLIC /usr/include/antlr4-runtime)
