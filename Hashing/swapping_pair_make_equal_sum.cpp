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
		int n,m;
		cin >> n >> m;
		int sum1=0,sum2=0;
		map<int,int> mp;
		int a1[n];
		int a2[m];;
		for(int i=0;i<n;i++)
		{
			cin >> a1[i];
			mp[a1[i]] = 1;
			sum1 += a1[i];
		}
		for(int i=0;i<m;i++)
		{
			cin >> a2[i];
			sum2 += a2[i];
		}
		if((sum1 + sum2)%2 == 0)
		{
			int found = -1;
			int sum = (sum1+sum2)/2;
			for(int i=0;i<m;i++)
			{
				if(mp.find(sum-(sum2 - a2[i])) != mp.end())
				{
					found = 1;
					break;
				}
			}
			cout << found << endl;
		}
		else
			cout << -1 << endl;
		
	}
}
