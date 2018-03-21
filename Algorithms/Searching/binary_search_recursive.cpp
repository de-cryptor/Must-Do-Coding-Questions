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
int binary_search_recursive(int a[],int l,int h,int x)
{
	if(l<=h)
	{
		int mid = (l+h)/2;
		if(a[mid] == x)
			return mid;
		else if(a[mid] > x)
			return binary_search_recursive(a,l,mid-1,x);
		else
			return binary_search_recursive(a,mid+1,h,x);
	}
	return -1;
}
int main()
{
	fast_io;
	if(fopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/input.txt", "r"))
	{
		freopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/input.txt", "r", stdin);
		freopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/output.txt","w",stdout);
	}
	int n,x;
	cin >> n;
	int a[n+5];
	for(int i=0;i<n;i++)
		cin >> a[i];
	cin >> x;
	int idx = binary_search_recursive(a,0,n-1,x);
	if(idx==-1)
		cout << "Element not found!"<<endl;
	else
		cout << "Element found at index " << idx+1<<endl;

}
