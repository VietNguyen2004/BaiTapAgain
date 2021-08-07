#include<iostream>
#include<math.h>

using namespace std;

int c[1000][1000];
int n;

int main()
{
    cin >> n;
    for(int i = 0;i <= n;i ++) c[i][0] = 1;
    cout<<1<<endl;
    for(int i =1 ;i <= n; i ++)//vẽ hình tam giác từ hàng thứ 2 -> hàng thứ n
    {
        cout<<1<<" ";
        for(int j = 1;j <= i ;j ++)
        {
            c[i][j] = c[i-1][j-1] + c[i-1][j];//công thức tổ hợp
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
