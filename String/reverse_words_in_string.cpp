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
		stack<string> st;
		cin >> s;
		string tmp;
		tmp="";
		int ctr=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i] != '.')
				tmp = tmp+s[i];
			else
			{
				st.push(tmp);
				tmp = "";
				ctr++;
			}
			if(i == s.size()-1)
			{
			    st.push(tmp);
				tmp = "";
				ctr++;
			}
		}
		ctr--;
		while(!st.empty())
		{
			cout << st.top() ;
			st.pop();
			if(ctr!=0)
			{
				cout << "." ;
				ctr--;
			} 
			
		}
		cout << endl;
	}
}