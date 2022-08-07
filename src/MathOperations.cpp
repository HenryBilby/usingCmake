#include <algorithm>
#include <cstdlib>
#include <ctime>

#include "MathOperations.hpp"
#include "MyMath/inc/MyMath.hpp"

std::vector<int> MathOperations::Fibonacci(const int &n){
    std::vector<int> fibonacci;
    MyMath myMath = MyMath();

    for (int i = 0; i < n; i++)
        (i == 0 || i ==1)
        ? fibonacci.emplace_back(1)
        : fibonacci.emplace_back(myMath.soma(fibonacci[i-1] ,fibonacci[i-2]));
    
    return fibonacci;
}

int MathOperations::Factorial(const int &n){
    if (n==0) return 1;
    
    int factorial = 1;
    MyMath myMath = MyMath();
    for (int i = 1; i < n; i++)
        factorial = myMath.multiplicacao(factorial,i);

    return factorial;
}

std::vector<int> MathOperations::Odd(const std::vector<int> &vet){
    std::vector<int> oddVet;

    for (auto &&i : vet)
        if (i%2 == 0) oddVet.emplace_back(i);
    
    return oddVet;
}

std::vector<int> MathOperations::GetRandomVector(const int &sizeOfVector) {
    std::vector<int> randomVector(sizeOfVector);
    srandom(time(NULL));
    std::generate(randomVector.begin(), randomVector.end(), rand);
    return randomVector;
}