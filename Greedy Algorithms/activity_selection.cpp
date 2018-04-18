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
		pair <int,int> p[10005];
		for(int i=0;i<n;i++)
			cin >> p[i].S;
		for(int i=0;i<n;i++)
			cin >> p[i].F;
		sort(p,p+n);
		int ans = 1;
		int last_finish = p[0].F;
		for(int i=1;i<n;i++)
		{
			if(p[i].S >= last_finish)
			{
			    last_finish = p[i].F;
				ans++;
			}
		}
		cout << ans << endl;
	}
}
