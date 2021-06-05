#include <iostream>

using namespace std;

int main()
{
    int dnal;
    string dna;
    cout <<"Enter DNA Sequence: "<<"\n";
    cin>>dna;
    dnal=dna.length();
    cout<<"DNA Length : "<<dnal;
    cout<<"\n";
    cout<<"First Five Nucleotides in given DNA sequence : "<<dna.substr(0,5);

    return 0;
}
