#include<math.h>
using namespace std;
int a[1001];
int tonguoc(int n)
{
    int result = 0;
    int k = (int)sqrt(n);
    for(int i = 1;i <= k ;i ++)
    {
        if(n % i == 0) result += i;
    }
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
        for(int j = i+1;j <= 1000;j ++)
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
