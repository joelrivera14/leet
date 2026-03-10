class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> charTracker;
        int left = 0, ans = 0;
        for(int right = 0; right < n; ++right){
            if(charTracker.contains(s[right])){
                left = max(left,charTracker[s[right]]);
            }
            ans = max(ans, right - left + 1);
            charTracker[s[right]] = right + 1;
        }
        return ans;
    }
};