class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int minimum = -1;
        int n = nums.size()-1;
        for (int i = 0; i<n;i++){
            int diff = nums[i+1]-nums[i];
            if(minimum==-1)
                minimum = diff;
            else{
                if(diff<minimum)
                    minimum = diff;
            }
        }
        return minimum;
    }
};