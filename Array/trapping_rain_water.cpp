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
		int a[n+5];
		for(int i=0;i<n;i++)
			cin >> a[i];
		int l[n+5],r[n+5];
		l[0] = a[0];
		for(int i=1;i<n;i++)
			l[i] = max(a[i],l[i-1]);

		r[n-1] = a[n-1];
		for(int i=n-2;i>=0;i--)
			r[i] = max(a[i],r[i+1]);

		int ans = 0;
		for(int i=0;i<n;i++)
			ans += min(l[i],r[i]) - a[i];
		cout << ans << endl;

	}

}
