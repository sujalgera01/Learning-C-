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
char id[10];
int sal;
public:
void  get()
{
cin>>id>>sal>>name>>age;
}

void dis()
{
cout<<"\n"<<name<<"\n"<<age<<"\n"<<id<<"\n"<<sal<<"\n";
}
};

class student:public person
{
char regno[20];
int marks;
public:
void getdata()
{
cin>>name>>age>>regno>>marks;
}

void disdata()
{
cout<<"\n"<<name<<"\n"<<age<<"\n"<<regno<<"\n"<<marks;
}
};

int main()
{
employee e;
e.get();
e.dis();
student s;
s.getdata();
s.disdata();
}
