#include<iostream>
#include<algorithm>
using namespace std;
int f(int n){
	int res =0;
	while(n != 0)
	{
		res += n %10;
		n /=10;
	}
	return res;
}
int main()
{
	int n;
	cin >> n;
	while(n >= 10) n = f(n);
	if(n == 9) cout<<"True";
	else cout<<"False";
}
