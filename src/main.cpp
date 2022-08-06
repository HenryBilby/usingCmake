#include <iostream>
#include "libraries/MyMath/src/MyMath.hpp"


int main(){
    MyMath math = MyMath();
    std::cout << "Divisao: " << math.divisao(9,3) << std::endl;
}