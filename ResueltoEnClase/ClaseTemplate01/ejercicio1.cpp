#include <iostream>
using namespace std;

class Vector{
    public: float x,y;
    bool operator>(Vector v){
        return ((x*x+y*y)>(v.x*v.x+v.y*v.y))? true:false;
    }
};
template<class T> T max (T &a, T &b){
    return (a>b)? a:b;
}

int main (){
    Vector v1 = {2,3};
    Vector v2 = {1,5};
    int x=2,y=3;
    cout << "Mayor: " << max(x,y) << endl;
    cout << "Mayor vectores: " << max(v1,v2).x << ", " << max(v1,v2).y << endl;
    return 0;
}