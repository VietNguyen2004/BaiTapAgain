#include<iostream>
#include<algorithm>
using namespace std;

string whatTriangle(int a,int b, int c)
{
	if(c >= a + b) return "Khong la tam giac";

	if(a == b && b == c) return "Tam giac deu";

	if(a*a + b*b == c*c)
	{
		if(a == b) return "Tam giac vuong can";
		else return "Tam giac vuong";
	}

	if(a == b || b == c)return "Tam giac can";
	return "Tam giac thuong";
}

int main()
{
	int a,b,c;
	cin >> a >> b >> c;

	int arr[] = {a,b,c};
	sort(arr,arr+3);
	a = arr[0];
	b = arr[1];
	c = arr[2];
	cout<<whatTriangle(a,b,c);
}
