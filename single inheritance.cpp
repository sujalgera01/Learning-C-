#include<iostream>
using namespace std;
class person
{
char name[30];
int age;
public:
void get()
{
cin>>name>>age;
}

void dis()
{
cout<<"\n"<<"NAME: "<<name<<"\n"<<"AGE: "<<age;
}
};

class employee:public person
{
char id[10];
int salary;
public:
void getdata()
{
cin>>id>>salary;
}

void disdata()
{
cout<<"\n"<<"Id: "<<id<<"\n"<<"Salary: "<<salary;
}
};

int main()
{
employee e;
e.get();
e.getdata();
e.dis();
e.disdata();
}
