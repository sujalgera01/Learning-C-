#include<iostream>
using namespace std;
class second;
class first
{
int a;
public:
void get()
{
cin>>a;
}
friend void max(first f, second s);
};
class second
{
int b;
public:
void get()
{
cin>>b;
}
friend void max(first f, second s);
};
void max(first f, second s)
{
if(f.a>s.b)
cout<<f.a;
else
cout<<s.b;
}
int main()
{
first f1;
f1.get();
second s1;
s1.get();
max(f1,s1);
}
