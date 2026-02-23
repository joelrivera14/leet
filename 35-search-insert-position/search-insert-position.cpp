class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pivot = 0, left = 0, right = nums.size()-1;
        while(left<=right){
            pivot = left+ (right-left) /2;
            if(target == nums[pivot]){
                return pivot;
            }
            else if(nums[pivot] > target){
                right = pivot -1;
            }
            else{
                left = pivot +1;
            }
        }
        return left;
    }
};