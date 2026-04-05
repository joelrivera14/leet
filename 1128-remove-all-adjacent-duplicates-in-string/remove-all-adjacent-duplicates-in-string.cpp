class Solution {
public:
    string removeDuplicates(string s) {
        string nString = "";
        for(char c : s){
            if(!nString.empty() && nString.back() == c){
                nString.pop_back();
            }else{
                nString.push_back(c);
            }
        }
        return nString;
    }
};