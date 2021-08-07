#include<iostream>
using namespace std;
bool isFibonacci(int n,int& dem)
{
    if(n == 0) return true;
    int a = 0;
    int b = 1;
    dem ++;
    while(b < n)
    {
        int k = b;
        b += a;
        a = k;
        dem ++;
    }
    return b == n;
}

int main()
{
    int dem = 0;
    int n;
    cin >> n;
    cout<<boolalpha<<isFibonacci(n,dem)<<endl;
    cout<<dem;
}
