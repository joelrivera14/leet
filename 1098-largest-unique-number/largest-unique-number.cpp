class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int, int> count;
        for(int n : nums){
            count[n]++;
        }
        int largestUniqueNum = -1;

        for(auto&[key,value] : count){
            if(value == 1){
                largestUniqueNum=max(largestUniqueNum,key);
            }
        }
        return largestUniqueNum;

    }
};