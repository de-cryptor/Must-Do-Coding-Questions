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
		int l,r;
		cin >> l >> r;
		string s = "";
		while(n>0)
		{
			if(n%2)
				s = s + '1';
			else
				s = s + '0';
			n/=2;
		}
		for(int i=0;i<s.size();i++)
			if(i+1 >= l && i+1 <= r)
				s[i] = s[i]=='1'?'0':'1';
		LL ans = 0;
		for(int i=0;i<s.size();i++)
			ans = ans + (s[i]-'0')*pow(2,i);
		cout << ans << endl;
	}
}

