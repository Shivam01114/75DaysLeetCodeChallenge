class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = INT_MIN, curr = 1, n = nums.size();

        for (int i = 0; i < n; i++) {
            curr = nums[i] * curr;
            maxP = max(maxP, curr);

            if (curr == 0)
                curr = 1;
        }

        curr = 1;
        for (int i = n - 1; i >= 0; i--) {
            curr = nums[i] * curr;
            maxP = max(maxP, curr);

            if (curr == 0)
                curr = 1;
        }

        return maxP;
    }
};