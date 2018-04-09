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
		LL n,k;
		cin >> n >> k;
		int ctr=0;
		string ans = "No";
		while(n>0)
		{
			if(ctr == k)
			{
				if(n%2)
					ans = "Yes";
				break;
			}
			n = n/2;
			ctr++;
		}
		cout << ans << endl;
	}
}
