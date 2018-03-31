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
int sort_012(int a[],int n)
{
	int l=0,m=0,h=n-1;

	while(m<=h)
	{
		switch(a[m])
		{
			case 0:
			{
				int tmp;
				tmp = a[l];
				a[l] = a[m];
				a[m] = tmp;
				l++,m++;
				break;
			}
			case 1:
				m++;
				break;
			case 2:
			{
				int tmp;
				tmp = a[h];
				a[h] = a[m];
				a[m] = tmp;
				h--;
				break;
			}

		}
	}
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

	for(int i=0;i<n;i++)
		cin >> a[i];
	sort_012(a,n);

	for(int i=0;i<n;i++)
		cout << a[i] << " ";

}
