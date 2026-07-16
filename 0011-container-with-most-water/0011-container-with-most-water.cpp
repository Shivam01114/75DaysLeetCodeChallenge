class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int maxi = 0;

        while (l < r) {
            int width = r - l;
            int mini = min(height[l], height[r]);
            int area = width * mini;

            maxi = max(maxi, area);

            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxi;
    }
};