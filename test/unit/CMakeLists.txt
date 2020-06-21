# Download Catch2 using FetchContent
FetchContent_Declare(
  catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        master
)

FetchContent_MakeAvailable(catch2)

# A slightly heavy handed approach to add a specific script into
# our cmake project. Used for catch_discover_tests()
include(${catch2_SOURCE_DIR}/contrib/Catch.cmake)

add_subdirectory(foo)