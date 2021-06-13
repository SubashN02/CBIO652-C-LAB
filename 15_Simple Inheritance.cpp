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
int main()
{
    RNA r;
    return 0;
}
