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
		int a[n+5];
		vector< pair<int,int> > v;
		int hash[10005]={0};
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		stable_sort(a,a+n);
		for(int i=0;i<n;i++)
			hash[a[i]]++;
		int mx = 1e6;
		for(int i=1;i<=10000;i++)
		{
			if(hash[i] > 0)
				v.push_back(make_pair(hash[i],mx-i));
		}
		stable_sort(v.rbegin(),v.rend());
		for(int i=0;i<v.size();i++)
		{
			for(int j=1;j<=v[i].F;j++)
				cout << mx - v[i].S << " ";
		}
		cout << endl;

	}
}
