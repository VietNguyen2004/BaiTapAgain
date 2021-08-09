#include<iostream>
#include<math.h>
using namespace std;

void update(int& n1, int& n2)
{
	swap(n1,n2);
	n2 += n1;
}
int main()
{
	int a,b ;
	cin >> a >> b;
	int n1 = 0;
	int n2 = 1;
	while(n1 < a)
	{
		update(n1,n2);
	}
	int res = 0;
	while(n1 <= b)
	{
		update(n1,n2);
		res ++;
	}
	cout<<res;
}
