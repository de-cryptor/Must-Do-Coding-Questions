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
		int k,n;
		cin >> k >> n;
		int a[n+5];
		priority_queue<int> pq;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			if(i < k-1)
			{
				pq.push(a[i]);
				cout << -1 << " " ;
			}
			else
			{
				pq.push(a[i]);
				int x = k-1;
				vector<int> v;
				while(x--)
				{
					v.push_back(pq.top());
					pq.pop();
				}
				cout << pq.top() << " " ;
				for(int j=0;j<v.size();j++)
					pq.push(v[j]);
			}

		}
		cout << endl;

	}
}
