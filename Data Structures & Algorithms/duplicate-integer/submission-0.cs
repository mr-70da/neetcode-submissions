public class Solution {
    public bool hasDuplicate(int[] nums) {
        Dictionary<int,bool> freq = new Dictionary<int,bool>();
        for(int i = 0; i<nums.Length;i++){
            if(freq.ContainsKey(nums[i])){
                return true;
            }else{
                freq.Add(nums[i],true);
            }
            
        }return false;
    }
}