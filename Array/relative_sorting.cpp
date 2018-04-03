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
		int m,n;
		cin >> m >> n;
		int hash[10005];
		memset(hash,0,sizeof(hash));
		int a1[m+5],a2[n+5];
		for(int i=0;i<m;i++)
		{
			cin >> a1[i];
			hash[a1[i]]++;
		}
		for(int i=0;i<n;i++)
		{
			cin >> a2[i];
			if(hash[a2[i]] > 0)
			{
    			for(int j=1;j<=hash[a2[i]];j++)
    			{
    				cout << a2[i] << " ";
    			}
    			hash[a2[i]] = 0;
			}
		}
		for(int i=1;i<=10000;i++)
		{
			if(hash[i] > 0)
			{
			    for(int j=1;j<=hash[i];j++)
				    cout << i << " ";
			}
		}
		cout << endl;
	}
}
