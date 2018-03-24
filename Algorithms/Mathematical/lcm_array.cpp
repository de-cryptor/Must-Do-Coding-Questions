/* Jatin Goel
	IIIT Allahabad*/
/* There is no substitute of hardwork. */
/* Hardwork definitely pays off. */
/* There is no shortcut to success. */
#include <bits/stdc++.h>
using namespace std;
#define  LL long long
#define F first
#define S second
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int lcm_array(int a[],int n)
{
	int ans = a[0];

	for(int i=1;i<n;i++)
	{
		ans = (ans*a[i])/gcd(ans,a[i]);
	}
	return ans;
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
	for(int i=0;i<n;i++)
		cin >> a[i];

	cout << lcm_array(a,n) << endl; 
}
