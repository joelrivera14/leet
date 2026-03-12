class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> count;
        int sum = 0;
        for(int n : nums){
            count[n]++;
        }
        for(auto&[key,value] : count){
            if (value == 1){
                sum += key;
            }
        }
        return sum;
    }
};