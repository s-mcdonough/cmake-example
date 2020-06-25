#include "catch2/catch.hpp"
#include "bar.h"

TEST_CASE("The answer to life, the universe and everything", "[thought]") {
    // uint8_t willErr = foo::bar(); // ...Due to compiler flags
    // CHECK(willErr == 42);
    REQUIRE(foo::bar() == 42);
}