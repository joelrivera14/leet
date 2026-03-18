class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sMap;
        unordered_map<char, char> tMap;

        for(int i = 0; i<s.length(); ++i){
            char sc = s[i], tc = t[i];
            if(sMap.contains(sc) &&  sMap[sc] != tc) return false;
            if(tMap.contains(tc) &&  tMap[tc] != sc) return false;

            sMap[sc] = tc;
            tMap[tc] = sc;
        }
        return true;
    }
};