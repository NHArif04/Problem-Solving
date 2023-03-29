#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<string> str ={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int start,end;
    cin>>start>>end;
    while(start<=end){
        if(start>9){
            cout<<(start%2?"odd":"even")<<endl;
        }
        else{
            cout<<str[start]<<endl;
        }
        start++;
    }
    return 0;
}