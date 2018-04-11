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
		int n,m;
		cin >> m >> n;
		string s1,s2;
		cin >> s1 >> s2;
		int dp[m+1][n+1];
		for(int i=0;i<=m;i++)
		{
			for(int j=0;j<=n;j++)
			{
				if(i==0)
					dp[i][j] = j;
				else if (j==0)
					dp[i][j] = i;
				else if(s1[i-1] == s2[j-1])
					dp[i][j] = dp[i-1][j-1];
				else
					dp[i][j] = 1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
			}
		}
		cout << dp[m][n] << endl;
	}
}