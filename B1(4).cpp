#include<iostream>
using namespace std;
int a,b,c;
int input(int x , int y)
{
	return a* x + b * y + c;
}

int main()
{
	cin >> a >> b >> c;
	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2 ;
	int k1 = input(x1,y1);
	int k2 = input(x2,y2);
	if(k1 == 0) cout<<"A thuoc";
	if(k2 == 0) cout<<"B thuoc";

	if(k1 != 0 && k2 !=0)
	{
		if(k1 * k2 > 0) cout<<"Cung phia";
		else cout<<"khac phia";
	}
}
