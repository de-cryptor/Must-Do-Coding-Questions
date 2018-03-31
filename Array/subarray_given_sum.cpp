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
int subarray_given_sum(int a[],int n,int x)
{
	int sum = a[0];
	int start = 0,end = -1,found=0;
	for(int i=1;i<=n;i++)
	{
		while(sum > x && start < i-1)
				sum -= a[start++];
		
		if(sum == x)
		{
			end = i;
			found = 1;
			break;
		}
		if(i < n )
			sum = sum + a[i];

	}
	if(found)
	{
		cout << "start:"<<start+1<<endl;
		cout << "end:"<<end <<endl;
	}
	else
		cout << "-1" << endl;


}
int main()
{
	fast_io;
	if(fopen("C:/Users/Jatin Goel/Desktop/Must-Do-Coding-Questions/input.txt", "r"))
	{
		freopen("C:/Users/Jatin Goel/Desktop/Must-Do-Coding-Questions/input.txt", "r", stdin);
		freopen("C:/Users/Jatin Goel/Desktop/Must-Do-Coding-Questions/output.txt","w",stdout);
	}
	int n,x;
	cin >> n >> x;
	int a[n+5];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	subarray_given_sum(a,n,x);
}
