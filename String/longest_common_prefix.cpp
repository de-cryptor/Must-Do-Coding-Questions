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
int minLen(vector<string> v)
{
	int len = INT_MAX;
	for(int i=0;i<v.size();i++)
	{
	    int strsize = v[i].size();
		len = min(len,strsize);
	}
	return len;
}
int check(vector<string> v,int mid)
{
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<mid;j++)
		{
			if(v[i][j] != v[0][j] )
				return 0;
		}
	}
	return 1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<string> v;
		for(int i=0;i<n;i++)
		{
			string s;
			cin >> s;
			v.push_back(s);
		}
		int minlen = minLen(v);
		int l=1,h=minlen,ans=-1;
		while(l<=h)
		{
			int mid = (l+h)/2;
			if(check(v,mid))
			{
				l = mid+1;
				ans = mid;
			}
			else
			{
				h = mid -1;
			}
		}
		for(int i=0;i<ans;i++)
			cout << v[0][i];
		if(ans == -1)
			cout << -1;
		cout << endl;
	}
}
