#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,mid,high=nums.size()-1;
        //int pos;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
                //pos=low;
            }
            else{
                high=mid-1;
                //pos=mid;
            }
        }
        //return pos;
        if(nums[mid]<target) return low;
        else return mid;
    }
};

int main(){
    Solution ob;
    vector<int> v;
    int n=7;
    v = {1,3,5,6};
    while(n--){
            cout <<"position of "<<n<<" is "<<(ob.searchInsert(v,n))<<endl; 
    }
    return 0;
}
