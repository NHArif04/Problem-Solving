class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        unordered_map<char,int>val{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000} };
        for(int i=0; i<s.size(); i++){
            if(i>0 and val[s[i]]>val[s[i-1]]){
                result+=(val[s[i]]-2*val[s[i-1]]);
            }
            else{
                result+=val[s[i]];
            }
        }
        return result;
    }
};