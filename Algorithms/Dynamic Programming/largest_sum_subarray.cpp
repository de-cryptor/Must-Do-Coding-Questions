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
int largest_sum_subarray(int a[],int n)
{
    int max_so_far = 0;
    int max_ending_here = 0;

    for(int i=0;i<n;i++)
    {
        max_ending_here += a[i];
        if(max_ending_here < 0)
            max_ending_here = 0;
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    if(max_so_far == 0)
    {
        max_so_far = -INT_MAX;
        for(int i=0;i<n;i++)
        {
            max_so_far = max(max_so_far,a[i]);
        }
    }
    return max_so_far;
}
int main()
{
	fast_io;
	if(fopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/input.txt", "r"))
	{
		freopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/input.txt", "r", stdin);
		freopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/output.txt","w",stdout);
    }
    int n;
    cin >> n;
    int a[n+5];
    for (int i=0;i<n;i++)
        cin >> a[i];
    
    cout << largest_sum_subarray(a,n) << endl;

}
