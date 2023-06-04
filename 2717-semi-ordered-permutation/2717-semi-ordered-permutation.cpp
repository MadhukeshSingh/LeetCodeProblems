class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
    int n = nums.size();
        int s=0;
        int e=0;
        for (int i = 0 ; i<n;i++){
            int val = nums[i];
            if(val ==1 ||val==n){
                if (val == 1){
                    s = i;
                }
                else {
                    e  = i;
                }
            }
        }
        int diff = n - e;
        diff--;
        int ans = s + diff;
        if(s>e){
            ans--;
        }
        return ans;
    }
};