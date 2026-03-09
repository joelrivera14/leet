class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelCount(jewels.begin(), jewels.end());
        int count = 0;

        for(char& c : stones){
            if(jewelCount.contains(c)){
                ++count;
            }
        }
        return count;
    }
};