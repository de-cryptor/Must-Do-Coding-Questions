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
		int flag  = 1,ctr =0;
		while(n > 0 && flag)
		{
			if(n%2 == 1)
				flag = 0;
			n = n/2;
			ctr++;
		}
		cout << ctr << endl;

	}
}
