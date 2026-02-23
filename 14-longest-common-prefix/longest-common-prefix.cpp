class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans = "";
       int length = strs.size();
       sort(strs.begin(), strs.end());
       for(int i =0; i < strs[0].size();++i){
        if(strs[0][i] != strs[length-1][i]){
            break;
        }
            ans += strs[0][i];
       }
       return ans; 
    }
};