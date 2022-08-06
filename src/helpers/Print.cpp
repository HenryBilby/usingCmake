#include <vector>
#include <iostream>

template <typename T>
void PrintVector(std::vector<T> vet){
    for (auto &&i : vet){
        std::cout << i << std::endl;
    } 
}