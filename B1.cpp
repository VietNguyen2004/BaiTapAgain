#include<iostream>
using namespace std;

int main()
{
	int n ;
	cin >> n;
	int res = 0;
	while(n != 0)
	{
		if(n & 1) n--;
		else n /= 2;
		res += 1;
	}
	cout<<res;
}
