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
		stack<char> st;
		int n = s.size();
		int i = 0;
		while(i<n)
		{
			int flag = 0;
			if(st.empty())
				st.push(s[i]);
			else
			{
				while(st.top() == s[i])
				{
					i++;
					flag = 1;
				}
				if(flag == 0)
					st.push(s[i]);
				else
					st.pop();
			}
		}
		stack<char> Ans;
		while(!st.empty())
		{
			Ans.push(st.top());
			st.pop();
		}
		while(!Ans.empty())
		{
			cout << Ans.top() ;
			Ans.pop();
		}
		cout << endl;
	}
}
