#include<iostream>
#include<math.h>
using namespace std;
int isSquare(int n)
{
	return sqrt(n) == (int)sqrt(n);
}
int main()
{
	int n;
	cin >> n;
	if(isSquare(n)) cout<<n<<" la so chinh phuong";
	else cout<<n<<" khong la so chinh phuong";
}
