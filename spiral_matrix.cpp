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
		int m = 4,n= 4;
		int a[10][10];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin >> a[i][j];

		while (k < m && l < n)
	    {
	        for (i = l; i < n; ++i)
	        {
	        	cout << a[k][i] << " ";
	        }
	        k++
	        for (i = k; i < m; ++i)
	        {
	        	cout << a[i][n-1] << " ";
	        }
	        n--;
	        if ( k < m)
	        {
	            for (i = n-1; i >= l; --i)
	            {
	                cout << a[m-1][i] << " ";
	            }
	            m--;
	        }
	        if (l < n)
	        {
	            for (i = m-1; i >= k; --i)
	            {
	                cout << a[i][l] << " ";
	            }
	            l++;    
	        }        
	    }
	}
}
