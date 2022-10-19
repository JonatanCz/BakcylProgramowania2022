#include "Result.cc"
#include <string>
#include <iostream>

Result maxSubarraySum(const std::vector<int>& numbers) {
    Result result;
    result.start = numbers.begin();
    result.end = numbers.begin();
    result.sum = 0;
    int currentSum = 0;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        currentSum += *it;
        if (currentSum > result.sum) {
            result.sum = currentSum;
            result.end = it;
        }
        if (currentSum < 0) {
            currentSum = 0;
            result.start = it + 1;
        }
    }
    return result;
}

int main(int argc, char** argv) {
  std::vector<int> v;
  for (int i = 1; i < argc; ++i) {
    v.push_back(std::stoi(argv[i]));
  }

  Result result = maxSubarraySum(v);
  std::cout << "Max subarray sum: " << result.sum << '\n';

  if (result.sum != 0) return 0;
  for (auto it = result.start; it != result.end + 1; ++it) {
    std::cout << *it << ' ';
  }
  std::cout << '\n';

  return 0;
}