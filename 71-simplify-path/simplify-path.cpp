class Solution {
public:
    string simplifyPath(string path) {
        vector<string>nPath;
        stringstream ss(path);
        string temp;
        while(getline(ss, temp, '/')){
            if(temp == ".."){
                if(!nPath.empty()){
                    nPath.pop_back();
                }
            }else if(temp != "." && !temp.empty()){
                nPath.push_back(temp);
            }
        }
        string result = "";
        for(auto& s : nPath) result += "/"+s;
        if(result.empty())return "/";
        else return result;
    }
};