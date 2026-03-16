class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> pairs;
        int n=nums.size(), count = 0;

        for(int i = 0; i<n; ++i){
            if(pairs.find(nums[i]) != pairs.end()){
                count += pairs[nums[i]];
            }
            pairs[nums[i]]++;
        }
        return count;
    }
};