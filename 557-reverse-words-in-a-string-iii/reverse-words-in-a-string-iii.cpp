class Solution {
public:
    string reverseWords(string s) {
        int lSI = -1;
        int size = s.size();
        for(int strIndex = 0; strIndex <= size; ++strIndex){
            if(strIndex == size || s[strIndex] == ' '){
                int start = lSI + 1;
                int end = strIndex-1;
                while(start<end){
                    char t = s[start];
                    s[start] = s[end];
                    s[end] = t;
                    ++start;
                    --end;
                }
                lSI = strIndex;
            }
        }
        return s;
        
    }
};