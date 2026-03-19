class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> count;
        string result = "";

        for(char& c : s){
            count[c]++;
        }
        for(char& c : order){
            while(count[c]>0){
                result += c;
                count[c]--;
            }
        }
        for(auto& [key,value] : count){
            while(count[key]>0){
             result += key;
             count[key]--;   
            }
        }
        return result;
    }
};