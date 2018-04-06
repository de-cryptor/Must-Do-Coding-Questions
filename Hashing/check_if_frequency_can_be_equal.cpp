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
		int hash[260]={0};
		string str;
		cin >> str;
		if(str.size() <= 2)
		{
		    cout << 1 << endl;
		    continue;
		}
		for(int i=0;i<str.size();i++)
		{
			hash[str[i]]++;
		}
		int found=0;
		for(int i='a';i<='z';i++)
		{
			if(hash[i] > 0)
			{
				hash[i]--;
				set<int> s;
				for(int j=0;j<260;j++)
				{
					if(hash[j] > 0)
					{
						s.insert(hash[j]);
					}
				}
				if(s.size() == 1)
				{
					cout << 1 << endl;
					found=1;
					break;
				}
				hash[i]++;
				s.clear();
			}
		}
		if(!found)
			cout << 0 << endl;
	}
}
