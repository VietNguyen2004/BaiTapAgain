#include<iostream>
#include<math.h>
using namespace std;
int a[1001];
int tonguoc(int n)
{
    int result = 1;
    int k = (int)sqrt(n);
    for(int i = 2;i <= k ;i ++)
    {
        if(n % i == 0) result += i + n/i;
    }
    if(k == sqrt(n)) result -= k;
    return result;
}
void taomang()
{
    for(int i = 100;i <= 1000;i ++)
        a[i] = tonguoc(i);
}
void xuat()
{
    for(int i = 100;i <= 1000;i ++)
    {
        for(int j = i + 1;j <= 1000;j ++)
        {
            if(a[i] == j && a[j] == i) cout<<i<<" "<<j<<endl;
        }
    }
}
int main()
{
    taomang();
    xuat();
}
