class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,bool> freq;
        for(int i{}; i < nums.size() ; i++){
            if(freq.contains(nums[i])) return true;
            freq[nums[i]] = 1;
        }
        return false;
    }
};