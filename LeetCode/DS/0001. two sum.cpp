#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int,int>nums_map;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            int need = target - nums[i];
            if(nums_map.find(need)!= nums_map.end()){
                result.push_back(nums_map[need]);
                result.push_back(i);
                return result;
            }
            nums_map[nums[i]]=i;
        }
        return result;
    }
};

int main(){
    Solution ob;
    vector<int>v;
    v={1,2,4,-4,5,0};
    int n = 0;
    cout<<(ob.twoSum(v, n))<<endl;
    return 0;
}