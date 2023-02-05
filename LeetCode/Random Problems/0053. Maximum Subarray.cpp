class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int max = INT_MIN, temp=0;
        for(auto i:nums){
            temp+=i;
            if(max<temp) max=temp;
            if(temp<=0) temp = 0;
        }
        return max;
    }
};