#include<iostream>
#include<math.h>
using namespace std;
int k;
bool isAmstrong(int n)
{
    int compare_value = n;
    int res = 0;
    while(n != 0)
    {
        res += pow(n%10, k);
        n/=10;
    }
    return res == compare_value;
}

void lietke()
{
    int start = (int)pow(10,k-1);
    int ends = (int)pow(10,k) -1;
    for(int i = start; i <= ends; i++) if(isAmstrong(i)) cout<<i<<endl;
}

int main()
{
    cin >> k ;
    lietke();
}
