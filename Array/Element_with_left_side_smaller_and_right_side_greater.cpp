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
		int n;
		cin >> n;
		int a[n+5];
		for(int i=0;i<n;i++)
			cin >> a[i];

		int flag = 0;
		int left[n+5];
		int right[n+5];
		left[0] = a[0];
		right[n-1] = a[n-1];
		for(int i=1;i<n;i++)
		{
			left[i] = max(a[i],left[i-1]);
		}
		for(int i=n-2;i>=0;i--)
		{
			right[i] = min(a[i],right[i+1]);
		}
		for(int i=1;i<=n-2;i++)
		{
			if(a[i] >= left[i] && a[i] <= right[i])
			{
				cout << a[i] << endl;
				flag = 1;
				break;
			}
		}
		if(!flag)
			cout << -1 << endl;
	}
}
