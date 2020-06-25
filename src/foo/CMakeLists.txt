# Set up a library using cmake targets

# A target can be an executable or library, we will make foo a shared library
add_library(foo SHARED)

# Set target properties
target_include_directories(foo PUBLIC .)
target_sources(foo PRIVATE bar.cpp)
target_compile_options(foo PUBLIC -Wconversion)
# Could alternativley set 
# target_compile_features(foo PRIVATE cxx_std_11)
target_compile_features(foo PRIVATE cxx_lambdas)

# Demonstration of find package (but we don't use Boost)
find_package(Boost 1.45.0 REQUIRED COMPONENTS filesystem)
target_link_libraries(foo PRIVATE Boost::filesystem)
