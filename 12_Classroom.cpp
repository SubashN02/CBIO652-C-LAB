#include <iostream>

using namespace std;

 class Classroom{
     public:
string name;
int id;
void printclass()
{

    cout<<"Name : "<<name;
    cout<<"\n";
    cout<<"ID : "<<id;
}
};
int main()
{

    Classroom c;

    c.name="Subash";
    c.id=1001;
    c.printclass();


    return 0;
}
