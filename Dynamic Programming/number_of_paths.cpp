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
#define PII pair<int,int>

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		int dp[n+5][m+5];
		for(int i=0;i<n;i++)
			dp[i][0] = 1;
		for(int i=0;i<m;i++)
			dp[0][i] = 1;
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<m;j++)
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
		}
		cout << dp[n-1][m-1] << endl;
	}
}
