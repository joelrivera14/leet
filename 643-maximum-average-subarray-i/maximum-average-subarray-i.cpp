class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double window = 0;
        for(int i = 0; i<k; ++i){
            window += nums[i];
        }
        
        double answer = window;
        
        for(int i = k; i <nums.size(); ++i){
            window += nums[i]-nums[i-k];
            answer = max(window, answer);
        }
        
        return answer/k;
    }
};