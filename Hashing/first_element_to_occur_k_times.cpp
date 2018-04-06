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
		map<int,int> mp;
		int a[n+5];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		int ans = -1;
		for(int i=0;i<n;i++)
		{
			if(mp[a[i]] == k)
			{
				ans = a[i];
				break;
			}
		}
		cout << ans << endl;
	}
}
