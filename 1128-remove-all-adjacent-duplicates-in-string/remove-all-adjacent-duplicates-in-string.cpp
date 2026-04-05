class Solution {
public:
    string removeDuplicates(string s) {
        string sString = "";
        for(char c : s){
            if(!sString.empty() && sString.back() == c){
                sString.pop_back();
            }else{
                sString.push_back(c);
            }
        }
        return sString;
    }
};