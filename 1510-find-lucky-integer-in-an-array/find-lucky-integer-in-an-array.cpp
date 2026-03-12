class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> count;
        int maxV = 0;
        for(int a : arr){
            count[a]++;
        }
        for(auto& entry : count){
            if(entry.first == entry.second){
                maxV =max(maxV,entry.first);
            }
        }
        return maxV == 0? -1 : maxV;
    }
};