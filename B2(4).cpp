#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
double Area_Of_Crile(double r)
{
	return r*r*3.14;
}
int main()
{
	double a,b,c,S,p;
	cout<<setprecision(3)<<fixed;

	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout<<S<<endl;
	cout<< 2*S/a << endl << 2*S/b <<endl << 2*S/c << endl << Area_Of_Crile(S/p)<< endl <<Area_Of_Crile( a*b*c/(4*S));
}
