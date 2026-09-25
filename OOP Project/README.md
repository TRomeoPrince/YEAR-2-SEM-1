# OOP Project — Group 4 Data Visualization Library

This folder is a starter example for the Group 4 C++ OOP project.

## Big idea

We are building a reusable C++ data-visualization library. The final library can be divided into modules such as:

- Data loading
- Data preprocessing
- Statistical summaries
- Histograms
- Count plots
- KDE plots
- Axis scaling
- Labels and annotations
- Plot rendering
- Image export

This starter sample implements only the **Statistics** module so we can first understand how a reusable C++ library is organized.

## Suggested final structure

```text
OOP Project/
├── README.md
├── CMakeLists.txt
├── include/
│   └── dataviz/
│       ├── Statistics.hpp
│       ├── Dataset.hpp
│       ├── Histogram.hpp
│       ├── CountPlot.hpp
│       ├── KDEPlot.hpp
│       ├── Axis.hpp
│       └── Renderer.hpp
├── src/
│   ├── Statistics.cpp
│   ├── Dataset.cpp
│   ├── Histogram.cpp
│   ├── CountPlot.cpp
│   ├── KDEPlot.cpp
│   ├── Axis.cpp
│   └── Renderer.cpp
├── examples/
│   └── statistics_example.cpp
├── tests/
│   └── test_statistics.cpp
└── reports/
    └── week-01.md
```

## Current sample: Statistics class

The Statistics class receives numerical data and provides reusable functions for:

- count
- minimum
- maximum
- mean

Later, the class can be extended with median, variance, standard deviation, quartiles, and other summaries.

## Build

From inside the `OOP Project` folder:

```bash
cmake -S . -B build
cmake --build build
```

Run the example:

```bash
./build/statistics_example
```

Run the test:

```bash
./build/test_statistics
```
