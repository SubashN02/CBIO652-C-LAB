#include <iostream>

using namespace std;
void show(int a,int b)
{

    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
}
void show(int c)
{
    cout<<"Value of c: "<<c<<endl;
}
void show(int d,int e,int f)
{
    cout<<"Value of d: "<<d<<endl;
     cout<<"Value of e: "<<e<<endl;
      cout<<"Value of f: "<<f<<endl;
}
int main()
{
int a=1,b=2,c=3,d=9,e=8,f=6;
show(a,b);
show(c);
show(d,e,f);
    return 0;
}
