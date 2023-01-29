#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,mid,high=nums.size()-1;
        while(low<=high){
            mid=(low+high)/2; 
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};

int main(){
    Solution ob;
    vector<int> v;
    int n=7;
    v = {1,3,5,6};
    while(n--){
            cout <<"position of "<<n<<" is "<<(ob.search(v,n))<<endl; 
    }
    return 0;
}