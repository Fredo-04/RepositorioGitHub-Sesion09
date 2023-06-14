//template de funciones

#include <iostream>
using namespace std;
template <typename T>
T sum(T a, T b){
    return a+b;
}

int main(){
    float rpta = sum (5,3);
    cout << rpta;
    return 0;
}