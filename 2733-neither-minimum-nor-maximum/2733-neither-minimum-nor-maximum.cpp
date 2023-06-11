class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
       if (nums.size() <= 2) return -1;
        int min_num = *std::min_element(nums.begin(), nums.end());
        int max_num = *std::max_element(nums.begin(), nums.end());
        for (int num : nums) {
            if (num != min_num && num != max_num) {
                return num;
            }
        }
        return -1;
    }
};