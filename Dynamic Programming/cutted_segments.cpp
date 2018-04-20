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

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int x,y,z;
		cin>>n;
	    cin>>x>>y>>z;
	    int dp[n+1];
	    dp[0]=0;
	    for(int i=1;i<=n;i++){
	        dp[i]=INT_MIN;
	    }
	    for(int i=1;i<=n;i++){
	        if(x<=i)
	            dp[i]=max(dp[i],1+dp[i-x]);
	        if(y<=i)
	            dp[i]=max(dp[i],1+dp[i-y]);
	        if(z<=i)
	            dp[i]=max(dp[i],1+dp[i-z]);
	    }
	    cout<<dp[n]<<endl;
	}
}
