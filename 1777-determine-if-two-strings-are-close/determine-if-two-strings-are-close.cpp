class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> string1(26,0);
        vector<int> string2(26,0);

        for(char& c : word1){
            string1[c -'a']++;
        }
        for(char& c : word2){
            string2[c -'a']++;
        }

        for(int i = 0; i<26; ++i){
            if(string1[i] == 0 && string2[i] != 0 || string2[i] == 0 && string1[i] != 0){
                return false;
            }
        }
        sort(string1.begin(), string1.end());
        sort(string2.begin(), string2.end());

        for(int i = 0; i<string1.size(); ++i){
            if(string1[i]!=string2[i]){
                return false;
            }
        }
        return true;
    }
};