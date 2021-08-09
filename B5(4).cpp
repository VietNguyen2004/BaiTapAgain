#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
double x1,y,x2,y2,r1,r2;
double distance()
{
	return sqrt(pow(x1-x2,2) + pow(y-y2,2));
}

int main()
{
	cout<<setprecision(3)<<fixed;
	cin >> x1 >> y>>x2>>y2>>r1>>r2;
	double dis = distance();
	if(dis  <= max(r1,r2))
	{
		cout<<abs(r1-r2);
		return 0;
	}
	else if(dis <= r1 + r2)
	{
		cout<<0;
		return 0;
	}
	cout<<dis -r1-r2;

}
