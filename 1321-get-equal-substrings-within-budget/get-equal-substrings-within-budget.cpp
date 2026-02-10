class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int left = 0, current =0, maxLength = 0;

        for(int right = 0; right< s.size(); ++right){
            current += abs(s[right]-t[right]);

            while(current>maxCost){
            current -= abs(s[left]-t[left]);
            ++left;
        }
        maxLength=max(maxLength, right - left+1);
        }
    return maxLength;
    }
};