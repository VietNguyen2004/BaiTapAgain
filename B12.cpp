#include<iostream>
using namespace std;
int c[101][101];
int comb(int n,int k)
{
	c[0][0] = 1;
	for(int i = 1; i <= n; i ++)
	{
		c[i][i] =1;
		c[i][0] = 1;
		for(int j = 1;j <= k ;j ++)
		{
			c[i][j] = c[i-1][j-1] + c[i-1][j];
		}
	}
	return c[n][k];
}
int main()
{
	int n,k;
	cin >> n >> k;
	cout<<comb(n,k);
}
