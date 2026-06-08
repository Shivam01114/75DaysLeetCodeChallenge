class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {

        int n = arr.size();
        sort(arr.begin(),arr.end());
        string s1 = arr[0];
        string s2 = arr[n-1];
        int i = 0;
        while (i<s1.size() && i<s2.size() && s1[i] == s2[i]) i++;
        return s1.substr(0,i);
    }
};