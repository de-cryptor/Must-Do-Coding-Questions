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
		cin >> k;
		cin >> n;
		int mn=1e6,mx = -1;
		int h[n+5];
		for(int i=0;i<n;i++)
		{
			cin >> h[i];
			mx = max(mx,h[i]);
			mn = min(mn,h[i]);
		}
		if(mx - mn <= k)
		{
			cout << mx - mn << endl;
			continue;
		}
		for(int i=0;i<n;i++)
		{
			if(h[i] == mn)
				h[i] += k;
			else if(h[i] == mx)
				h[i] -= k;
			else
			{
				if(h[i]+k <= mx-k)
					h[i] += k;
				else if (h[i]-k >= mn+k)
					h[i] -= k;
				else
				{
					int p = mn + k;
					int q = mx - k;
					int diff1 = h[i] + k - q;
					int diff2 = p - (h[i] - k);

					if(diff1 <= diff2)
					{
						h[i] += k;
					}
					else
					{
						h[i] -= k;
					}
				}
			}

		}
		mn=1e6,mx = -1;
		for(int i=0;i<n;i++)
		{
			mx = max(mx,h[i]);
			mn = min(mn,h[i]);
		}
		cout << mx - mn << endl;
	}
}
