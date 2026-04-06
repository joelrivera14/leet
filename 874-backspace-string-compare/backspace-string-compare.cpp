class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return afterBackSpace(s) == afterBackSpace(t);
    }
    string afterBackSpace(string abs){
        string ans = "";
        for(char c : abs){
            if(c == '#'){
                if(!ans.empty()){
                    ans.pop_back();
                }
            }else{
                ans.push_back(c);
            }
        }
        return ans;
    }
};