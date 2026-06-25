class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int> arr(n + 1, 0);
        for (int i = 0; i <= n; i++) {
            int left = max(0, i - ranges[i]);
            int right = min(n, i + ranges[i]);
            arr[left] = max(arr[left], right);
        }

        int count = 0;
        int curr = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            if (i > maxi) return -1; 

            maxi = max(maxi, arr[i]);

            if (i == curr) {
                count++;
                curr = maxi;
            }
        }

        return curr >= n ? count : -1;
    }
};