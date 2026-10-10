class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int sz = nums.size();
        map<int, int> mp;
        int ans{}, prv{}, ct{};
        for (int i{}; i < sz; i++) {
            mp[nums[i]]++;
        }
        prv = mp.begin()->first;

        for (auto I : mp) {
            if (I.first - prv == 0 or abs(I.first - prv) == 1) {
                ct++;
            } else {
                ct = 1;
            }
            prv = I.first;
            ans = max(ans, ct);
        }
        return ans;
    }
};
