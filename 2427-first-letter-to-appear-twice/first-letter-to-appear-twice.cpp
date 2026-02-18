class Solution {
public:
    char repeatedCharacter(string s) {
       unordered_set<char>setHolder;
       for(char c : s){
        if(setHolder.contains(c)){
            return {c};
        }
        setHolder.insert(c);
       } 
       return 0;
    }
};