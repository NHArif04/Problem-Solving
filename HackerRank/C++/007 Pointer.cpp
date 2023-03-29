//an advance way of working with reference or address
#include<iostream>
using namespace std;

void add_sub(int &a, int &b){
    a += b ;
    b = abs(a - 2*b);    //abs() is for always return positive value
}

int main(){
    int a, b;
    cin>>a>>b;
    add_sub(a, b);
    cout<<a<<endl<<b<<endl;
    return 0;
}