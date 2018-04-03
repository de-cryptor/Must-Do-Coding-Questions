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
int cmp(string a,string b)
{
	string ab = a+b;
	string ba = b+a;

	if(ab > ba)
		return 1;
	else
		return 0;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s[n+5];
		for(int i=0;i<n;i++)
			cin >> s[i];
		sort(s,s+n,cmp);
		for(int i=0;i<n;i++)
			cout << s[i];
		cout << endl;
	}
}
