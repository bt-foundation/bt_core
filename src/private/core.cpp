#include "core.hpp"

#include <print>

#include "types.hpp"

namespace bt::core {
void example_fun() {
    types::vector<int> test {1, 2, 3, 4, 5};

    for (auto& val : test) {
        std::print("{}", val);
    }
}
} // namespace bt::core
