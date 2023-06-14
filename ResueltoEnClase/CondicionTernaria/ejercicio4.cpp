#include <iostream>
#include <string>
using namespace std;
int main(){
    float a,b;
    cin>>a;cin>>b;
    (a<b)? cout<<"Mayor: "<<b<<"\nMenor: "<<a:cout<<"Mayor: "<<a<<"\nMenor: "<<b;
    return 0;
}