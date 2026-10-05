class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> num;
        for(int i{}; i < nums.size(); i++){
            if(num.contains(target-nums[i])) return {num[target-nums[i]],i};
            num[nums[i]] = i;
        }

    }
};
