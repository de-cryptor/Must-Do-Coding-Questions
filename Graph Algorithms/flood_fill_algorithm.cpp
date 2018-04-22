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
		cin >> m >> n;
		int graph[m+5][n+5];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin >> graph[i][j];
		int p,q,k;
		cin >> p >> q >> k;
		queue<PII> qu;
		qu.push(make_pair(p,q));
		int color = graph[p][q];
		graph[p][q] = k;
		while(!qu.empty())
		{
			PII node = qu.front();
			qu.pop();
			int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
			for(int i=0;i<4;i++)
			{
				int x = dir[i][0] + node.F;
				int y = dir[i][1] + node.S;
				PII newnode = make_pair(x,y);
				if(x >= 0 && x < m && y >=0 && y<n)
				{
					if(graph[x][y] == color)
					{
						graph[x][y] = k;
						qu.push(make_pair(x,y));
					}
				}
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout << graph[i][j] << " ";
			}
		}
		cout << endl;

	}
}
