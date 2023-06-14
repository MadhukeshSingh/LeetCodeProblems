class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x:nums)
        {
            m[x]++;
        }
       for(auto e:m)
        {
            if(e.second==1)
            {
                return e.first;
            }
        }
      return 0;  
    }
};