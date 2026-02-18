class Solution {
public:
    char repeatedCharacter(string s) {
       unordered_map<char, int> map;
       for(int i = 0; i<s.size(); ++i){
        char c = s[i];
        if (map.contains(c)){
            return c;
        }
        map[c]= i;
       }
       return 0; 
    }
};