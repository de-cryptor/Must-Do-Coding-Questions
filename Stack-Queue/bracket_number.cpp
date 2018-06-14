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
        int num = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                num++;
                cout << num << " " ;
                st.push(num);
            }
            else if(s[i] ==')')
            {
                cout << st.top() << " ";
                st.pop();
            }
        }
        cout << endl;
    }
	return 0;
}