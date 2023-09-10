#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b,c;
    cin>>a>>b;
    int len_a = a.size(), len_b=b.size();
    c=a+b;
    cout<<len_a<<" "<<len_b<<endl<<c<<endl;
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b;
    return 0;
}