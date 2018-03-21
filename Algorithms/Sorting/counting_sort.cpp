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
int counting_sort(int a[],int n)
{
	int hash[10005]={0};
	for(int i=0;i<n;i++)
		hash[a[i]]++;
	int j=0;
	for(int i=0;i<10005;i++)
	{
		int t = hash[i];
		while(t--)
		{
			a[j++] = i;
		}
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
	counting_sort(a,n);
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
	cout << endl;
}
