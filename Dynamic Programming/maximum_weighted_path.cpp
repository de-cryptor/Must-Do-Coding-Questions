/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
#define  LL long long
#define F first
#define S second
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m,n;
		cin >>n;
		m = n;
		int path[m+5][n+5];
		int dp[m+5][n+5];

		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin >> path[i][j];
				dp[i][j] = 0;
			}
		}
		for(int i=0;i<n;i++)
			dp[0][i] = path[0][i];

		for(int i=1;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j-1 >=0)
					dp[i][j] = path[i][j] + max(dp[i-1][j],dp[i-1][j-1]);
				if(j+1 < n)
					dp[i][j] = max(dp[i][j],(path[i][j] + max(dp[i-1][j],dp[i-1][j+1])));
			}
		}
		int ans =0;
		for(int i=0;i<n;i++)
		{
			ans = max(ans,dp[m-1][i]);
		}
		cout << ans << endl;

	}
}
