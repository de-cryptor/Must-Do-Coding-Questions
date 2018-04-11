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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		int m;
		cin >> m;
		int table[m+1];
		memset(table,0,sizeof(table));
		table[0] = 1;
		for(int i=0;i<n;i++)
		{
			for(int j=a[i];j<=m;j++)
			{
				table[j] += table[j-a[i]];
			}
		}
		cout << table[m] << endl;
	}
}