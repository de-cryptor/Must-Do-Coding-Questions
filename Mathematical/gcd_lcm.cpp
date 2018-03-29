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
	if(b == 0)
		return a;
	else
		return gcd(b,a%b);
}
int lcm(int a ,int b)
{
	int g = gcd(a,b);
	return (a*b)/g ;
}
int main()
{
	fast_io;
	if(fopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/input.txt", "r"))
	{
		freopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/input.txt", "r", stdin);
		freopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/output.txt","w",stdout);
	}
	int a,b;
	cin >> a >> b;

	cout << gcd(a,b) << endl;
	cout << lcm(a,b) << endl;

}
