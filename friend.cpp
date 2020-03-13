#include<iostream>
using namespace std;
class num
{
int a,b;
public:
void get()
{
cin>>a>>b;
}
friend void avg(num n)
{
int av=(n.a+n.b)/2;
cout<<"\n"<<av;
}
};
int main()
{

num n1;
n1.get();
avg(n1);
}
