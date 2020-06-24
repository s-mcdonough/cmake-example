#include "bar.h"

// IMPL
namespace foo {
uint16_t bar() {
    auto g = []() -> uint16_t { return 42; };
    return g();
}
} // namespace foo