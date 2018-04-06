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
		int n,m,x,flag=1;
		cin >> n >> m >> x;
		int a[n+5],b[m+5];
		map<int,int> ma,mb;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			ma[a[i]]++;
		}
		for(int i=0;i<m;i++)
		{
			cin >> b[i];
			mb[b[i]]++;
		}
		vector< pair< int,int> > v;
		for(int i=0;i<n;i++)
		{
			if(mb.find(x - a[i]) != mb.end())
			{
				if(mb[x-a[i]] > 0)
				{
					mb[x-a[i]]--;
					flag = 0;
					v.push_back(make_pair(a[i],x-a[i]));
				}
			}
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
		    if(i != v.size()-1)
			    cout << v[i].F << " " << v[i].S << ", ";
			else
			    cout << v[i].F << " " << v[i].S <<endl;
		}
		ma.clear();
		v.clear();
		mb.clear();
		if(flag)
		    cout << -1 << endl;
	}
}
