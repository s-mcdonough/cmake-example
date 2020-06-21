cmake_minimum_required(VERSION 3.16.0)
project(cmake-example VERSION 0.1.0)

# See test/unit for more info
include(ExternalProject)
include(FetchContent)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(src/foo)
add_subdirectory(test/unit)

add_executable(example-app main.cpp)
target_link_libraries(example-app foo)