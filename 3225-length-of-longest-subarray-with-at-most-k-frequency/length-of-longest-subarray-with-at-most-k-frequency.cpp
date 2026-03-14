class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, ans = 0;
        unordered_map<int, int> counter;

        for(int right =0; right<n; ++right){
            counter[nums[right]]++;
            while(counter[nums[right]] > k){
                counter[nums[left]]--;
                left++;
            }
            ans=max(ans, right-left+1);
        }
        return ans;
    }
};