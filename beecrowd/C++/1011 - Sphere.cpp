#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
    double pi = 3.14159, R;
    cin>>R;
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<(4.0/3) * pi * R*R*R<<endl;
    return 0;
}