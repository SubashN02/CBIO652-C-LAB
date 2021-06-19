#include <iostream>

using namespace std;
class Proteins{
public:
    string name,organism,func;
    int length;
    void getname()
    {
    cin>>name;
    }
    void getlength()
    {
    cin>>length;
    }
    void getorganism()
    {
    cin>>organism;
    }
    void getfun()
    {
    cin>>func;
    }
    void protshow()
    {
        cout<<"Name : "<<name<<endl<<"Length : "<<length<<endl<<"Organism : "<<organism<<endl<<"Function : "<<func<<endl;
    }
};
int main()
{
Proteins p;
cout<<"Enter protein name"<<endl;
p.getname();
cout<<"Enter protein length"<<endl;
p.getlength();
cout<<"Enter protein organism"<<endl;
p.getorganism();
cout<<"Enter protein function"<<endl;
p.getfun();
cout<<"Protein details"<<endl;
p.protshow();
    return 0;
}
