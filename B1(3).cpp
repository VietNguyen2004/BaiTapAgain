#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int k,n,m;
	cin >> k >> n >> m ;
	int mod = pow(10,k);
	int res = 1;
	for(int i = 1;i <= m ; i ++)
	{
		res *= n;
		res %= mod;
	}
	cout<<res % mod;
}
