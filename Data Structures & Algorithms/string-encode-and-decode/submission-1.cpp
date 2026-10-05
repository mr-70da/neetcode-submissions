class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string ="";
        for(int i{};i<strs.size();i++){
            encoded_string+=(to_string(strs[i].length())+"$"+strs[i]);
        }
        return encoded_string;

    }

    vector<string> decode(string s) {
        vector<string> decoded_strings;
        for(int i{};i<s.length();){
            string current_string_length;
            for(int j{i};j<s.length();j++){
                if(s[j]=="$"[0]){
                    i = j+1;
                    break;
                }
                current_string_length+=s[j];
            }
            string decoded_string="";
            int l=stoi(current_string_length);
            for(int j{i};j< i+l;j++){
                decoded_string+=s[j];
            }
            i+=l;
            decoded_strings.push_back(decoded_string);
        }
        return decoded_strings;

    }
};
