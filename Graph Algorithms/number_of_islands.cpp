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
void dfs(int A[MAX][MAX], int N, int M,int visited[MAX][MAX],int p,int q)
{
    visited[p][q] = 1;
    int dir[8][2] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
    for(int i=0;i<8;i++)
    {
        int x = p + dir[i][0];
        int y = q + dir[i][1];
        if(x >= 0 && x < N && y >= 0 && y < M)
        {
            if(A[x][y] & !visited[x][y])
            {
                dfs(A,N,M,visited,x,y);
            }
        }
    }
}
int findIslands(int A[MAX][MAX], int N, int M)
{
    int visited[MAX][MAX];
    int islands = 0 ;
    memset(visited,0,sizeof(visited));
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(A[i][j] & !visited[i][j])
            {
                dfs(A,N,M,visited,i,j);
                islands++;
            }
        }
    }
    return islands;
}