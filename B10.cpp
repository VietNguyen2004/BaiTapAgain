#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int k,m,n;
	cin >> k >> m >> n;
	int mod = pow(10,k);
	int res = 1;
	if(m == 1 || m == 0)
	{
		cout<< m;
		return 0;
	}
	if(n == 0)
	{
		cout<<1;
		return 0;
	}
	for(int i = 1; i <= n; i ++)
	{
		res *= m;
		res %= mod;
	}
	string result = to_string(res);
	while(result.size() < k) result = "0" + result;
	cout<<result;
}
