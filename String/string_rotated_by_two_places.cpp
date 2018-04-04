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
		string a,b,a1,a2;
		cin >> a ;
		a1="";
		a2="";
		cin >> b;
		int l = a.size();
		a1 = a1 + a.substr(2) + a.substr(0,2);
		a2 = a2 + a.substr(l-2) + a.substr(0,l-2);
		if(a1 == b || a2 == b)
			cout << 1 << endl;
		else
			cout << 0 << endl;

	}
}