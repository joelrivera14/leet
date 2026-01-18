class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n  = nums.size();

        vector<long> prefix = {nums[0]};
        for(int i = 1; i<n; ++i){
            prefix.push_back(nums[i] + prefix.back());
        }

        int ans = 0;
        for(int i = 0; i<n-1; ++i){
            long leftSide = prefix[i];
            long rightSide = prefix.back()-prefix[i];
            if(leftSide>=rightSide){
                ++ans;
            }
        }
        return ans;
    }
};