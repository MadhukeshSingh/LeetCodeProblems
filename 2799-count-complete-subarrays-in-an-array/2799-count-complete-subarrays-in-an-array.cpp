class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
         int n = nums.size();
        int cnt = 0; 
        unordered_map<int, int> freq; 
        int l = 0; 
        int ans = 0; 
        
        for (int num : nums) {
            if (freq[num] == 0) {
                ++cnt;
            }
            ++freq[num];
        }
        
        freq.clear();
        
        for (int right = 0; right < n; ++right) {
            ++freq[nums[right]];
            
            while (l <= right && freq.size() == cnt) {
                ans += n - right;
                
                if (--freq[nums[l]] == 0) {
                    freq.erase(nums[l]);
                }
                ++l;
            }
        }
        
        return ans;
    }
};