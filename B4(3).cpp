#include<iostream>
using namespace std;
int a,b;
bool arr[100000] = {};

bool doixung(int n)
{
	string s = to_string(n);
	int k = s.size();
	for(int i = 0;i < k / 2;i ++)
		if(s[i] != s[k - i -1])return false;
	return true;
}
void sangnt()
{
	arr[0] = arr[1] = false;
	for(int i = 2;i <= b;i ++)arr[i]= true;

	for(int i = 2; i * i <= b ; i ++)
	{
		for(int j = i * i ; j <= b ;j += i)
		{
			arr[j] = false;
		}
	}
}


int main()
{
	cin >> a >> b;
	sangnt();
	int res = 0;
	for(int i = a;i<= b;i ++) if(arr[i] && doixung(i)) res++;
	cout<<res;
}
