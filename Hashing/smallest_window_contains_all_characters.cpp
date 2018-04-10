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
		string P,Q;
		cin >> Q >> P;
		int p = P.size();
		int q = Q.size();
		int need[256] = {0};

		for(int i=0;i<p;i++)
			need[P[i]]++;

		int found[256] = {0};
		int minWin = INT_MAX;
		int count = 0;
		int start=-1,end = -1;

		for(int i=0,j=0;j<q;j++)
		{
			if(need[Q[j]] == 0)
				continue;

			found[Q[j]]++;
			if(found[Q[j]] <= need[Q[j]])
				count++;

			if(count == p)
			{
				while(need[Q[i]] == 0 || found[Q[i]] > need[Q[i]])
				{
					if(found[Q[i]] > need[Q[i]])
						found[Q[i]]--;
					i++;
				}
				int wlen = j-i+1;
    			if(minWin > wlen)
    			{
    				start = i;
    				end = j;
    				minWin = wlen;
    			}
			}
		}
		if(start == -1)
			cout << -1 << endl;
		else
		{
			for(int i=start;i<=end;i++)
				cout << Q[i];
			cout << endl;
		}

	}
}