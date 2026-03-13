class Solution {
public:
    string frequencySort(string s) {
      unordered_map<char, int> freq;
      for(char& c : s){
        freq[c]++;
      }
      vector<pair<char,int>> vect(freq.begin(),freq.end());
      sort(vect.begin(),vect.end(), [](const auto& a, const auto& b){
        return a.second>b.second;
      });

      string nS="";
      for(auto& v : vect){
        for(int i = 0; i<v.second; ++i){
            nS+=v.first;
        }
      }
      return nS;
    }
};