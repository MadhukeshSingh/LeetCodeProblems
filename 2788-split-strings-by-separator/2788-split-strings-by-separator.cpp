class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> res;
        for (const string& word : words) {
        istringstream iss(word);
        string ans;
        while (std::getline(iss, ans, separator)) {
            if (!ans.empty()) {
                res.push_back(ans);
            }
        }
    }
    return res;
    }
};