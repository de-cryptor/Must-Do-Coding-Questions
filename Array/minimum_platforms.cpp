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
	fast_io;
	if(fopen("input.txt", "r"))
	{
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	}
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n],d[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin >> d[i];
			if(d[i] < a[i])
			    d[i] += 2400;
		}
		sort(a,a+n);
		sort(d,d+n);
		int ans = 1,i=1,j=0;
		int platfroms = 1;
		while(i<n && j<n)
		{
			if(a[i] < d[j])
			{
				platfroms++;
				i++;
				ans = max(ans,platfroms);
			}
			else
			{
				platfroms--;
				j++;
			}
		}
		
		cout << ans << endl;
	}

}
