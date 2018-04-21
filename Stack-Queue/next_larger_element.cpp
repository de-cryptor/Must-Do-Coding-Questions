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

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
        stack <int> mystack;
        cin >> n;
        int arr[n],ans[n];
        for(int i = 0;i < n;++i)
            ans[i] = -1;
        for(int i = 0;i < n;++i)
            cin >> arr[i];
        for(int i = 0;i < n;++i)
        {
                while(!mystack.empty() && arr[i] > arr[mystack.top()])
                {
                    int a = mystack.top();
                    mystack.pop();
                    ans[a] = arr[i];
                }
            mystack.push(i);
        }
        for(int i = 0;i < n;++i)
            cout << ans[i] << " ";  
            
        cout << endl;
	}
}