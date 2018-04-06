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
		int n,ans=1;
		cin >> n;
		int a[n+5],b[n+5];
		int h1[10005]={0},h2[10005]={0};
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			h1[a[i]]++;
		}
		for(int i=0;i<n;i++)
		{
			cin >> b[i];
			h2[b[i]]++;
		}
		for(int i=0;i<=10000;i++)
		{
			if(h1[i] != h2[i])
			{
				ans = 0;
				break;
			}
		}
		cout << ans << endl;

	}
}
