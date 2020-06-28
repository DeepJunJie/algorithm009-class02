class Solution {
public:
	int longestValidParentheses(string s) {
		vector<int>dp(s.length());
		int res = 0;
		for (int i = 1; i < s.length(); i++) {
			if (s[i] == ')') {
				if (s[i - 1] == '(') {
					dp[i] = i - 2 > 0 ? dp[i - 2] + 2 : 2;
				}
				if (s[i - 1] == ')') {
					if (i - dp[i - 1] - 1 >= 0 && s[i - dp[i - 1] - 1] == '(') {
						int a = 0;
						if (i - dp[i - 1] - 2 >= 0) a = dp[i - dp[i - 1] - 2];
						dp[i] = dp[i - 1] + 2 + a;
					}
				}
			}
			res = max(res, dp[i]);
		}

		return res;
	}
};