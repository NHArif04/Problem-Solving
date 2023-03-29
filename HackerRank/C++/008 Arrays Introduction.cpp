#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    while(n--){
        cout<<array[n]<<" ";  //ends is not working here
    }
    return 0;
}