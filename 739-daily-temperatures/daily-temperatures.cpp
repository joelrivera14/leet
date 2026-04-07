class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> index;
        vector<int> answer(temperatures.size());

        for(int i = 0; i<temperatures.size(); i++){
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