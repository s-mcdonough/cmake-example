# Set up a library using cmake targets

# A target can be an executable or library, we will make foo a static library
add_library(foo STATIC)
# add_library(ALIAS)

# Set target properties
target_include_directories(foo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_sources(foo PRIVATE foo.cpp)
target_compile_options(foo PRIVATE -Wall -Wextra -Wpedantic -Werror) # TODO: Make crossplatform