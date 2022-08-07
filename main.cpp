#include "helpers/Print.hpp"
#include "MathOperations.hpp"

int main(){
    MathOperations mathOp = MathOperations();

    PrintVector(mathOp.Fibonacci(5));
    Print("Factorial: ",mathOp.Factorial(6));

    auto randomVector = mathOp.GetRandomVector(10);
    PrintVector(mathOp.Odd(randomVector));
}