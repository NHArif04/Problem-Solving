class Solution {
public:
    int tribonacci(int n, vector<int> &dp) {
        if (dp[n] != -1) return dp[n];
        if (n == 0) return dp[n] = 0;
        if (n<=2) return dp[n] = 1;
        return dp[n] = tribonacci(n - 1, dp) + tribonacci(n - 2, dp) + tribonacci(n - 3, dp);
    }
    int tribonacci(int n) {
        vector<int> dp(n + 1, -1);
        return tribonacci(n, dp);
    }
};
