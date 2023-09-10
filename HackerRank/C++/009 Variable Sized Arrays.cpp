#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr,qr,size;
    cin>>arr>>qr;
    vector<vector<int>> arrays;
    for(int i=0;i<arr;i++){
        cin>>size;
        vector<int> array;
        int temp;
        for(int j=0; j<size; j++){
            cin>> temp;
            array.push_back(temp);
        }
        arrays.push_back(array);
    }
    for(int i=0; i<qr; i++){
        int x,y;
        cin>>x>>y;
        cout<<arrays[x][y]<<endl;
    }
    return 0;
}