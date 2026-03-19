class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>oMap;
        string newStr ="";
        string extraChar="";
        for(int i = 0; i<order.size(); ++i){
            oMap[order[i]] = i;
        }
        for(char& c : s){
            if(oMap.contains(c)){
                newStr += c;
            }
            else{extraChar +=c;}
        }
        //remember to sort
        sort(newStr.begin(), newStr.end(), [&](const auto a, const auto b){
            return oMap[a]<oMap[b];
        });
        return newStr+extraChar;
    }
};