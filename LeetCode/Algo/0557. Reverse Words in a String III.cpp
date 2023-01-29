
class Solution {
public:
    string reverseWords(string s) {
        int first=0, last=0;
        while(last<=s.size()){
            if(s[last]==' ' or last==s.size()){
                reverse(s.begin()+first, s.begin()+last);
                first=last+1;
            }
            last++;
        }
        return s;  
    }
};