//Menu-driven program where each operation (add, subtract, multiply, divide) is implemented as a separate function.

#include<iostream>
using namespace std;

int mul(int a, int b){
    int c = a*b;
    return c;
}
int add(int a, int b){
    int c = a+b;
    return c;
}
int sub(int a, int b){
    int c = a-b;
    return c;
}
float divide(int a, int b){
    float c = a/b;
    return c;
}
