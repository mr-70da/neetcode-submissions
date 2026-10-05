class Solution {
public:
    int binary(vector<int>& nums, int l , int r, int& target){
    int m = l + (r - l) / 2;
    if(l>r)
        return -1;
    if( nums[m] == target ){
        return m;
    }
    if (nums[m] > target) {
        return binary(nums,l ,m-1 , target);
    }return binary(nums,m+1,r , target);

}
int search(vector<int>& nums, int target) {
    return binary(nums, 0 , nums.size()-1 , target);
}
};
