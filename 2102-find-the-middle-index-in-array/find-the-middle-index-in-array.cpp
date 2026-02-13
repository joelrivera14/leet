class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(),0);
        int lt = 0;
        for(int i = 0; i<nums.size(); ++i){
            int rt = total - lt - nums[i];
            if(lt == rt){
                return i;
            }
            lt+=nums[i];
        } 
        return -1;
    }
};