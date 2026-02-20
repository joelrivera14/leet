class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> iSet(arr.begin(),arr.end());
        int count = 0;
        for(int i = 0; i<arr.size(); ++i){
            int num = arr[i];
            if(iSet.find(num + 1) != iSet.end()){
                ++count;
            }
        }
        return count;
    }
};