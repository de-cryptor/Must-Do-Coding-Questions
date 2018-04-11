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
		int n,W;
		cin >> n;
		cin >> W;
		int wt[n+5];
		int val[n+5];
		for(int i=1;i<=n;i++)
		{
			cin >> val[i];
		}
		for(int i=1;i<=n;i++)
		{
			cin >> wt[i];
		}
		int K[n+1][W+1];
		for (int i = 0; i <= n; i++)
	    {
	       for (int w = 0; w <= W; w++)
	       {
	           if (i==0 || w==0)
	               K[i][w] = 0;
	           else if (wt[i] <= w)
	                 K[i][w] = max(val[i] + K[i-1][w-wt[i]],  K[i-1][w]);
	           else
	                 K[i][w] = K[i-1][w];
	       }
	    }
	    cout << K[n][W] << endl;

	}
}