class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();

        for (int i = n - 1; i >= 0; i--) {
            int maxi = 0, id = -1;
            for (int j = 0; j <= i; j++) {
                if (arr[j] > maxi) {
                    maxi = arr[j];
                    id = j;
                }
            }

            if (id == i) continue;
            if (id != 0) {
                ans.push_back(id + 1);
                reverse(arr.begin(), arr.begin() + id + 1);
            }

            ans.push_back(i + 1);
            reverse(arr.begin(), arr.begin() + i + 1);
        }
        return ans;
    }
};