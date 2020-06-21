# A unit test executable

add_executable(ut_foo)

target_sources(ut_foo PRIVATE main.cpp bar.cpp)
target_link_libraries(ut_foo PRIVATE Catch2::Catch2 foo)

# include(Catch)
catch_discover_tests(ut_foo)