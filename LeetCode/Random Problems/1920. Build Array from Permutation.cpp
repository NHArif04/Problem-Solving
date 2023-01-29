class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n);
        int i=0;
        while (i<n){
            arr[i++]=nums[nums[i]];
        }
        return arr;
    }
};