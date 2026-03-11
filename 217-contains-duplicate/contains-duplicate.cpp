class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> counter; 
        for(int n : nums){
            if(counter[n]>=1){
                return true;
            }
            counter[n]++;
        }  

        return false;
    }
};