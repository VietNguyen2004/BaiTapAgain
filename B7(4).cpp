#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int a,b,c,d,e,f;

double length(int x,int y,int z, int t)
{
	return sqrt(pow(x-z,2) + pow(y - t,2));
}
int main()
{
	cin >> a >> b >> c >> d >> e >> f;
	double AB = length(a,b,c,d);

	double BC = length(c,d,e,f);

	double AC = length(a,b,e,f);
	double p = (AB + BC + AC )/2;
	if(max(max(AB,BC),AC) >= p) {
		cout<<"NO";
		return 0;
	}
	double S = sqrt(p*(p-AB)*(p-BC)*(p-AC));
	cout<<setprecision(3)<<fixed;
	cout << AB*BC*AC /(4*S);


}
