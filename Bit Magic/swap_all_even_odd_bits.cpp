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
		string s(16,'0');

		int i = 15;
		int n;
		while(n)
		{
			if(n%2)
				s[i--] = '1';
			else
				s[i--] = '0';
			n/=2;
		}
		for(int i=0;i<n;i=i+2)
		{
			char tmp = s[i];
			s[i] = s[i+1];
			s[i+1] = tmp;
		}
		LL ans = 0;
		for(int i=15;i>=0;i--)
		{
			ans += (s[i] - '0')*pow(2,15-i);
		}
		cout << ans << endl;
	}
}
