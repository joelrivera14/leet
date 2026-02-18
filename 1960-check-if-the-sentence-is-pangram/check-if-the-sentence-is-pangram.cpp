class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> cSet(sentence.begin(), sentence.end());

        return cSet.size() == 26;
    }
};