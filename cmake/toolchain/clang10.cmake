set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR x86_64)

find_program(CMAKE_C_COMPILER clang-10 REQUIRED)
find_program(CMAKE_CXX_COMPILER clang++-10 REQUIRED)

# This needs to be done so the value is persistent
set(CMAKE_C_COMPILER
    "${CMAKE_C_COMPILER}"
    CACHE STRING "C compiler" FORCE)
set(CMAKE_CXX_COMPILER
    "${CMAKE_CXX_COMPILER}"
    CACHE STRING "C++ compiler" FORCE)
