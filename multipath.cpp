#include<iostream>
using namespace std;
class student
{
protected:
char name[20];
char rno[10];
};

class internal:virtual public student
{
protected:
int cat1;
int cat2;
};

class tee:virtual public student
{
protected:
int tee;
};

class result:public internal,public tee
{
public:
void get()
{
cin>>name>>rno>>cat1>>cat2>>tee;
}
void dis()
{
cout<<name<<rno<<cat1+cat2+tee;
}
};

int main()
{
result r;
r.get();
r.dis();
}
