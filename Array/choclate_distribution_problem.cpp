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
		int n,k;
		cin >> n;
		int a[n];
		int mn = INT_MAX;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		cin >> k;
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if( (i+k-1 ) < n && (a[i+k-1] - a[i]) < mn )
				mn = a[i+k-1] - a[i];

		}
		cout << mn << endl;
	}
}
