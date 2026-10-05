class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sz = nums.size();
        int mxSum{nums[0]},curr{nums[0]}; 
        for (int i{1} ; i <sz  ;i++){
            curr = max(nums[i] , curr+nums[i]);
            mxSum = max(mxSum , curr);
        }
        return mxSum;
        
    }
};
