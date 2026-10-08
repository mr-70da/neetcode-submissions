class TrieNode {
   public:
    TrieNode* children[26];
    bool isLeaf;
    TrieNode() {
        this->isLeaf = false;
        for (int i{}; i < 26; i++) {
            children[i] = nullptr;
        }
    }
}; void insert(TrieNode* root, string key) {
    TrieNode* curr = root;
    for (char c : key) {
        if (curr->children[c - 'a'] == nullptr) {
            TrieNode* newNode = new TrieNode();
            curr->children[c - 'a'] = newNode;
        }
        curr = curr->children[c - 'a'];
    }
    curr->isLeaf = true;
}
bool isPrefix(TrieNode* root, string key) {
    TrieNode* current = root;
    for (char c : key) {
        int index = c - 'a';

        // If character doesn't exist, return false
        if (current->children[index] == nullptr or current->children[index]->isLeaf) {
            return false;
        }
        current = current->children[index];
    }

    return true;
}
class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        TrieNode *root = new TrieNode(),*curr;
        for (string s : strs) {
            insert(root, s);
        }
        curr = root;
        string ans = "";
        
        while(true){
            int cnt{0};
            char c;
            for(int i{0}; i<26 ;i++){
                if(curr->children[i]!=nullptr){
                    cnt++;
                    c = 'a'+ i;
                }
            } 
            if(cnt>1) break;
            if(curr->isLeaf) break;
            ans+=c;
            curr = curr->children[c-'a'];

        }
        return ans;
        }
};