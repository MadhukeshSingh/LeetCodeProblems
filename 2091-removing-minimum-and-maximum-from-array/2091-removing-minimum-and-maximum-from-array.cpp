class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int n=nums.size();int minnum=nums[0], maxnum=nums[0] ,minindex=0, maxindex=0;
        int a=0,b=0;
        if(n==1)return 1;
        for(int i=0;i<n;i++){
            if(nums[i]<minnum){
                minnum=nums[i];
                minindex=i;
            }
            if(nums[i]>maxnum){
                maxnum=nums[i];
                maxindex=i;
            }
        }
   
a=min( n-min(minindex,maxindex), max(minindex,maxindex)+1);

b= n - max(minindex,maxindex) + min(minindex,maxindex) + 1;

      return min(a,b);
    }
};