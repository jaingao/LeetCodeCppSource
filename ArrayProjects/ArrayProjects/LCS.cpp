#include <string>
#include <vector>
using namespace std;

class LCS {
public:
	static int longestCommonSubsequence(string text1, string text2) {
		vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1, 0));
		int ret = 0;

		for (int i = 1; i < text1.size() + 1; i++)
		{
			for (int j = 1; j < text2.size() + 1; j++)
			{
				if (text1[i - 1] == text2[j - 1])
				{
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}
				else
				{
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
			if (dp[i][text2.size()] > ret)
			{
				ret = dp[i][text2.size()];
			}
		}

		return ret;
    }
};