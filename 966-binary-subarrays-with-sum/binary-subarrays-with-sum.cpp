class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> freq;
        int totalSum = 0;
        int currentSum = 0;

        for(int n : nums){
            currentSum += n;
            if(currentSum == goal){
                totalSum++;
            }

            if(freq.find(currentSum-goal) != freq.end()){
                totalSum += freq[currentSum-goal];
            }
            freq[currentSum]++;
        }
        return totalSum;
    }
};