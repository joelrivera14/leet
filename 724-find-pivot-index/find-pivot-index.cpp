class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int leftT = 0;
        for(int i = 0; i<nums.size(); ++i){
            int rightT = total - leftT - nums[i];
            if( rightT == leftT){
                return i;
            }
            leftT +=nums[i];
        }
        return -1;
    }
};