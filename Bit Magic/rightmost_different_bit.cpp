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
		int ctr=0;
		cin >> m >> n;
		while(m > 0 || n > 0)
		{
			ctr++;
			if((m%2)^(n%2))
			{
				break;
			}
			m/=2;
			n/=2;
		}
		cout << ctr << endl;
	}
}
