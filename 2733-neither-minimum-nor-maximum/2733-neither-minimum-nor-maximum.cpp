class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
         int minNum = INT_MAX;
    int maxNum = INT_MIN;
 
    for (int num : nums) {
        if (num < minNum) {
            minNum = num;
        }
        if (num > maxNum) {
            maxNum = num;
        }
    }
  
    for (int num : nums) {
        if (num != minNum && num != maxNum) {
            return num;
        }
    }

    return -1;
    }
};