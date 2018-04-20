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
		int n,m,k;
		cin >> n >> m >> k;
		int a[n+5],b[m+5];
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=0;i<m;i++)
			cin >> b[i];
		int i=0,j=0,idx=0,ans;
		while(i<n && j<m && idx < k)
		{
			if(a[i] < b[j])
			{
				ans = a[i++];
				idx++;
			}
			else
			{
				ans = b[j++];
				idx++;
			}
		}
		while(i < n && idx < k)
		{
			ans = a[i++];
			idx++;
		}
		while(j < m && idx < k)
		{
			ans = b[j++];
			idx++;
		}
		cout << ans << endl;
	}
}
