#include <vector>
using namespace std;

class FIB {
	public:
		static int fib(int n)
		{
			int dp0 = 0;
			int dp1 = 1;
			int temp = 0;

			if (n == 0)
			{
				return dp0;
			}
			else if (n == 1)
			{
				return dp1;
			}

			for (int i = 2; i < n + 1; i++)
			{
				temp = dp1;
				dp1 = dp0 + dp1;
				dp0 = temp;
			}

			return dp1;
		}
};