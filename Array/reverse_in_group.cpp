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
		{
			cin >> a[i];
		}
		int k;
		cin >> k;
		for(int i=0;i<n;i+=k)
		{
			int l =i;
			int r = min(i+k-1,n-1);
			while(l < r)
				swap(a[l++],a[r++]);
		}
		for(int i=0;i<n;i++)
			cout << a[i] << " ";

		cout << endl;
 	
	}
}
