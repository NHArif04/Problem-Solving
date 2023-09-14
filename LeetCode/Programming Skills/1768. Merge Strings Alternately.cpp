/**
 ** Two Pointer Technique 
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0, j=0;
        string result = "";
        while(word1[i]!='\0' || word2[j]!='\0'){
            if(word1[i]!='\0'){
                result.push_back(word1[i++]);
            }
            if(word2[j]!='\0'){
                result.push_back(word2[j++]);
            }
        }
        return result;
    }
};