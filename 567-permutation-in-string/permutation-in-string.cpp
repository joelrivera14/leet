class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        unordered_map<char,int> string1;
        unordered_map<char,int> string2;
        for(int i = 0; i<s1.size(); i++){
            string1[s1[i]]++;
            string2[s2[i]]++;
        }
        if(string1 == string2){
            return true;
        }
        int left = 0;
        for(int right = s1.size(); right<s2.size(); right++){
            string2[s2[right]]++;
            string2[s2[left]]--;
            if(string2[s2[left]]==0){
                string2.erase(s2[left]);
            }
            ++left;
            if(string1 == string2){
            return true;
        }
        }
        return false;
    }
};