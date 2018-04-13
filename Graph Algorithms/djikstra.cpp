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
void dijkstra(int graph[MAX][MAX], int s,int V)
{
    int INF = 1e6;
    priority_queue < PII ,vector<PII> , greater<PII> > pq;
    vector<int> dist(V, INF);
    pq.push(make_pair(0,s));
    dist[s] = 0;
    while(!pq.empty())
    {
       pair<int,int> node = pq.top();
       int u = node.second;
       pq.pop();
       
       for(int i=0;i<V;i++)
       {
           if(graph[u][i] > 0)
           {
               int v = i;
               int w = graph[u][i];
               if(dist[v] > dist[u] + w)
               {
                   dist[v] = dist[u] + w;
                   pq.push(make_pair(dist[v],v));
               }
           }
       }
    }
    
    for(int i=0;i<V;i++)
        cout << dist[i] << " ";
}