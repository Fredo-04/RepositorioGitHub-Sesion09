#include <iostream>
using namespace std;
template<typename T> T multiplicacion (T a, T b){
    return a*b;
}
class Par{
    public: float x,y;
    Par (float x, float y):x(x),y(y){}
    Par operator*(Par v){
        return Par(v.x*x,v.y*y);
    }
};


int main (){
    Par v1(2,3);
    Par v2(1,5);
    float x=4,y=9;
    cout << "Multiplicacion normal: " << multiplicacion(x,y) << endl;
    cout << "Multiplicacion par: " << multiplicacion(v1,v2).x << ", " << multiplicacion(v1,v2).y << endl;
    return 0;
}