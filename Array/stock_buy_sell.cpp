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
		int n;
		cin >> n;
		int price[n+5];
		for(int i=0;i<n;i++)
			cin >> price[i];

		int buy = -1,sell =-1;
		int flag = 0;
		int i=0;
		while(i < n-1)
		{	
			while(i < n-1 && price[i] >= price[i+1])
				i++;
			if(i == n-1)
				break;
			buy = i++;

			while(i < n && price[i] >= price[i-1])
				i++;
			sell = i-1;
            flag = 1;
			cout << "(" << buy << " " << sell << ")" << " ";

		}
		if(!flag)
			cout << "No Profit" << endl;
		else
			cout << endl;
	}
}
