class Solution {
public:
    string removeDuplicates(string s) {
        string nStr = "";

        for(char c : s){
            if(!nStr.empty() && c == nStr.back()){
                nStr.pop_back();
            }else{
                nStr.push_back(c);
            }
        }
        return nStr;
    }
};