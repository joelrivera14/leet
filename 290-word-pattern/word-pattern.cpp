class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> pMap;
        unordered_map<string, char> sMap;
        vector<string>words;
        string word = "";

        for(char&c : s){
            if(c == ' '){
                words.push_back(word);
                word = "";
            }
            else{
                word+=c;
            }
        }
        words.push_back(word);

        if(words.size() != pattern.size()) return false;

        for(int i = 0; i<words.size(); ++i){
            char p = pattern[i];
            string w = words[i];
            if(pMap.contains(p) && pMap[p] != w) return false;
            if(sMap.contains(w) && sMap[w] != p) return false;
            pMap[p] = w;
            sMap[w] = p;
        }
        return true;

    }
};