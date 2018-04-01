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

int leaders(int a[],int n)
{
	stack<int> s;
	int mx = a[n-1];
	for(int i=n-2;i>=0;i--)
	{
		if(a[i] > mx)
		{
			s.push(a[i]);
			mx = a[i];
		}
	}
	while(!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}
	cout << a[n-1] << " ";
	cout << endl;
}
int main()
{
	fast_io;
	if(fopen("input.txt", "r"))
	{
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	}
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n+5];
		for(int i=0;i<n;i++)
			cin >> a[i];
		leaders(a,n);

	}

}
