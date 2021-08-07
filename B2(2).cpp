#include<iostream>
using namespace std;
int deleted(int n,int k )
{
    string s = to_string(n);
    s = s.erase(k,1);
    return stoi(s);
}
void solve()
{
    for(int i = 1000;i <= 9999;i ++)
    {
        for(int k = 0;k < 4; k ++)
        {
            int n = deleted(i,k);
            if(n == 0) continue;
            if(i % n == 0 && i / n == 9) cout<<i<<" "<<n<<endl;
        }
    }
}
int main()
{
    solve();
}
