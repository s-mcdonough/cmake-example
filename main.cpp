#include <iostream>
#include "foo.h"

int main(int, char**) {
    std::cout << "What is your favorite number = " << foo::bar() << "\n";
}
