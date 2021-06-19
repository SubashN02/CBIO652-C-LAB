#include <iostream>

using namespace std;

class biology
{
protected:
    int a,b;
public:
    biology()
    {
    a=100,b=20;
}};
class chemistry
{
protected:
    int c;
public:
    chemistry()
    {
    c=50;
}};
class physics: public biology,public chemistry
{
public:
    void show()
    {
        cout<<"The value of A:"<<biology::a<<endl;
        cout<<"The value of B:"<<biology::b<<endl;
        cout<<"The value of C:"<<chemistry::c<<endl;
    }
};
int main()
{
physics p;
p.show();
    return 0;
}
