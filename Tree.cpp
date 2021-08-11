#include<iostream>
#include<fstream>
using namespace std;
#define nmax 1000

int T, n;
int pos[nmax];//vị trí 
int width[nmax];//độ dài 


void QuickSort(int l, int r)//Quick_Sort
{
	int mid = pos[(l+r)/2];
	int i = l;
	int j = r;
	while(i < j)
	{

		while(pos[i] < mid) i ++;
		while(pos[j] > mid) j--;
		if(i <= j)
		{
			swap(pos[i],pos[j]);
			swap(width[i],width[j]);
			i++;
			j--;
		}
	}
	if(i < r) QuickSort(i,r);
	if(j > l) QuickSort(l,j);
}

int solve()//hàm tính toán
{
	int length = width[0];//kết quả 
	int p = pos[0] + width[0];//vị trí vòi phun tới được
	for(int i = 1 ;i < n ; i ++)
	{
		if(p < pos[i])//điểm cuối p chạm tới vị trí đang xét 
		{
			length += width[i];
			p = pos[i] + width[i];
		}
		else if( p < pos[i] + width[i]) // điểm p đã qua vị trí đang xét
		{
			length += pos[i] + width[i] - p;
			p = pos[i] + width[i];
		}
	}
	return length;
}

int main()
{
	fstream in("IN.txt",ios::in);
	in >> T;
	for(int v = 1;v <= T;v ++)
	{
		in >> n;
		for(int i = 0;i < n ;i ++)
		{
			in >> pos[i] >> width[i];
			pos[i] -= width[i];
			width[i] *= 2;
		}
		QuickSort(0,n-1);
		cout<<solve()<<endl;
	}
}
