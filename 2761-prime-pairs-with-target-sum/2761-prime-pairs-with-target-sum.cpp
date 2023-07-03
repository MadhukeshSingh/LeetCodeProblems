class Solution {
public:
    vector<bool> sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}
    
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> isPrime = sieveOfEratosthenes(n);
        vector<vector<int>> ans;

        for (int x = 2; x <= n - 2; ++x) {
            if (isPrime[x]) {
                int y = n - x;
                if (isPrime[y] && x <= y) {
                    ans.push_back({x, y});
                }
            }
        }

        return ans;
    }
};