#include <iostream>
using namespace std;
template <typename T>
T minimo (T _a, T _b){
    return _a < _b ? _a : _b;
}
int main(){
    int a,b,i;
    cin >> a;cin >> b;
    i = minimo<int> (a,b);
    cout << "minimo: " << i << endl;
    float fa,fb,fi;
    cin >> fa;cin >> fb;
    fi = minimo<float> (fa,fb);
    cout << "minimo float: " << fi << endl;
    return 0;
}