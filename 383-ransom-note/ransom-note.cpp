class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      unordered_map<char, int> rCount;
      for(char& c : ransomNote){
        rCount[c]++;
      } 

      for(char& m : magazine){
        if(rCount.find(m) != rCount.end()){
            rCount[m]--;
        }
      }
      
      for(auto&[key, value] : rCount){
        if(value>0){
            return false;
        }
      }
      return true;
    }
};