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
		string s;
		cin >> s;
		int hash[260] = {0},found=1;
		for(int i=0;i<s.size();i++)
		{
			if(hash[s[i]] == 0)
				hash[s[i]] = 1;
			else
			{
				cout << s[i] << endl;
				found = 0;
				break;
			}
		}
		if(found)
			cout << -1 << endl;
	}
}
