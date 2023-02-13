#include <iostream>

int add(int a, int b){
    return a + b;
}

float add(float a, float b){
    return a + b;
}

int main(){
    int num1, num2;
    float num3, num4;
    std::cout<<"Enter Two Integer Numbers: ";
    std::cin >>num1 >>num2;

    std::cout<<"Enter Two Float Numbers: ";
    std::cin >>num3 >>num4;

    std::cout<<"Sum of Integer Numbers: " <<add(num1, num2) <<std::endl;
    std::cout<<"Sum of Float Numbers: " <<add(num3, num4) <<std::endl;
}