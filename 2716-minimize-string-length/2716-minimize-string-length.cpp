#include<unordered_map>
class Solution {
public:
    int minimizedStringLength(string s) {
         int n = s.size();
        unordered_map<char, bool> mp;

        for (int i = 0; i < n; i++) {
            mp[s[i]] = true;
        }

        return mp.size();
    }
};