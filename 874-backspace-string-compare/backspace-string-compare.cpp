class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string nS = "";
        string nT = "";
        for(char c : s){
            if(c == '#'){
                if(!nS.empty()){
                    nS.pop_back();
                }
            }else{
                nS.push_back(c);
            }
        }
        for(char c : t){
            if(c == '#'){
                if(!nT.empty()){
                    nT.pop_back();
                }
            }else{
                nT.push_back(c);
            }
        }
        return nS == nT;
    }
};