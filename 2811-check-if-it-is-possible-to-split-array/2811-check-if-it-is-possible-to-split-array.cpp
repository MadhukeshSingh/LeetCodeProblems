class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        bool ans = false;

    if (nums.size() == 1 && m >= 1)
        return true;

    if (nums.size() == 2)
        return true;

    for (int i = 0; i < nums.size() - 1; i++) {
        int sum = nums[i] + nums[i + 1];
        if (sum >= m) {
            ans = true;
        }
    }
    return ans;
    }
};