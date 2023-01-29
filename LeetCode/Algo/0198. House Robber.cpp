class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int prev_max = 0, curr_max = nums[n-1];
        for (int i = n-2; i >= 0; --i) {
            int temp = curr_max;
            curr_max = max(curr_max, prev_max + nums[i]);
            prev_max = temp;
        }
        return curr_max;
    }
};
