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
		LL n;
		cin >> n;
		if(n==0)
		{
		    cout << "NO"<<endl;
		    continue;
		}
		if(ceil(log2(n)) == floor(log2(n)))
			cout << "YES" <<endl;
		else
			cout << "NO" <<endl;
	}
}
