#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums, ans=0;
    cin >> nums;
    vector<int> freq(5,0);
    for(int i=0, x; i<nums; i++){
        cin>>x;
        freq[x]++;
    }
    ans=freq[4];
    ans+=freq[2]/2;
    int temp=freq[2]%2;
    if(freq[1]>freq[3]) ans += freq[3], freq[1] -= freq[3];
    else ans += freq[3], freq[1] = 0;
    if(freq[1]>0) ans+=(freq[1] + temp*2)/4;
    if((freq[1] + temp*2)%4) ans++;
    cout<<ans;
}