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

		vector < pair < pair <int,int> , int > > v;

		for(int i=0;i<n;i++)
			v.push_back(make_pair(p[i],i+1));

		sort(v.begin(),v.end());
		int ans = 1;

		int last_finish = v[0].F.F;
		cout << v[0].S << " ";
		
		for(int i=1;i<n;i++)
		{
			if(v[i].F.S >= last_finish)
			{
			    last_finish = v[i].F.F;
				cout << v[i].S << " ";
			}
		}
		cout << endl;
	}
}
