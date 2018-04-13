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
#define PII pair<int,int> 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int graph[n+5][n+5];
		PII source,goal;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin >> graph[i][j];
				if(graph[i][j] == 1)
					source = make_pair(i,j);
				if(graph[i][j] == 2)
					goal = make_pair(i,j);
			}
		}
		int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
		queue< PII > q;
		q.push(source);
		int visited[n+5][n+5];
		memset(visited,0,sizeof(visited));
		int flag = 0;
		while(!q.empty())
		{
			PII node = q.front();
			q.pop();
			visited[node.F][node.S] = 1;
			for(int i=0;i<4;i++)
			{
				int x = node.F + dir[i][0];
				int y = node.S + dir[i][1];
				if(graph[x][y] == 2)
				{
					flag = 1;
					break;
				}
				if(x >= 0 && x < n && y >= 0 && y < n)
				{
					if(graph[x][y] == 3 && !visited[x][y])
					{
						q.push(make_pair(x,y));
					}
				}
			}
			if(flag)
				break;
	
		}
		cout << flag << endl;
	}
}
