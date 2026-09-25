#include "dataviz/Statistics.hpp"

#include <iostream>
#include <vector>

int main() {
    std::vector<double> marks = {45, 47, 50, 51, 53, 58, 60, 61, 62, 70, 75, 80};

    dataviz::Statistics stats(marks);

    std::cout << "Count: " << stats.count() << '\n';
    std::cout << "Minimum: " << stats.minimum() << '\n';
    std::cout << "Maximum: " << stats.maximum() << '\n';
    std::cout << "Mean: " << stats.mean() << '\n';

    return 0;
}
