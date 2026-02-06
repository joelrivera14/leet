class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int first  = 0, second = 0;
        int n1 = nums1.size(), n2= nums2.size();
        while(first< n1 && second < n2){
            if(nums1[first] < nums2[second]){
                ++first;
            }
            else if(nums1[first] > nums2[second]){
                ++second;
            }
            else{
                return nums1[first];
            }
        }
        return -1;
    }
};