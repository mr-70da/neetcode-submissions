class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        int i{},j= s1.length();
        vector<int>freq(26,0),freq2(26,0);
        for(int i {} ; i <s1.length();i++){
            freq[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        int cnt{};
        for(int i{};i <26;i++){
            if(freq[i] == freq2[i]) cnt++;
        }
        while(j < s2.length()){
            if(cnt == 26) return true;
            int r = s2[j] - 'a';
            freq2[r]++;
            if (freq2[r] == freq[r]) cnt++;
            else if (freq2[r] == freq[r] + 1) cnt--;
            int l = s2[i] - 'a';
            freq2[l]--;
            if (freq2[l] == freq[l]) cnt++;
            else if (freq2[l] == freq[l] - 1) cnt--;
            j++;i++;
        }
        return cnt==26;

    }
};
