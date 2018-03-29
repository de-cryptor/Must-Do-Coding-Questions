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
int M[100][100];
int max_size_submatrix(int m,int n)
{
    int dp[n][m],max_size=0;
    for(int i=0;i<m;i++)
    {
        dp[i][0] = M[i][0];
        max_size = max(dp[i][0],max_size);
    }
    
    for(int i=0;i<n;i++)
    {
        dp[0][i] = M[0][i];
        max_size = max(dp[0][i],max_size);
    }
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(M[i][j] == 1)
            {
                dp[i][j] = min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1])) + 1; 
                max_size = max(dp[i][j],max_size);
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    return max_size;
}
int main()
{
	fast_io;
	if(fopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/input.txt", "r"))
	{
		freopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/input.txt", "r", stdin);
		freopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/output.txt","w",stdout);
    }
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> M[i][j];
        }
    }
    cout << max_size_submatrix(m,n)<<endl;
}
