class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>freq1,freq2;
        if(nums1.size()>nums2.size()) swap(nums1,nums2);
        for(auto i:nums1) freq1[i]++;
        nums1.clear();
        for(auto i:nums2){
            if(freq1[i]>0){
                nums1.push_back(i);
                freq1[i]--;
            }
        }
        return nums1;
    }
};