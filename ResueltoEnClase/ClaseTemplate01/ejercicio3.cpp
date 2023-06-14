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
class Triada{
    public: float x,y,z;
    Triada (float x, float y, float z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    Triada operator*(Triada m){
        return Triada(m.x*x,m.y*y,m.z*z);
    }
};


int main (){
    Par v1(2,3);
    Par v2(1,5);
    Triada t1(3,5,8);
    Triada t2(5,9,2);
    float x=4,y=9;
    cout << "Multiplicacion normal: " << multiplicacion(x,y) << endl;
    cout << "Multiplicacion par: " << multiplicacion(v1,v2).x << ", " << multiplicacion(v1,v2).y << endl;
    cout << "Multiplicacion triada: " << multiplicacion(t1,t2).x << ", " << multiplicacion(t1,t2).y << ", " << multiplicacion(t1,t2).z << endl;
    return 0;
}