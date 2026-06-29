class Solution {
    // vector<int> dp;
// public:
//     int climbStairs(int n) {
//         dp.resize(n+1,-1);
//         return find(n);
//     }
//     int find(int n) {
//         if (n == 0) return 1;
//         if (n  < 0) return 0;
//         if (dp[n] != -1) return dp[n];
//         return dp[n] = find(n-1) + find(n-2);
//     }
// };


//Using For Loop
// public:
//     int climbStairs(int n){
//         vector<int>dp(n+1,0);
//         dp[0] = 1;
//         dp[1] = 1;
//         for(int i = 2;i<=n;i++){
//             dp[i] = dp[i-1]+dp[i-2];
//         }
//         return dp[n];
//     }
// };

// Using two Pointer
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        
        int first = 1;  
        int second = 2; 
        
        for (int i = 3; i <= n; i++) {
            int current = first + second;
            first = second;
            second = current;
        }
        
        return second;
    }
};