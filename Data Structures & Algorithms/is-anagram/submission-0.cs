public class Solution {
    public bool IsAnagram(string s, string t) {
        int[] freq1 = new int[26];
        int[] freq2 = new int[26];
        foreach(char c in s){
            freq1[c-'a']++;
        }
        foreach(char c in t){
            freq2[c-'a']++;
        }
        for(int i = 0 ; i<26 ; i++){
            if(freq1[i]!=freq2[i])
                return false;
        }
        return true;

    }
}
