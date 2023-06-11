class Solution {
public:
    string smallestString(string s) {
        int o = 0;
        int n = s.length();
        std::string res;
        int obt = 0;

        for (int i = 0; i < n; i++) {
            char c = s[i];

            if (c != 'a') {
                o = 1;
                for (int j = i; j < n; j++) {
                    char c2 = s[j];

                    if (c2 != 'a') {
                        int less = c2 - 1;
                        char cless = static_cast<char>(less);
                        res.push_back(cless);

                        if (j == n - 1) {
                            obt = 1;
                            break;
                        }
                    } else {
                        for (int k = j; k < n; k++) {
                            res.push_back(s[k]);
                        }
                        obt = 1;
                        break;
                    }
                }
            } else {
                res.push_back(c);
            }

            if (obt == 1)
                break;
        }

        if (o == 1) {
            return res;
        } else {
            std::string str = s.substr(0, n - 1);
            str.push_back('z');
            return str;
        }
    }
};