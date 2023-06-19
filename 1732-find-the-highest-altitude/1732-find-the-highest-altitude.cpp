class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res = 0, s = 0;
        for(auto &i: gain){
            s += i;
            res = max(res,s);
        }
        return res;
        }
};