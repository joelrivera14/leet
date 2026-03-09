class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> jewelCount;
        int count = 0;
        for(char& c : jewels){
            jewelCount[c]++;
        }

        for(char& c : stones){
            if(jewelCount.contains(c)){
                ++count;
            }
        }
        return count;
    }
};