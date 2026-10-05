class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans {},sub{},j{};
        unordered_map<char,int> exist;
        for(int i{}; i<n; i++){
            exist[s[i]]++;
            while(exist[s[i]]>1){
                exist[s[j++]]--;
            }
            ans = max(i-j+1,ans);
        }
        return ans;
    }
};
