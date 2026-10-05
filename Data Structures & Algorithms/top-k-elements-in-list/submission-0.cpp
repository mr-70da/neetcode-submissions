class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> counts;
        for (int x : nums) {
            counts[x]++;
        }
        vector<vector<int>> buckets(n + 1);
        for (auto const& [val, freq] : counts) {
            buckets[freq].push_back(val);
        }
        vector<int> result;
        for (int i = n; i >= 0 && result.size() < k; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) return result;
            }
        }
        
        return result;
    }

};
