#include <bits/stdc++.h>
using namespace std;
int main()
{
	if(fopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/input.txt", "r"))
	{
		freopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/input.txt", "r", stdin);
		freopen("C:/Users/Jatin Goel/Desktop/Algo-DS-Kit/output.txt","w",stdout);
	}
	int n;
	cin >> n;

	char m[1000][1000];
	for(int i=0;i<1000;i++)
		for(int j=0;j<1000;j++)
			m[i][j] = ' ';
	int k = n;
	for(int i=0;i<1000;i++)
		m[k][i] = '*';
	int ctr = 1,j=0,col=0; 
	for(int ctr=1;ctr<=n;ctr++)
	{
		col += ctr+1;
		for(int k = n-ctr;k<=n+ctr;k++)
			m[k][col] = '*';
		j = j+ctr;
	}
	int r = 2*n + 1;
	int c = (n*(n+1))/2 + n;

	for(int i=0;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
			cout << m[i][j] << " ";
		cout << endl;
	}

}
