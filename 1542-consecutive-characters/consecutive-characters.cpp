class Solution {
public:
    int maxPower(string s) {
        int si = s.size();
        int left = 0, count = 1, ans = 0;
        if(si == 1) return 1;
        for(int right = 1; right< si; ++right){
            if(s[left] == s[right]){
                ++count;
            }
            else{
                left = right;
                count =1;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};