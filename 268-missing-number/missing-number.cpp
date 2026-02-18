class Solution {
public:
    int missingNumber(vector<int>& nums) {
      unordered_set<int> iSet(nums.begin(),nums.end());
      int n = nums.size() + 1;
      for(int i = 0; i<n; ++i){
        if(!iSet.contains(i)){
            return i;
        }
      }
      return -1;  
    }
};