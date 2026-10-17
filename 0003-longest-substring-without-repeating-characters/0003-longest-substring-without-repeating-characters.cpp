    class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>ans(128, -1);
        int left = 0;
        int maxLength = 0;
        for (int right = 0; right < s.length(); ++right) {
            char c = s[right];
            if (ans[c] >= left) {
                left = ans[c] + 1;
            }
           ans[c] = right;
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};