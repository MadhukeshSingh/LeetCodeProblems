class Solution {
             int mod=1e9+7;
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        int n=nums.size();
        int v[n], p = 0;
 
    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            v[p] = i + 1;
            p++;
        }
    }
 
    if (p == 0) return 0;
 
    long long ways = 1;
    for (int i = 0; i < p - 1; i++) {
        ways =((ways)%mod * (v[i + 1] - v[i])%mod)%mod;
    }
 
    return ways; 
    }
};