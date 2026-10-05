class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> freq;
        for(int i{}; i < strs.size() ; i++){
            vector<int> s(27,0);
            for(int j{}; j<strs[i].length(); j++){
                s[strs[i][j]-'a']++;
            }
            string key="";
            for(int i{ }; i<s.size();i++){
                key+="$"+to_string(s[i]);
            }
            freq[key].push_back(strs[i]); 
        }

        
        vector<vector<string>> ans;
        for(auto i:freq){
            vector<string> strings;
            for( auto j:i.second){
                strings.push_back(j);
            }
            ans.push_back(strings);
        }
        return ans;
    }
};
