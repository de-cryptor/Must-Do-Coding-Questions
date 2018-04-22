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

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin >> n;
        int dp[n];
        dp[0] = 1;
        dp[1] = 2;
        dp[2] = 4;
        for(int i=3;i<n;i++)
        {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        cout << dp[n-1] << endl;

    }
	return 0;
}