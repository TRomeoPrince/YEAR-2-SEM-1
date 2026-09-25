#ifndef DATAVIZ_STATISTICS_HPP
#define DATAVIZ_STATISTICS_HPP

#include <cstddef>
#include <vector>

namespace dataviz {

class Statistics {
private:
    std::vector<double> data;

    void ensureNotEmpty() const;

public:
    explicit Statistics(const std::vector<double>& values);

    std::size_t count() const;
    double minimum() const;
    double maximum() const;
    double mean() const;
};

} // namespace dataviz

#endif
