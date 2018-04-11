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
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		int jumps[n];
		for(int i=0;i<n;i++)
			jumps[i] = n+1;
		jumps[0] = 0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i] != 0)
			{
				for(int j=i+1;j<=min(i+a[i],n-1);j++)
				{
					jumps[j] = min(jumps[j],1+jumps[i]);
				}
			}
		}
		if(jumps[n-1] == n+1)
			cout << -1 << endl;
		else
			cout << jumps[n-1] << endl;
	}
}