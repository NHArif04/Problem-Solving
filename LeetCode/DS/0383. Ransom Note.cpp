class Solution {
public:
    bool canConstruct(string rn, string m) {
        if(rn.size()>m.size()) return false;
        unordered_map<char, int> count;
        for(auto i:rn) count[i]++;
        for(auto i:m) count[i]--;
        for(auto i:rn) if(count[i]>0) return false;
        return true;
        
    }
};