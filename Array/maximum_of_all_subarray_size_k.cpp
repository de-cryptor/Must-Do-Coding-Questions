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
int main()
{
	fast_io;
	if(fopen("input.txt", "r"))
	{
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	}
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		int a[n+5];
		for(int i=0;i<n;i++)
			cin >> a[i];
		multiset<int> s;
		for(int i=0;i<k;i++)
		{
			s.insert(a[i]);
		}
		int start = 0;
		multiset<int> :: iterator it;
		it = s.end();
		it--;
		cout << *it << " ";
		for(int i=k;i<n;i++)
		{
			s.insert(a[i]);
			multiset<int> :: iterator it1,it2,it;
			it1 = s.find(a[start]);
			it2 = it1;
			it2++;
			s.erase(it1,it2);
			it = s.end();
			it--;
			cout << *it << " ";
			start++;
		}
		cout << endl;
	}

}
