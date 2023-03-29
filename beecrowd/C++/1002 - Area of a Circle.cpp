#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    double r, pi=3.14159;       //float type is not accepted
    cin>>r;
    cout<<"A="<<fixed<<setprecision(4)<<r*r*pi<<endl;
    return 0;
}