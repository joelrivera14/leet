class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i = 0; i<nums.size(); ++i){
            int num = nums[i];
            int complement  = target - num;
            if(map.contains(complement)){
                return {i,map[complement]};
            }
            map[num] = i;
        }
        return {-1,-1};
    }
};