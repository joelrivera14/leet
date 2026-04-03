class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        unordered_map<char,char>mapping {
            {'(',')'},
            {'[',']'},
            {'{','}'}
        };

        for(char c : s){
            if(mapping.contains(c)){
                brackets.push(c);
            }else{
                if(brackets.empty() || mapping[brackets.top()] != c){
                    return false;
                }
                brackets.pop();
            }
        }
        return brackets.empty();
    }
};