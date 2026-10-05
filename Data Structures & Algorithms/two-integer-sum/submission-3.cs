public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int,int> lookup = new Dictionary<int,int>();
        for(int i = 0; i < nums.Length; i++){
            int index = (target-nums[i]);
            if(lookup.ContainsKey(index)){
                return [Math.Min(i,lookup[index]),Math.Max(i,lookup[index])];
            }
            lookup[nums[i]] = i;
        }
        throw new ArgumentException("No two sum solution found");
    }
}