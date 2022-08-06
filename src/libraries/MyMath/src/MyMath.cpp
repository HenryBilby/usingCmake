#include "MyMath.hpp"

int MyMath::soma(int a, int b){
    return a+b;
}
int MyMath::subtracao(int a, int b){
    return a-b;
}
int MyMath::multiplicacao(int a, int b){
    return a*b;
}
int MyMath::divisao(int a, int b){
    return ( b != 0 ? a/b 
                    : 0);
}