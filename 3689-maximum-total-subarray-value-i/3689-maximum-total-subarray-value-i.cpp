class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int max_val = nums[0];
        int min_val = nums[0];

        for(int num: nums){
            if(num>max_val){
                max_val = num;
            }
            if(num<min_val){
                min_val = num;
            }
        }
        long best_sub_array_value = (long) max_val-min_val;
        return best_sub_array_value * k;
    }
};