#include "dataviz/Statistics.hpp"

#include <cassert>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
    std::vector<double> values = {1, 2, 3, 4, 5};
    dataviz::Statistics stats(values);

    assert(stats.count() == 5);
    assert(stats.minimum() == 1);
    assert(stats.maximum() == 5);
    assert(std::abs(stats.mean() - 3.0) < 1e-9);

    std::cout << "All Statistics tests passed.\n";
    return 0;
}
