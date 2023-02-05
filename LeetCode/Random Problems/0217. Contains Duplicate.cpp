class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> unique;
        for(auto i:nums){
            if(unique.find(i) != unique.end()) return true;
            else unique[i]++;
            
        }
        return false;
    }
};