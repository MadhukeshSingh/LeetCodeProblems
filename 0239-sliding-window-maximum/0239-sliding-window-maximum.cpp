class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> max_left(n);
        vector<int> max_right(n);

        max_left[0] = nums[0];
        max_right[n - 1] = nums[n - 1];

        for (int i = 1; i < n; i++) {
            max_left[i] = (i % k == 0) ? nums[i] : max(max_left[i - 1], nums[i]);

            int j = nums.size() - i - 1;
            max_right[j] = (j % k == 0) ? nums[j] : max(max_right[j + 1], nums[j]);
        }

        vector<int> ans(n - k + 1);
        for (int i = 0, j = 0; i + k <= n; i++) {
            ans[j++] = max(max_right[i], max_left[i + k - 1]);
        }

        return ans;
    }
};