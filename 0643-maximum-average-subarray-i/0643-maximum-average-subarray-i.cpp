class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0, j = 0;
        double sum = 0;
        int n = nums.size();
        double maxAvg = INT_MIN;
        
        while (j < n) {
            sum += nums[j];
            
            if (j - i + 1 < k) {
                j++;
            }
            else if (j - i + 1 == k) {
                maxAvg = std::max(maxAvg, sum / k);
                sum -= nums[i];
                i++;
                j++;
            }
        }
        
        return maxAvg;
    }
};