class ClimbStairs {
	public:
		static int climbStairs(int n) {
			int dp1 = 1;
			int dp2 = 2;
			int temp = 0;

			if (n == 1)
			{
				return dp1;
			}
			else if (n == 2)
			{
				return dp2;
			}

			for (int i = 3; i < n + 1; i++)
			{
				temp = dp2;
				dp2 = dp1 + dp2;
				dp1 = temp;
			}

			return dp2;
		}
};