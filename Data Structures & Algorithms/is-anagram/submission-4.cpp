class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> s1(27,0);
        for(int i{} ; i < s.length() ; i++){
            s1[s[i]-'a']++;
        }
        for(int i{} ; i < t.length() ; i++){
            s1[t[i]-'a']--;
        }
        for(int i{} ; i < 27 ; i++){
            if(s1[i] != 0) return false;
        }return true;
    }
};
