class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        if(n<10) return false;
        int rev=0, real = n;
        while(n){
            rev+=n%10;
            n/=10;
        }
        return rev == real? true : false;
    }
};