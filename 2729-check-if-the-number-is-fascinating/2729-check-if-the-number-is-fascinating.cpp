class Solution {
public:
    bool isFascinating(int n) {
         vector<int> fre(10,0);
         string s = "" + to_string(n) +
                      to_string(n * 2) +
                      to_string(n * 3);

    for (int i = 0; i < s.length(); i++)
    {
        int dig = s[i] - '0';
        if (fre[dig] and dig != 0 > 0)
            return false;
        else
            fre[dig]++;
    }

    for (int i = 1; i < 10; i++)
    {
        if (fre[i] == 0)
            return false;
    }
    return true;
    }
};