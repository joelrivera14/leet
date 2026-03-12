class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<char, pair<int,int>>moves;
        moves['N'] = {0,1};
        moves['S'] = {0,-1};
        moves['W'] = {-1,0};
        moves['E'] = {1,0};

        unordered_set<string>visted;
        visted.insert("0,0");

        int x=0, y=0;
        for(char p : path){
            pair<int, int> current = moves[p];
            int mX = current.first;
            int mY = current.second;
            x+= mX;
            y+= mY;
            
            string coordinates = to_string(x)+","+to_string(y);
            if(visted.find(coordinates) != visted.end()){
                return true;
            }
            visted.insert(coordinates);
        }
        return false;
    }
};