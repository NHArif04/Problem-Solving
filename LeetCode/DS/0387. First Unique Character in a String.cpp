class Solution {
public:
    int firstUniqChar(string s) {
        int first=0;
        unordered_map<char, int>isunique;

        while(first<s.size()) 
            isunique[s[first++]]++;

        for(first =0; first<s.size();first++) 
            if(isunique[s[first]]==1) return first;
            
        return -1;
    }
};