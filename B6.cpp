#include<iostream>
#include<math.h>
using namespace std;

bool check(int n)
{
	int k = (int) sqrt(n);
	return k * (k+1) == n;
}
