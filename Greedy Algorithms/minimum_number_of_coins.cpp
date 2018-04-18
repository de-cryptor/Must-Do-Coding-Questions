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
		int change[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
		int ans[10]={0};
		
		for(int i=8;i>=0;i--)
		{
			if(n >= change[i])
			{
				int d = n/change[i];
				n -= d*change[i];
				ans[i] = d;
			}
		}
		for(int i=8;i>=0;i--)
		{
			if(ans[i])
			{
				for(int j=1;j<=ans[i];j++)
				{
					cout << change[i] << " ";
				}
			}
		}
		cout << endl;
	}
}
