class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> sMap;
        unordered_map<char, string> pMap;
        vector<string> words;
        string word = "";

        for(int i = 0; i< s.size(); ++i){
            if(s[i] == ' '){
                words.push_back(word);
                word = "";
            } else{
                word += s[i];
            }
        }
        words.push_back(word);
        
        if(words.size() != pattern.size()) return false;

        for(int i = 0; i<pattern.size(); ++i){
            char c = pattern[i];
            string w = words[i];
            if(sMap.count(w) && sMap[w] != c) return false;
            if(pMap.count(c) && pMap[c] != w) return false;
            sMap[w] = c;
            pMap[c] = w;
        }
        return true;
    }
};