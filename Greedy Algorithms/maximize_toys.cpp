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
	int test;
	cin >> test;
	while(test--)
	{
		int n,amount;
		cin >> n >> amount;
		int t[n];
		for(int i=0;i<n;i++)
			cin >> t[i];

		sort(t,t+n);
		int curr = 0,ctr=0;
		for(int i=0;i<n;i++)
		{
			if(curr + t[i] <= amount)
			{
				ctr++;
				curr += t[i];
			}
		}
		cout << ctr << endl;
	}
}
