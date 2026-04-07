class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int t = temperatures.size();
        stack<int> index;
        vector<int> answer(t);

        for(int i = 0; i<t; i++){
            while(!index.empty() && temperatures[index.top()] < temperatures[i]){
                int j = index.top();
                answer[j] = i-j;
                index.pop();
            }
            index.push(i);
        }
        return answer;
    }
};