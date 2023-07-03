
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int ans = 0;
        int i = 0;
        int n = nums.size();

        while (i < n) {
            if (nums[i] % 2 != 0 || nums[i] > threshold) {
                i++;
                continue;
            }

            ans = max(ans, 1);
            int j = i + 1;
            while (j < n) {
                if (nums[j] % 2 != nums[j - 1] % 2 && nums[j] <= threshold) {
                    ans = max(ans, j - i + 1);
                    j++;
                } else {
                    i = j;
                    break;
                }
            }
            if (j == n) {
                break;
            }
        }

        return ans;
    }
};
