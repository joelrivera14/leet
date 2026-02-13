class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int total = 0, maxH = 0;
        for(int g : gain){
            total +=g;
            maxH = max(total, maxH);
        }
        return maxH;
    }
};