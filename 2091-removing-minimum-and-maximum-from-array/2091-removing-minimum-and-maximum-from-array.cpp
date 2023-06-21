class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        // remove untill it max of min
        
        int n = nums.size();
        if( n == 1){
            return 1;
        }
        if ( n==2){
            return 2;
        }
        // find min 
        int minindex=0;
        int min_el=INT_MAX;
        for ( int i=0; i< n;i++){
            
            min_el= min(min_el, nums[i]);
           
        }
        for ( int i=0;i< n;i++){
            if (nums[i]==min_el){
                minindex =i;
            }
        }
        // find max
        int mxindex=0;
        int max_el=INT_MIN;
        for ( int i=0; i< n;i++){
            
            max_el=  max( max_el, nums[i]);
           
        }
        for ( int i=0;i< n;i++){
            if (nums[i]== max_el){
                mxindex =i;
            }
        }
        int high = max(mxindex,minindex);
        int low = min(mxindex,minindex);
        
        int t = min(high+1,n-low);
        return min(t, low + n-high + 1);
    }
};