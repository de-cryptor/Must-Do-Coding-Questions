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
		string s1,s2;
		int h1[26] = {0};
		int h2[26] = {0};
		cin >> s1;
		cin >> s2;
		for(int i=0;i<s1.size();i++)
			h1[s1[i]-'a']=1;
		for(int i=0;i<s2.size();i++)
			h2[s2[i]-'a']=1;

		for(int i=0;i<26;i++)
		{
			if(h1[i]^h2[i] == 1)
			{
				printf("%c",i+97);
			}
		}
		printf("\n");
	}
}