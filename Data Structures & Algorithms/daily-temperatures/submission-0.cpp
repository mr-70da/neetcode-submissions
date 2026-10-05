class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        stack<pair<int,int>> st;
        vector<int> ans(temps.size());
        for(int i{}; i<temps.size();i++){
            while(!st.empty() && temps[i] >st.top().first){
                pair<int,int> p = st.top();
                st.pop();
                ans[p.second] = i - p.second;
            }
            st.push({temps[i],i});
        }
        return ans;
    }

};
