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
		int ans = 1;
		int ctr=0;
		while(n>0)
		{
			if(n%2)
				ctr++;
			else
				ctr = 0;
			if(ctr >= 2)
			{
				ans = 0;
				break;
			}
			n/=2;
		}
		cout << ans <<endl;
	}
}
