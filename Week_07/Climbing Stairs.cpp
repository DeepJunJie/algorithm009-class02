class Solution {
public:
	int climbStairs(int n) {
		int res = 1, first = 0;
		for (int i = 1; i < n + 1; i++) { res += first; first = res - first; }
		return res;
	}
};

