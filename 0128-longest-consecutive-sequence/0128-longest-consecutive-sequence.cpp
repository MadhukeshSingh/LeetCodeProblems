class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int n=nums.size();
        unordered_set<int> st;
        for(auto &x : nums)
            st.insert(x);
         int ans=0;
        for(int i=0;i<n;i++){
            if(st.find(nums[i]-1)==st.end()){
                int num=nums[i];
                while(st.find(num)!=st.end()){
                    num++;
                }
                ans=max(ans, num-nums[i]);
            }
        }
        return ans;
    }
};