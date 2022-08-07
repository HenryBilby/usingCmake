#include <vector>
#include <iostream>

template <typename T>
void PrintVector(const std::vector<T> &vet){
    std::cout << "Vector: [";
    for (auto &&i : vet)
        std::cout << " " << i;
    std::cout << " ]" << std::endl;
}

template <typename T>
void Print(const std::string &msg, const T &var){
    std::cout << msg << var << std::endl;
}