#include "catch2/catch.hpp"
#include "bar.h"

TEST_CASE("The answer to life, the universe and everything", "[towels]") {
    REQUIRE(foo::bar() == 42);
}