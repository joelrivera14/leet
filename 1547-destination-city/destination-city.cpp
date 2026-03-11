class Solution {
public:
    /*string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> flights;
        for(vector<string>& p : paths){
            flights[p[0]]++;
            flights[p[1]]++;
        }
        vector<string>singleFlights;
        for(auto&[key,value] : flights){
            if(value == 1){
                singleFlights.push_back(key);
            }
        }
        return singleFlights.front();
    }*/
    string destCity(vector<vector<string>>& paths){
        unordered_set<string> hasOutGoing;
        for(vector<string>& p : paths){
            hasOutGoing.insert(p[0]);
        }

        for(vector<string>& p : paths){
            string candidate = p[1];
            if(hasOutGoing.find(candidate) == hasOutGoing.end()){
                return candidate;
            }
        }
        return "";
    }
    
};