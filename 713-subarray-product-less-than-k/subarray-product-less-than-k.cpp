class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1){return 0;}
        int left = 0, ans = 0, current = 1;
        for(int right = 0; right < nums.size(); ++right){
            current *= nums[right];
            while(current >= k){
                current /= nums[left];
                ++left;
            }
            ans += right-left+1;
        }
        return ans;
    }
};