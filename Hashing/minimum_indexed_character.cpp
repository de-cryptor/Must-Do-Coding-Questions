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
		string str,patt;
		cin >> str >> patt;
		int hash[260];
		int ans = INT_MAX;
		memset(hash,-1,sizeof(hash));
		for(int i=0;i<str.size();i++)
		{
			if(hash[str[i]] == -1)
				hash[str[i]] = i;
		}
		for(int i=0;i<patt.size();i++)
		{
			if(hash[patt[i]] != -1)
				ans = min(ans,hash[patt[i]]);
		}
		if(ans == INT_MAX)
			cout << "No character present" << endl;
		else
			cout << str[ans] << endl;
	}
}
