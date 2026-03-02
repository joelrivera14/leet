class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        counter[0]++;
        int ans = 0, current = 0;

        for(int num : nums){
            current +=num;
            ans+=counter[current-k];
            counter[current]++;
        }
        return ans;
    }
};