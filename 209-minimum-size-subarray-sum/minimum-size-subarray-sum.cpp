class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, current = 0, answer =INT_MAX;
        for(int right = 0; right<nums.size(); ++right){
            current += nums[right];
            while(current >= target){
                answer = min(answer, right-left+1);
                current -= nums[left];
                ++left;
            }
        }
        return answer == INT_MAX ? 0 : answer;
    }
};