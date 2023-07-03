
class Solution {
public:
bool OddEven(int a, int b) {
    return (a & 1) + (b & 1) == 1;
}

int longestAlternatingSubarray(vector<int>& A, int K) {
    int cnt = 0, res = 0;
    for(int i = 0;i < size(A); ++i) {
        if(i > 0 && OddEven(A[i], A[i - 1]) && max(A[i], A[i - 1]) <= K) ++cnt; 
        else cnt = A[i] % 2 == 0 && A[i] <= K;
        res = max(res, cnt);
    }
    return res;
}
};