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

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a[256] ={0};
		int n,i;
		cin >> n;
		char c[n];
		queue < char> q;
		for(i=0;i<n;i++)
		{
			cin >> c[i];
			a[c[i]]++;
			if(a[c[i]] == 1)
				q.push(c[i]);
			while(!q.empty() && a[q.front()] > 1)
			{
				q.pop();
			}
			if(q.empty())
				cout << -1 << " ";
			else
				cout << q.front() << " ";
		}
		cout << endl;
	}
}
