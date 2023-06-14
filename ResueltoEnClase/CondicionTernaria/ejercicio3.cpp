#include <iostream>
#include <string>
using namespace std;
int main(){
    float a,b,c,val;
    cin>>a;cin>>b;cin>>c;
    val = (a<b)? b:a;
    (val<c)? cout<<c:cout<<val;
    return 0;
}