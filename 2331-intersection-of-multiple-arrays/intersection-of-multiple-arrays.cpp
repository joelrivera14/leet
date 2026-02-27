class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> count;
        for(vector<int> arr : nums){
            for(int x : arr){
                count[x]++;
            }
        }
        int s = nums.size();
        vector<int> ans;
        for(auto[key,value] : count){
            if(value == s){
                ans.push_back(key);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};