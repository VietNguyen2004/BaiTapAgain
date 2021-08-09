#include<iostream>

using namespace std;
int gcd(int a, int b)
{
	while(b != 0)
	{
		swap(a,b);
		b %= a;
	}
	return a;
}
bool is_beatiful_nums(int n)
{
	int k = n;
	int k2 = 0;
	while(k != 0) {
		k2 += k % 10;
		k /= 10;
	}
	return gcd(k2,n) == 1;
}

int main()
{
	int n;
	cin >> n;
	int res = 0;
	for(int i =1 ;i <= n;i ++) if(is_beatiful_nums(i)) res ++;
	cout<<res;
}
