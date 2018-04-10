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
		map<int,int> mp;
		int a[n+5],b[n+5];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			mp[a[i]]=1;
		}
		int flag = 1;
		for(int i=0;i<m;i++)
		{
			cin >> b[i];
			if(mp.find(b[i]) == mp.end())
				flag = 0;

		}
		if(flag)
			cout << "Yes"<<endl;
		else
			cout << "No"<<endl;

	}
}
