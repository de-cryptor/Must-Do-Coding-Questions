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
int missing_number(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n-1;i++)
		sum += a[i];

	int missing = (n*(n+1))/2 - sum;
	return missing;
}
int main()
{
	fast_io;
	if(fopen("C:/Users/Jatin Goel/Desktop/Must-Do-Coding-Questions/input.txt", "r"))
	{
		freopen("C:/Users/Jatin Goel/Desktop/Must-Do-Coding-Questions/input.txt", "r", stdin);
		freopen("C:/Users/Jatin Goel/Desktop/Must-Do-Coding-Questions/output.txt","w",stdout);
	}

	int n;
	cin >> n;
	int a[n+5];
	for(int i=0;i<n-1;i++)
		cin >> a[i];

	cout << missing_number(a,n) << endl;

}
