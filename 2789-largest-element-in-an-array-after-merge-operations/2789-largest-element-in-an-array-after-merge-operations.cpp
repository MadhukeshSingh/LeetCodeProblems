class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long maxi  = 0;
        long n = nums.size();
        long end = nums[n-1];
        for(int i = n-2; i>=0 ; i--){
            long res = (long)nums[i];
            if (res<=end){
                end = end+ res;
                if(end>maxi){
                    maxi = end;
                }
            }
            else{
                if(end>maxi)
                    maxi = end;
                end = res;
        }
        }
            return end;
        
    }
};