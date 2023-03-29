#include<iostream>
#include<vector>        //string headerfile is only needed whenever string's operation is performed
using namespace std;

int main(){
    int n;
    vector<string> s={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin>>n;
    cout<<((n<=9)?(s[n]):("Greater than 9"))<<endl;
    return 0;
}
