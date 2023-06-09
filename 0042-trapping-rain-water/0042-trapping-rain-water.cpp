class Solution {
public:
    int trap(vector<int>& height) {
 	int res = 0;
		int N = height.size();
		int left_max[N], right_max[N];
		int mx = INT_MIN;
		for (int i = 0; i < N; i++) {
			mx = max(mx, height[i]);
			left_max[i] = mx;
		}
		mx = INT_MIN;
		for (int i = N - 1; i >= 0; i--) {
			mx = max(mx, height[i]);
			right_max[i] = mx;
		}
		for (int i = 0; i < N ; i++) {
			res += min(left_max[i], right_max[i]) - height[i];
		}
		return res;
    }
};