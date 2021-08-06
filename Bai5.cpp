#include<iostream>
using namespace std;
int main()
{
	int minp[] = {1,61,121,301};
	int maxp[] = {60,120,300,INT_MAX};
	int price[] = {1000,1200,2000,4000};
	int last_month, this_month;
	cin >> this_month >> last_month;
	int k = this_month - last_month;
	cout<< k << endl;
	int money = 0;
	if(k == 0){
		cout<<0;
		return 0;
	}
	for(int i = 0; i < 4;i ++)
	{
		if(k >= maxp[i]) money += price[i]*(maxp[i] - minp[i] + 1);
		else
		{
			money += price[i] * (k - minp[i] + 1);
			break;
		}
	}
	cout<<money;

}
