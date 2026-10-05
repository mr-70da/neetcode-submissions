class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        //(target-position[i])/speed[i]
        for(int i{};i<speed.size();i++){
            v.push_back({position[i],speed[i]});
        }
        sort(v.rbegin(),v.rend());
        int fleet{};
        float mxT{};
        vector<double> st;
        for(int i{};i<speed.size();i++ ){
            st.push_back((double)(target-v[i].first)/v[i].second);
            if(st.size()>=2 && st.back() <= st[st.size()-2]){
                st.pop_back();
            }

        }
        return st.size();
    }
};
