class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int n : nums){
            freq[n]++;
        }
        int maxOcurr = 0;
        int count = 0;
        for(auto& entry : freq){
            maxOcurr = max(maxOcurr , entry.second);
        }
        for(auto& entry : freq){
            if(entry.second == maxOcurr){
                ++count;
            }
        }
        return count * maxOcurr;
    }
};