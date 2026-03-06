class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int> count;
        int ans = INT_MAX;
        for(int c = 0; c<cards.size(); ++c){
            if(count.find(cards[c]) != count.end()){
                ans=min(ans, c-count[cards[c]] +1 );
            }
            count[cards[c]] = c;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};