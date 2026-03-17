class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> count;
        int n = nums.size();
        int left = 0, ans = 0, total = 0;

        for(int right = 0; right<n; ++right){
            while(count[nums[right]] > 0){
                count[nums[left]]--;
                total -= nums[left];
                left++;
            }
            total += nums[right];
            count[nums[right]]++;
            ans=max(ans, total);
        }

        return ans;
    }
};