/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        string ans = "";
        for(int i=0;i<=s.size();i++)
        {
            st.push(i+1);
            
            if(s[i] == 'I' || s.size() == i)
            {
                while(!st.empty())
                {
                    ans  = ans + to_string(st.top());
                    st.pop();
                }
            }
        }
        cout << ans << endl;
        ans.clear();
    }
	return 0;
}