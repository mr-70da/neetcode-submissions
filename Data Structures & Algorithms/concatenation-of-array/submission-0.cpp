class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int sz = nums.size();
        vector<int> ans(sz*2);
        for (int i{};i<sz;i++){
            ans[i] = nums[i];
            ans[i+sz] =nums[i];
        }
        return ans;
    }
};