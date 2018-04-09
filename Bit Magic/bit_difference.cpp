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
		int a,b;
		cin >> a >> b;
		int ctr=0;
		while(a > 0 || b > 0)
		{
			if((a%2)^(b%2))
				ctr++;
				a/=2;
				b/=2;
		}
		cout << ctr << endl;
	}
}
