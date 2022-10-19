#include <vector>

struct Result {
    std::vector<int>::const_iterator start;
    std::vector<int>::const_iterator end;
    int sum;
};