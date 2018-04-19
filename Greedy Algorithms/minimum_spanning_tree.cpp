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

int spanningTree(vector <pair<int,int> > g[], int MAX)
{
	priority_queue<PII, vector<PII>, greater<PII> > Q;
	int min_cost = 0;
	int source = 1;
	int visited[MAX];
	for(int i=0;i<MAX;i++)
	    visited[i] = 0;
	Q.push(make_pair(min_cost,source));
	while(!Q.empty())
	{
	    PII temp = Q.top();
	    Q.pop();
	    int u = temp.second;
	    if(visited[u])
	        continue;
	    min_cost += temp.first;
	    visited[u] = 1;
	    for(int v=0;v<g[u].size();v++)
	    {
	        int x = g[u][v].second;
	        if(!visited[x])
	            Q.push(g[u][v]);
	    }
	}
	return min_cost;
}
