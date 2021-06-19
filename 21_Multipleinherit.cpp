#include <iostream>

using namespace std;

class A{
public:
    A()
    {
        cout<<"Hi! I am class A!"<<endl;
    }

};
class B: public A{
public:
    B()
    {
        cout<<"Hi! I am class B!"<<endl;
    }
};
class C: public B{
public:
    C()
    {

        cout<<"Hi! I am class C!"<<endl;
    }
};
int main()
{
    C c;
    return 0;
}
