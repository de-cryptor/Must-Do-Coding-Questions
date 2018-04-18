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
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int pages[n+5];
		for(int i=0;i<n;i++)
			cin >> pages[i];
		int capacity;
		cin >> capacity;

		unordered_set<int> s;
	    unordered_map<int, int> indexes;
	 
	    int page_faults = 0;
	    for (int i=0; i<n; i++)
	    {
	        if (s.size() < capacity)
	        {
	            if (s.find(pages[i])==s.end())
	            {
	                s.insert(pages[i]);
	                page_faults++;
	            }
	            indexes[pages[i]] = i;
	        }
	        else
	        {
	            if (s.find(pages[i]) == s.end())
	            {
	                int lru = INT_MAX, val;
	                for (auto it=s.begin(); it!=s.end(); it++)
	                {
	                    if (indexes[*it] < lru)
	                    {
	                        lru = indexes[*it];
	                        val = *it;
	                    }
	                }
	                s.erase(val);
	                s.insert(pages[i]);
	                page_faults++;
	            }
	            indexes[pages[i]] = i;
	        }
	    }
	    cout << page_faults << endl;

	}
}
