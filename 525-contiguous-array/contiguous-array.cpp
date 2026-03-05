class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> count;
        count[0]= -1;
        int counter =0, ans = 0;

        for(int i=0; i < nums.size(); ++i){
            if (nums[i] == 1){
                counter++;
            }
            else{
                counter--;
            }

            if(count.contains(counter)){
                ans = max(ans, i-count[counter]);
            }
            else{
                count[counter] = i;
            }
        }
        return ans;
    }
};