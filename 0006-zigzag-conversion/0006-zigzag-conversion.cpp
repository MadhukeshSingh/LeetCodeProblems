class Solution {
public:
    string convert(string s, int numRows) {
         if (numRows <= 1) {
            return s;
        }
        vector<string> rows(numRows);
        int currRow = 0;
        bool Down = false;
        
        for (char c : s) {
            rows[currRow] += c;
            if (currRow == 0 || currRow == numRows - 1) {
                Down = !Down;
            }
            
            currRow += Down ? 1 : -1;
        }
        
        string result;
        for (string r : rows) {
            result += r;
        }
        return result;
    }
};