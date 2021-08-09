#include<iostream>
#include<iomanip>
using namespace std;

double a,b,c,d,e,f,x,y;

int main()
{
	cin >> a >> b >> c >> d >> e >> f;
	if(a / d == b / e && a /d == c/f)
	{
		cout<<"TRUNG NHAU";
		return 0;
	}
	else if(a /d == b/ e)
	{
		cout<<"SONG SONG ";
		return 0;
	}
	double ti_le =  a/d;
	y = (c - ti_le * f ) / (b - ti_le * e);
	x = (c - b * y) / a;
	cout<<setprecision(3)<<fixed<< y <<" "<< x;
}
