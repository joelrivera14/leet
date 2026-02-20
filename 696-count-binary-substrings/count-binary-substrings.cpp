class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevGroup = 0, currGroup = 1, count = 0;
        for(int i = 0; i<s.length()-1; ++i){
            if(s[i] == s[i+1]){
                ++currGroup;
            }
            else{
                prevGroup = currGroup;
                currGroup = 1;
            }
            if(prevGroup >= currGroup){
                ++count;
            }
        }
        return count;
    }
};