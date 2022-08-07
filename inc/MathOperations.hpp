#include <vector>

class MathOperations{
  public:
    std::vector<int> Fibonacci(const int &n);
    int Factorial(const int &n);
    std::vector<int> Odd(const std::vector<int> &vet);
    std::vector<int> GetRandomVector(const int &sizeOfVector);
};