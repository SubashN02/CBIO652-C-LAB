#include <iostream>

using namespace std;

class DNA{
public:
    DNA()
    {
        cout<<"Hi! I am DNA!"<<endl;
    }

};
class RNA: public DNA{
public:
    RNA()
    {
        cout<<"Hi! I am RNA!"<<endl;
    }
};
class Protein: public RNA{
public:
    Protein()
    {

        cout<<"Hi! I am Protein!"<<endl;
    }
};
int main()
{
    Protein p;
    return 0;
}
