class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int ans = nums.size() + 1;
        int sum = 0;
        int st = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            while (sum >= target && st <= i) {
                ans = min(ans, i - st + 1);
                sum -= nums[st++];
            }
        }
        return (ans == nums.size() + 1) ? 0 : ans;
    }
};