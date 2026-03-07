class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> sumKeys;
        int ans = -1;

        for(int n : nums){
        int digitS = getDigitSum(n);
            if(sumKeys.find(digitS) != sumKeys.end()){
                ans = max(ans, n+sumKeys[digitS]);
            }
            sumKeys[digitS] = max(n,sumKeys[digitS]);
        }
        return ans;
    }

    int getDigitSum(int num){
        int digitSum = 0;
        while(num>0){
            digitSum += num%10;
            num/=10;
        }
        return digitSum;
    }
};