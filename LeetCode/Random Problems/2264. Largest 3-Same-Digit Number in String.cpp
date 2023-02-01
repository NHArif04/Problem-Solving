class Solution {
public:
    string largestGoodInteger(string num) {
        char good = '0'-1;
        for(int i = 0; i+2 < num.size(); i++){
            if(num[i] == num[i+1] and num[i+1] == num[i+2] and num[i]  > good){
                good = num[i];
                i+=2;
            }    
            else if (num[i]!=num[i+1] and num[i+1]!=num[i+2])
                i++;
        }
        if(good < '0') return "";
        return string(3,good);
    }
};