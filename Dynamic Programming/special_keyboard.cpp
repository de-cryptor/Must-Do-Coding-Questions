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
		int N;
		cin >> N;
		int dp[N+5];
		for(int i=1;i<=min(N,6);i++)
			dp[i] = i;

		for(int i=7;i<=N;i++)
		{
			int ans = 0;
			for(int j=i-3;j>=1;j--)
			{
				int curr = (i-j-1)*dp[j];
				ans = max(ans,curr);
			}
			dp[i] = ans;
		}
		if (N > 75)
			cout << -1 << endl;
		else
			cout << dp[N] << endl;
	}
}
