#include "dataviz/Statistics.hpp"

#include <algorithm>
#include <numeric>
#include <stdexcept>

namespace dataviz {

Statistics::Statistics(const std::vector<double>& values)
    : data(values) {}

void Statistics::ensureNotEmpty() const {
    if (data.empty()) {
        throw std::invalid_argument("Statistics requires at least one value.");
    }
}

std::size_t Statistics::count() const {
    return data.size();
}

double Statistics::minimum() const {
    ensureNotEmpty();
    return *std::min_element(data.begin(), data.end());
}

double Statistics::maximum() const {
    ensureNotEmpty();
    return *std::max_element(data.begin(), data.end());
}

double Statistics::mean() const {
    ensureNotEmpty();

    const double total =
        std::accumulate(data.begin(), data.end(), 0.0);

    return total / static_cast<double>(data.size());
}

} // namespace dataviz
