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
		int n,i;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		for(i=0;i<n-1;i++)
		{
			if(i%2 == 0)
			{
				if(a[i] > a[i+1])
				{
					int temp;
					temp = a[i];
					a[i] = a[i+1];
					a[i+1] = temp;

				}
			}
			else
			{
				if(a[i] < a[i+1])
				{
					int temp;
					temp = a[i];
					a[i] = a[i+1];
					a[i+1] = temp;

				}
			}
		}
		for(i=0;i<n;i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;

	}
}	