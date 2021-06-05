#include <iostream>

using namespace std;

int main()
{
   int a,*b,c;
   cout<<"Enter a number :"<<"\n";
   cin>>a;
   b=&a;
   cout<<"Entered number : "<<a<<"\n";
   cout<<"Address of the entered number : "<<b<<"\n";
   cout<<"Enter a value to change the existing value"<<"\n";
   cin>>c;
   *b=c;
   cout<<"Value after the change :"<<a;

    return 0;
}
