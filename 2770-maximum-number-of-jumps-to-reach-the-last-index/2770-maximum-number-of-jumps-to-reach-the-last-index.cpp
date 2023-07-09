class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();
        int less = target * -1;
        vector<int> dp(n, 0);

        for (int i = n - 2; i >= 0; i--) {
            int maxJumps = 0;
            int lastJump = 0;

            for (int j = i + 1; j < n; j++) {
                int diff = nums[j] - nums[i];

                if (diff >= less && diff <= target) {
                    if (j < n - 1) {
                        int jumps = dp[j];
                        maxJumps = max(maxJumps, jumps);
                    } else {
                        if (1 > maxJumps) {
                            maxJumps = 1;
                            lastJump = 1;
                        }
                    }
                }
            }

            if (lastJump == 1) {
                dp[i] = 1;
            } else if (maxJumps > 0) {
                dp[i] = maxJumps + 1;
            }
        }

        if (dp[0] > 0) {
            return dp[0];
        } else {
            return -1;
    }
    }
};