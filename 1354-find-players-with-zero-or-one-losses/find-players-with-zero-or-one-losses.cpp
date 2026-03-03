class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_set<int> seen;
        unordered_map<int, int> lossesCount;

        for(vector<int>& m : matches){
            int winner = m[0], loser = m[1];
            seen.insert(winner);
            seen.insert(loser);
            lossesCount[loser]++;
        }
        //adding players with 0,1 loss to correct list
        vector<vector<int>>ans(2,vector<int>());
        for(int s : seen){
            if (lossesCount.find(s) == lossesCount.end()){
                ans[0].push_back(s);
            }
            else if (lossesCount[s] == 1){
                ans[1].push_back(s);
            }
        }
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        return ans;
    }
};