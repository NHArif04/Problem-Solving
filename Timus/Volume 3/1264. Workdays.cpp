#include<iostream>
using namespace std;

int main(){
    int m, n, count{};
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<=m; j++){
            count++;
        }
    }
    cout<<count;
}