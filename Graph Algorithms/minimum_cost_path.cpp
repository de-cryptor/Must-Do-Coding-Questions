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
#define PII pair<int,int> 

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m,n;
		cin >> m ;
		n = m;
		int graph[m+5][n+5];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin >> graph[i][j];
		int visited[m+5][n+5];
		map< PII ,int> mp;
		memset(visited,0,sizeof(visited));
		int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
		priority_queue < pair < int , PII > , vector < pair < int , PII > > , greater < pair < int , PII > > >pq;
		pq.push(make_pair(graph[0][0],make_pair(0,0))); 
		visited[0][0] = 1;
		mp[make_pair(0,0)] = graph[0][0]; 
		int ans = -1; 
		while(!pq.empty())
		{
			pair < int , PII > temp;
			temp = pq.top();
			pq.pop();
			PII node = temp.S;
			int dist = temp.F;
			for(int i=0;i<4;i++)
			{
				int x = dir[i][0] + node.F;
				int y = dir[i][1] + node.S;
				PII newnode = make_pair(x,y);
				if(x >= 0 && x < m && y >=0 && y<n)
				{
					if(!visited[x][y])
					{
						visited[x][y] = 1;
						pq.push(make_pair(mp[node] + graph[x][y],newnode));
						mp[newnode] = mp[node] + graph[x][y];
					}
					else if (mp.find(newnode) != mp.end())
					{
						mp[newnode] = min(mp[node] + graph[x][y],mp[newnode]);
					}
				}

			}
		}
		if(mp.find(make_pair(n-1,n-1)) == mp.end())
		    cout << -1 << endl;
	    else
		    cout << mp[make_pair(n-1,n-1)] << endl;
	}
}
