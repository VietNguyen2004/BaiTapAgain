#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int a,b,c,d;
int tu,mau;
int gcd(int a,int b)
{
	while(b != 0)
	{
		swap(a,b);
		b %= a;
	}
	return a;
}

void add_fraction()
{
	int chung = gcd(b,d);
	tu = a*(d / chung)  + c*(b / chung);
	mau = b * d / chung;
	chung = gcd(tu,mau);
	tu /= chung;
	mau /= chung;
}

int main()
{
	cin >> a >> b >> c >> d;
	add_fraction();
	cout<< tu << "/" << mau;
}
