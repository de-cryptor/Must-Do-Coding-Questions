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
int linear_search(int a[],int n,int x)
{
	int idx =-1;
	for(int i=0;i<n;i++)
	{
		if(a[i] == x)
		{
			idx = i;
			break;
		}
	}
	return idx;
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
	int idx = linear_search(a,n,x);
	if(idx==-1)
		cout << "Element not found!"<<endl;
	else
		cout << "Element found at index " << idx+1<<endl;

}
