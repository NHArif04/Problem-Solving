class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long int rev = 0, y = x;
        while (y > 0) {
            rev = rev * 10 + y % 10;
            y /= 10;
        }
        return x == rev;
    }
};
