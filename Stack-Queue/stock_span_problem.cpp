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
        int n;
        cin >> n;
        int price[n+5],Span[n+5];
        for(int i=0;i<n;i++)
        {
            cin >> price[i];
        }
        stack<int> st;
        st.push(0);
        Span[0] = 1;
        for(int i=1;i<n;i++)
        {
            while(!st.empty() && price[st.top()] <= price[i])
                st.pop();
            Span[i] = st.empty()?i+1:i - st.top();
            st.push(i);
        }
        for(int i=0;i<n;i++)
            cout << Span[i] << " ";
        
        cout << endl;
        
    }
	return 0;
}