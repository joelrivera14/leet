class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> count;
        int n = nums.size();

        for(int i = 0; i<n; ++i){
            int complement = target-nums[i];
            if(count.contains(complement)){
                return {i,count[complement]};
            }
            count[nums[i]] = i;
        }
        return {-1,-1};
    }
};