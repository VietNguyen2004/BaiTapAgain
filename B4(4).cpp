#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int sum(int n)
{
	if(n == 1) return 0;
	int res = 1;
	int k = (int) sqrt(n);
	for(int i = 2;i <= k;i ++)
	{
		if(n % i == 0) res += i + n / i ;
	}
	if(k == sqrt(n)) res -= k;
	return res;
}

int main()
{
	int l,r;
	cin >> l >> r;
	int res = 0;
	for(int i = l;i <= r;i ++)
	{
		if(sum(i) > i) res ++;
	}
	cout<<res;
}
