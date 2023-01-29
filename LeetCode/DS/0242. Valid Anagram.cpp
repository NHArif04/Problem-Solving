class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> count;
        for(auto i:s) count[i]++;
        for(auto i:t) count[i]--;
        for(auto i:s) if(count[i]!=0) return false;
        return true;
    }
};