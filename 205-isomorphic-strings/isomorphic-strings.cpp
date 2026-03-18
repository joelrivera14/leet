class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,char>string1;
       unordered_map<char,char>string2;

       for(int i = 0; i<s.size();++i){
        char sc = s[i], tc = t[i];
        if(string1.count(sc) && string1[sc] != tc) return false;
        if(string2.count(tc) && string2[tc] != sc) return false;
        string1[sc]=tc;
        string2[tc]=sc;
       }
       return true;
    }
};