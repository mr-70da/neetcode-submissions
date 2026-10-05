class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = nums.size();
        vector<int> ans(sz);
        int p{1};
        int zeroCt{};
        for(int i{}; i < sz; i++){
            if(nums[i] == 0){ zeroCt++; continue;}
            p*=nums[i];
        }
        for(int i {}; i < sz ; i++){
            if(zeroCt > 1){
                ans[i] = 0;
            }else if( zeroCt == 1 and nums[i] == 0){
                ans[i] = p;
            }else if( zeroCt == 1){
                ans[i] = 0;
            }
            else{
                ans[i] = p/nums[i];
            }       
        }
        return ans;
    }
};
