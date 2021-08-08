#include<iostream>
#include<vector>
#include<queue>
#include<math.h>
using namespace std;
int n;
vector<int> base = {2,3,5,7};
bool isPrime(int n)
{
    if(n < 2) return false;
    for(int i = 2;i <= sqrt(n);i ++) if(n % i == 0) return false;
    return true;
}

bool dieukien(int j, int k)
{
    if(isPrime(k)){
        if( k < n ) return true;
        else if(k - n < n - j) return true;
    }
    return false;
}
int main()
{
    cin >> n;
    queue<int> q;
    q.push(2);
    for(int i = 1;i < 4; i ++)
    {
        if(dieukien(q.back(), base[i])) q.push(base[i]);
        else
        {
            cout<< q.back();
            return 0;
        }
    }

    while (true)
    {
        int root = q.front();
        for(int x : base)
        {
            int k = root * 10 + x;

            if(dieukien(q.back(),k)) q.push(k);
            else if(k > n){
                cout << q.back();
                return 0;
            }
        }
        q.pop();
    }
}
