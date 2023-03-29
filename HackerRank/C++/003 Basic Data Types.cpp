#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a;
    long long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl<<b<<endl<<c<<endl<<fixed<<setprecision(3)<<d<<endl<<fixed<<setprecision(9)<<e<<endl;
    return 0;
}


/*  pi = 3.1416...
fixed<<setprecision(2)<<e<<endl; => for exact decimal point             => 3.14
        setprecision(2)<<e<<endl;  => for decimal point but not exact   => 3.1416...
*/