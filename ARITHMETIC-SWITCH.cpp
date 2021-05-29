#include <iostream>

using namespace std;

int main()
{
    int a,b,c,option;
    cout<<"Enter 2 numbers"<<"\n";
    cin>>a>>b;
    cout<<"Enter arithmetic operation"<<"\n"<<"Addition as 1"<<"\n"<<"Subtraction as 2"<<"\n"<<"Multiplication as 3"<<"\n"<<"Division as 4";
    cout<<"\n";
    cin>>option;
    switch(option)
    {

        case 1:
        c=a+b;
        cout<<"The addition of 2 numbers is : "<<c;
        break;
        case 2:
        c=a-b;
        cout<<"The Subtraction of 2 numbers is : "<<c;
        break;
        case 3:
        c=a*b;
        cout<<"The Multiplication of 2 numbers is : "<<c;
        break;
        case 4:
        c=a/b;
        cout<<"The Division of 2 numbers is : "<<c;
        break;

    }
    return 0;
}
