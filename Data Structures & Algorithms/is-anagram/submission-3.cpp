class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> s1(27,0);
        vector<int> s2(27,0);
        for(int i{} ; i < s.length() ; i++){
            s1[s[i]-'a']++;
        }
        for(int i{} ; i < t.length() ; i++){
            s2[t[i]-'a']++;
        }
        for(int i{} ; i < 27 ; i++){
            if(s1[i] != s2[i]) return false;

        }return true;
    }
};
