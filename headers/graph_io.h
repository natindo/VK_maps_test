#ifndef GRAPH_IO_H
#define GRAPH_IO_H

#include <iostream>
#include <ostream>
#include <string>
#include <vector>

struct GraphData {
    int n;
    std::vector<std::vector<int>> adjMatrix;
    int start;
};

GraphData readGraphFromFile(const std::string &filename);

#endif // GRAPH_IO_H
