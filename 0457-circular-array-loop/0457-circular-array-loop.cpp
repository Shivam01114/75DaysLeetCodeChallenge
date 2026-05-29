class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            bool d;
            if (nums[i] > 0)
                d = true;
            else d = false;
            int s = i, f = i;
            while (true) {
                int nextS = next(nums, s);
                int nextF = next(nums, f);
                int nextF2 = next(nums, nextF);

                if (d) {
                    if (nums[nextS] < 0 || nums[nextF] < 0 || nums[nextF2] < 0)
                        break;
                } else {
                    if (nums[nextS] > 0 || nums[nextF] > 0 || nums[nextF2] > 0)
                        break;
                }
                if (nextS == nextF2) {
                    if (nextS == next(nums, nextS))
                        break;
                    return true;
                }
                s = nextS;
                f = nextF2;
            }
        }
        return false;
    }
    int next(vector<int>& nums, int i) {
        int n = nums.size();
        return ((i + nums[i]) % n + n) % n;
    }
};