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
		int lis[n];
		//memset(lis,1,sizeof(lis));
		for(int i=0;i<n;i++)
		{
			lis[i] = 1;
		}
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[i] > a[j] && lis[i] < 1+lis[j])
					lis[i] = 1+lis[j];
			}
		}
		int mx=0;
		for(int i=0;i<n;i++)
		{
		    if(lis[i] > mx)
		    {
		        mx=lis[i];
		    }
		}
		cout << mx << endl;
	}
}
