class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int max=0, key=0;
        for(auto i: nums) 
            if(++freq[i] > max) 
                max = freq[i], key = i;
        return key;
    }
};