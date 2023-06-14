#include <iostream>
using namespace std;
template <typename T>
T mayortres (T _a, T _b,T _c){
    _a > _b ? (_a > _c && _b > _c)? cout << _a << " " << _b << " " << _c:cout << _a << " " << _c << " " << _b  : (_b > _c && _a > _c)? cout << _b << " " << _a << " " << _c:cout << _b << " " << _c << " " << _c;
}

int main(){
    int a,b,c;
    cin>>a;cin>>b;cin>>c;
    mayortres<int> (a,b,c);
    return 0;
}
