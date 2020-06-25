# We require a recent version of CMake to 
# utilize modern features of the language
cmake_minimum_required(VERSION 3.16.0)
project(
  cmake-example
  LANGUAGES CXX
  VERSION 0.1.0)

# See test/unit for more info
include(ExternalProject)
include(FetchContent)

# Enable CMake's built in testing framework
include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# Flags for all targets in this project
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/W4>"
                    "$<$<CXX_COMPILER_ID:MSVC>:/WX>" 
                    "$<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall>"
                    "$<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-pedantic>"
                    "$<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Werror>")

add_subdirectory(src/foo)
add_subdirectory(test/unit)

add_executable(example-app main.cpp)
target_link_libraries(example-app foo)
