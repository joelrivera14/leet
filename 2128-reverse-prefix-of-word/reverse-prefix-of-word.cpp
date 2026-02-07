class Solution {
public:
    string reversePrefix(string word, char ch) {
        int left = 0, index = 0;
        for(char c : word){
            if(c == ch){
                int right = index;

                while(left<right){
                    swap(word[left], word[right]);
                    ++left;
                    --right;
                }
                return word;
            }
            ++index;
        }
        return word;
    }
};