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

int check(int a[],int n,int k)
{
	int hash_rem[k+2];
	memset(hash_rem,0,sizeof(hash_rem));
	for(int i=0;i<n;i++)
		hash_rem[a[i]%k]++;

	for(int i=0;i<k;i++)
	{
		if(i == 0)
		{
			if(hash_rem[i]%2)
				return 0;
		}
		else if(i != 0)
		{
			if(hash_rem[i]/k == 2)
			{
				if(hash_rem[i]%2 != 0)
					return 0;
			}
			else
			{
				if(hash_rem[i] != hash_rem[k-i])
					return 0;
			}
		}
	}
	return 1;

}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n ;
		int ans = 1;
		int a[n+5];
		for(int i=0;i<n;i++)
			cin >> a[i];
		int k ;
		cin >> k;
		if(n%2)
		{
			cout << "False" << endl;
			continue;
		}
		ans = check(a,n,k);
		if(ans)
			cout << "True" <<endl;
		else
			cout << "False" << endl;
	}
}

		
