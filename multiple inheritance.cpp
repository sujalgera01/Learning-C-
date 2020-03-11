#include<iostream>
using namespace std;
class termend;
class intmarks
{
protected:
int cat1;
int cat2;
};

class termend
{
protected:
int tee;
};

class total:public intmarks, public termend
{
public:
void get()
{
cin>>cat1>>cat2>>tee;
}

void sum()
{
int marks;
marks=cat1+cat2+tee;
}

void dis()
{
int marks;
cout<<marks;
}
};

int main()
{
total t;
t.get();
t.sum();
t.dis();
}
