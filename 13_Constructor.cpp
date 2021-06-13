#include <iostream>

using namespace std;

class construct{
public:
    int num1,num2;
    construct()
    {
        num1=50;
        num2=20;
    }

};
int main()
{
construct c;
cout<<"Value of number 1: "<<c.num1<<endl;
cout<<"Value of number 2: "<<c.num2<<endl;
    return 0;
}
