class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        vector<int> freq(128, 0); // Assuming ASCII characters
        
        // Count the frequency of each character
        for (char c : s) {
            freq[c]++;
        }
        
        // Create a custom sorting comparator based on character frequency
        auto comparator = [&](char a, char b) {
            if (freq[a] != freq[b]) {
                return freq[a] > freq[b]; // Sort in decreasing order of frequency
            } else {
                return a < b; // If frequencies are equal, sort lexicographically
            }
        };
        
        // Sort the characters based on frequency
        sort(s.begin(), s.end(), comparator);
        
        return s;
    }
};
