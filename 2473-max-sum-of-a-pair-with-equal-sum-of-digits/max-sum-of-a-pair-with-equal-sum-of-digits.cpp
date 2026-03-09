class Solution {
public:
    int maximumSum(vector<int>& nums) {
       unordered_map<int, int> count;
       int ans = 0;

       for(int n : nums){
        int digSum = digitSum(n);
        if(count.find(digSum) != count.end()){
            ans = max(ans, n + count[digSum]);
        }
        count[digSum] = max(count[digSum],n);
       }
       return ans==0 ? -1 : ans;
    }

    int digitSum(int n){
        int dSum = 0;
        while(n>0){
            dSum += n%10;
            n/=10;
        }
        return dSum;
    }
};