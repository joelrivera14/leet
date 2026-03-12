class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        for(int a : arr){
            count[a]++;
        }
        unordered_set<int> seen;
        for(auto& entry : count){
            seen.insert(entry.second);
        }
        return seen.size() == count.size();
    }
};