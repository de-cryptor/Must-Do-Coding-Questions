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
int partition(int a[],int l,int h)
{
	int pivot = a[h];
	int i=l-1;
	for(int j=l;j<h;j++)
	{
		if(a[j] <= pivot)
		{
			i++;
			int temp;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	int temp;
	i++;
	temp = a[h];
	a[h] = a[i];
	a[i] = temp;
	return i;
}
int quick_sort(int a[],int l,int h)
{
	if(l < h)
	{
		int pindex = partition(a,l,h);
		quick_sort(a,l,pindex-1);
		quick_sort(a,pindex+1,h);
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
	quick_sort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
	cout << endl;
}
