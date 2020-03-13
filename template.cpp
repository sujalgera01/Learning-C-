#include<iostream>
using namespace std;
template <class T>
int find(T x, T y)
{
	T lar;
	if(x>y)
	{
		lar=x;
	}
	else
	{
		lar=y;
	}
	

}

int main()
{
	int x,y,lar;
	cin >> x >>y;
	lar=find(x,y);
	cout<<lar;
	return 0 ;
}