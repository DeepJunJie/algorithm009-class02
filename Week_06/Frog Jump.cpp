class Solution {
public:
	bool canCross(vector<int>& stones) {
		//   if(stones.size()==0 || stones[1]!=1) return false;
		  // if(stones.size()<3) return true;
		int len = stones.size();
		vector<vector<bool>>dp(stones.size(), vector<bool>(stones.size(), false));
		//bool dp[len][len];
		dp[0][0] = true;
		for (int i = 1; i < stones.size(); i++)
			for (int j = 0; j < i; j++) {
				int k = stones[i] - stones[j];
				if (k <= j + 1) {
					dp[i][k] = dp[j][k - 1] || dp[j][k + 1] || dp[j][k];
					if (i == stones.size() - 1 && dp[i][k])
						return true;
				}
			}
		return false;
	}
};