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
		int flag = 1;
		for(int i=0;i<n;i++)
		{
			if(s[i] == '{' || s[i] == '(' || s[i] == '[')
				st.push(s[i]);
			else if(s[i] == '}')
			{
				if(!st.empty())
				{
					if(st.top() == '{')
						st.pop();
					else
				        flag = 0;
				} 
				else
				    flag = 0;
			}
			else if(s[i] == ')')
			{
				if(!st.empty())
				{
					if(st.top() == '(')
						st.pop();
					else
				        flag = 0;
				}
				else
				    flag = 0;
				
			}
			else if(s[i] == ']')
			{
				if(!st.empty())
				{
					if(st.top() == '[')
						st.pop();
					else
				        flag = 0;
				}
				else
				    flag = 0;
			}
		}
		if(st.empty() & flag)
			cout << "balanced" << endl;
		else
			cout << "not balanced" << endl;
	}
}
