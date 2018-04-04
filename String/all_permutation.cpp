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

vector <string> permutations;

void permute(string s,int start,int end)
{
	if(start == end)
	{
		permutations.push_back(s);
		return;
	}
	else
	{
		for(int i=start;i<=end;i++)
		{
			char temp = s[start];
			s[start] = s[i];
			s[i] = temp;
			permute(s,start+1,end);
			//backtrack;
			temp = s[i];
			s[i] = s[start];
			s[start] = temp;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int start = 0,end = s.size()-1;
		permute(s,start,end);
		sort(permutations.begin(),permutations.end());
		for(int i=0;i<permutations.size();i++)
			cout << permutations[i] << " ";
		cout << endl;
		permutations.clear();
	}
}
