#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
#define nmax 1000000
int n ;
int a[nmax];
double x;
double result;
void in()
{
	cin >> n;
	for(int i = 0;i <= n; i++)cin>> a[i];
	cin >> x;
}

void calc()
{
	for(int i = 0;i <= n;i ++) result += pow(x,i)*a[i];
	cout << setprecision(2)<<fixed<<result;
}

int main()
{
	in();
	calc();
}
