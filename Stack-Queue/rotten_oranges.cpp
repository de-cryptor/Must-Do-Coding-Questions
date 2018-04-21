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

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		int grid[n+5][m+5];
		int visited[n+5][m+5];
		memset(visited,0,sizeof(visited));
		queue < pair<int,int> > q;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin >> grid[i][j];
				if(grid[i][j] == 2)
				{
					q.push(make_pair(i,j));
					visited[i][j] = 1;
				}
			}
		}
		int ans = 0;
		while(!q.empty())
		{
		    vector< pair<int,int> > v;
		    int flag = 0;
		    while(!q.empty())
		    {
    			pair<int,int> temp = q.front();
    			q.pop();
    			int x = temp.F;
    			int y = temp.S;
    			int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
    			for(int i=0;i<4;i++)
    			{
    				int p = x + dir[i][0];
    				int r = y + dir[i][1];
    				if(p >= 0 && p < n && r >= 0 && r < m)
    				{
    					if(visited[p][r] == 0 && grid[p][r] == 1)
    					{
    						flag = 1;
    						v.push_back(make_pair(p,r));
    						visited[p][r] = 1;
    					}
    				}
    			}
		    }
		    for(int i=0;i<v.size();i++)
		        q.push(v[i]);
		    ans += flag;
		}
		int found = ans;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if((grid[i][j] == 1 || grid[i][j] == 2) && visited[i][j] == 0)
					found = -1;
			}
		}
		cout << found << endl;

	}
}
