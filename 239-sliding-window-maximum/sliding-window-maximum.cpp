class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> index;
        vector<int>answer;

        for(int i = 0; i<nums.size(); ++i){
            while(!index.empty() && nums[index.back()] < nums[i]){
                index.pop_back();
            }
            index.push_back(i);

            if(index.front()<=i-k) index.pop_front();
            if(i >= k-1) answer.push_back(nums[index.front()]);
        }
        return answer;
    }
};