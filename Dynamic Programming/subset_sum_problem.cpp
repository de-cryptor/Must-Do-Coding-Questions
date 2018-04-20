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

int subset_sum(int a[],int n,int sum)
{
	bool dp[n+1][sum+1];
    memset(dp,false,sizeof(dp));
	for(int i=0;i<=n;i++)
	{
		dp[i][0] = true;
	}
	for(int i=1;i<=sum;i++)
	{
		dp[0][i] = false;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(j < a[i-1])
				dp[i][j] = dp[i-1][j];
			if(j >= a[i-1])
				dp[i][j] = dp[i-1][j] | dp[i-1][j - a[i-1]];
		}
	}
	return dp[n][sum];
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n+5];
		int sum = 0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		if(sum%2)
			cout << "NO" << endl;
		else
		{
			if(subset_sum(a,n,sum/2))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}

	}
}
