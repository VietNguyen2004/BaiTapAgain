/** số ước = (i + 1) * (j + 1) * ....
	tổng = (a^(i+1) - 1)/(a-1)j * ....
*/
#include<iostream>
#include<math.h>
using namespace std;
int arr[11] = {};
void solve(int n)
{
	if(n < 2) return ;
	int k = 2;
	while(n != 1)
	{
		while(n % k != 0) k ++;
		while(n %k == 0)
		{
			arr[k] ++;
			n /= k;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	int count = 1;
	int sum = 1;
	for(int i = 2;i <= n; i++)solve(i);
	for(int i = 2; i <= n;i ++)
	{
		count *= (arr[i] + 1);
		sum *= (pow(i,arr[i] + 1)-1) / (i - 1);
	}
	cout<<count<<endl<<sum<<endl<<endl;
}
