class Solution {
public:
    string makeGood(string s) {
        string nS = "";
        for(char c : s){
            if(!nS.empty() && abs(nS.back() - c) == 32) nS.pop_back();
            else nS+=c;
        }
        return nS;
    }
};