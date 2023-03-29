#include<iostream>
using namespace std;

int inline Find_Max(int a, int b, int c, int d){        //inline function has minimum control switching time 
    return a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d));
}

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    cout<<Find_Max(a, b, c, d)<<endl;
    return 0;
}