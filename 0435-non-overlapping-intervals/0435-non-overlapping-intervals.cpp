class Solution {
public:
static bool compare(vector<int> &a, vector<int> &b){
        if(a[1]==b[1]) return a[0]<b[0];
        return a[1]<b[1];
    }
    
    int search(vector<vector<int>> &a, int idx){
        int l=0, r=idx-1;
        
        while(l<r){
            int m=l+(r-l+1)/2;
            if(a[m][1]<=a[idx][0]){
                l=m;
            }else{
                r=m-1;
            }
        }
        return (a[l][1]<=a[idx][0] ? l:-1);
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        sort(a.begin(),a.end(),compare);
        int n=a.size();
        
        vector<int> dp(n,1); 

        int ans=1;
        for(int i=1;i<n;i++){
            int idx=search(a,i);
            dp[i]=max(1,dp[i-1]);
            if(idx!=-1) dp[i]=max(dp[i],1+dp[idx]);
            ans=max(ans,dp[i]);
        } 
        return n-ans;
        
    }
};
