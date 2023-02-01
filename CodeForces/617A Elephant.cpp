#include<bits/stdc++.h>
using namespace std;
int main(){
    int step = 0, distance;
    cin >> distance;
    step = distance/5;
    if(distance%5)step++;
    cout<<step;
return 0;
}