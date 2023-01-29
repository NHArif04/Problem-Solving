class Solution {
    private:
    void solve(vector<int>nums,int index,vector<vector<int>> &ans)
    {
        if(index>=nums.size(){
            ans.push_back(nums);
            return;
        }
        //swap element
        for(int j=index;j<nums.size();j++)
        {
            swap(nums[index],nums[j]);
            solve(nums,index+1,ans);
            //backtracking 
            swap(nums[index],nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(nums,index,ans);
        return ans;
    }
};