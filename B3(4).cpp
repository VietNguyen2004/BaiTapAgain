#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
double Calc(double a, double b, double c)
{
	double x = ((a*a + b*b - c*c) / (2 * a * b));
	x = acos(x);
	return x;
}

int main()
{
	double a,b,c ;
	cin >> a >> b >> c;
	cout<<setprecision(3)<<fixed;
	cout<<Calc(a,b,c)<<endl<<Calc(a,c,b)<<endl<<Calc(b,c,a)<<endl;
}
