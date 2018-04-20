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
		int n,m;
		cin >> m >> n;
		int a[m+5],b[n+5];

		for(int i=0;i<m;i++)
			cin >> a[i];

		for(int i=0;i<n;i++)
			cin >> b[i];

		LL ans=0,sum1=0,sum2=0;
		int j=0,k=0;
	    while(j<m && k<n)
	    {
	        if(a[j]<b[k])
	        	sum1 += a[j++];
	        
	        else if(a[j]>b[k])
	        	sum2 += b[k++];
	        
	        else
	        {
	        	sum1 += a[j++];
	        	sum2 += b[k++];
	            ans += max(sum1,sum2);
	            sum1=0;
	            sum2=0;
	        }
	    }
	    while(j<m)
	    {
	        sum1 += a[j++];
	    }
	    while(k<n)
	    {
    		sum2 += b[k++];
	    }
	    ans = ans + max(sum1,sum2);
	    cout << ans << endl;
	}
}
