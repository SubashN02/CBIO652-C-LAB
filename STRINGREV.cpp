#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  string dna;
  cout<<"Enter a DNA Sequence:"<<"\n";
  cin>>dna;
  reverse(dna.begin(),dna.end());
  cout<<"Reversed DNA sequence : "<<dna;
    return 0;
}
