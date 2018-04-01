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
int maximum_sum_increasing_subsequence(int a[],int n)
{
	int mx = -1;
	int dp[n+1];
	for(int i=0;i<n;i++)
	{
		dp[i] = a[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j] < a[i] && a[i] + dp[j] > dp[i])
				dp[i] = a[i]+dp[j];
		}
	}
	for(int i=0;i<n;i++)
		mx = max(mx,dp[i]);
	
	return mx;
}
int main()
{
	fast_io;
	if(fopen("C:/Users/Jatin Goel/Desktop/Must-Do-Coding-Questions/input.txt", "r"))
	{
		freopen("C:/Users/Jatin Goel/Desktop/Must-Do-Coding-Questions/input.txt", "r", stdin);
		freopen("C:/Users/Jatin Goel/Desktop/Must-Do-Coding-Questions/output.txt","w",stdout);
	}
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n+5];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		cout << maximum_sum_increasing_subsequence(a,n) << endl;
	}

}
