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
int selection_sort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int mn = a[i];
		int idx = i;
		for(int j=i;j<n;j++)
		{
			if(a[j] < mn)
			{
				mn = a[j];
				idx = j;
			}
		}
		int temp;
		temp = a[i];
		a[i] = a[idx];
		a[idx] = temp;
	}
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
	selection_sort(a,n);
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
	cout << endl;
}
