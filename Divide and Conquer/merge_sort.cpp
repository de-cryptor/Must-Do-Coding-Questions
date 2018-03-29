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
int merge(int a[],int l,int m,int h)
{
	int i,j,k,n1,n2;
	n1 = m-l+1;
	n2 = h-m;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++)
		L[i] = a[i+l];
	for(int j=0;j<n2;j++)
		R[j] = a[j+m+1];

	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2)
	{
		if(L[i] <= R[j])
			a[k++] = L[i++];
		else
			a[k++] = R[j++];
	}
	while(i<n1)
		a[k++] = L[i++];

	while(j<n2)
		a[k++] = R[j++];
}
int merge_sort(int a[],int l,int h)
{
	if(l < h)
	{
		int m = (l+h)/2;
		merge_sort(a,l,m);
		merge_sort(a,m+1,h);
		merge(a,l,m,h);
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
	merge_sort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
	cout << endl;
}
