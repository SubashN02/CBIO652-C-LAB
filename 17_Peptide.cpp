#include <iostream>

using namespace std;

class peptide{
   public:
        string seq;
    int seq_length;
    peptide()
    {
        seq="AFPLV";
        seq_length=5;
    }
    void show_pep()
    {
cout<<"Peptide Seq : "<<seq<<endl<<"Peptide seq Length : "<<seq_length<<endl;
    }
    ~peptide()
    {
        cout<<"Peptide details were printed"<<endl;
    }
};
int main()
{
peptide p;
p.show_pep();
    return 0;
}
