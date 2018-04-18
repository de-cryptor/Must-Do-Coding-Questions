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
		int n,s;
		cin >> n >> s;

		if(n*9 < s || s == 0)
			cout << -1 << endl;
		else
		{
			string num = "";
			for(int i=0;i<n;i++)
			{
				for(int j=9;j>=0;j--)
				{
					if(s >= j)
					{
						char c = ('0' + j);
						num  = num + c;
						s -= j;
						break;
					}
				}
			}
			cout << num << endl;
		}
	}
}
