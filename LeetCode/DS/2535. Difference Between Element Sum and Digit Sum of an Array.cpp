#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum=0,digit_sum=0;
        for(int i : nums){
            element_sum+=i;
            while(i){
                digit_sum+=i%10;
                i/=10;
            }
        }
        return (element_sum - digit_sum);
    }
};

int main(){
    Solution ob;
    vector<int> v;
    v={1,23,12,24,4,2};
    cout<<(ob.differenceOfSum(v))<<endl;
}