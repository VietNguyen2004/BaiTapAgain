#include<iostream>
using namespace std;

int main()
{
    int factorial[10];//mảng lưu giá trị giai thừa từ 0 -> 9
    int n;
    int res = 0;
    int here = 0;
    factorial[0] = 1;
    cin >> n;
    while(n != 0)
    {
        int k = n % 10;
        if(here < k) {
            for(int i = here + 1;i <= k ; i ++)
            {
                factorial[i] = factorial[i-1] * i;
            }
            here = k;
        }
        res += factorial[k];
        n /= 10;
    }
    cout<<res;
}
