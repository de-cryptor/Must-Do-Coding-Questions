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
		cin >> n >> k;
		int candy[n+5];
		for(int i=0;i<n;i++)
			cin >> candy[i];

		sort(candy,candy+n);

		int l=0,h=n-1;
		int mn=0,mx=0;
		while(l <= h)
		{
			mn += candy[l++];
			for(int i=0;i<k;i++)
				h--;

		}
		l=0,h=n-1;
		while(l <= h)
		{
			mx += candy[h--];
			for(int i=0;i<k;i++)
				l++;
		}
		cout << mn << " " << mx << endl;
	}
}
