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
	string s;
	getline(cin,s);
	while(t--)
	{
		int hash[260] = {0};
		string s;
		getline(cin,s);
		int n = s.size();
		for(int i=0;i<n;i++)
		{
			if(hash[s[i]] == 0)
			{
				cout << s[i];
				hash[s[i]]++;
			}
		}
		cout << endl;
	}
}
