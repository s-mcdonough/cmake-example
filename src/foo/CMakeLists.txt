# Set up a library using cmake targets

# A target can be an executable or library, we will make foo a static library
add_library(foo SHARED)

# Set target properties
target_include_directories(foo PUBLIC .)
target_sources(foo PRIVATE bar.cpp)
target_compile_options(foo PUBLIC -Wconversion) 