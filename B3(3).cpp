#include<iostream>
using namespace std;
#define nmax 100000000
bool arr[nmax] = {};
int n;
int len = 0;
void create_arr()
{
	int a = 0;
	int b = 1;
	int id = 0;
	while(a < n)
	{
		arr[a] = 1;
		swap(a,b);
		b += a;
	}
	len = id;
}

int main()
{
	cin >> n;
	create_arr();
	while(n > 0)
	{
		int k = n;
		while(! arr[k]) k--;
		cout<<k<<" ";
		n -= k;
	}

}
