class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int total =0, minV = 0;

        for(int num : nums){
            total += num;
            minV= min(minV, total);
        }

        return -minV +1;
    }
};