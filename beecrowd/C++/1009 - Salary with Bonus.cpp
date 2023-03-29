#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    string name;
    float salary, sales;
    cin>>name>>salary>>sales;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<salary+sales*0.15<<endl;
    return 0;
}