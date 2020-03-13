#include<iostream>
using namespace std;
class person
{
protected:
char name[20];
int age;
};

class employee:public person
{
protected:
char id[10];
};

class prtym:public employee
{
int salary;
public:
void get()
{
cin>>name>>age>>id>>salary;
}

void dis()
{
cout<<name<<age<<id<<salary;
}
};

int main()
{
prtym p;
p.get();
p.dis();
}
