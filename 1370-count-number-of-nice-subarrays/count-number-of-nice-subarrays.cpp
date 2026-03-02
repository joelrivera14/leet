class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       unordered_map<int, int> count;
       count[0]++;
       int ans = 0, current = 0;

       for(int num : nums){
        current += num%2;
        ans += count[current-k];
        count[current]++;
       }
       return ans; 
    }
};