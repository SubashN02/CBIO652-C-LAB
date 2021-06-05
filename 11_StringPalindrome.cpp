#include <iostream>

using namespace std;

int main()
{
   string str,str1;
   cout<<"Enter a string: "<<"\n";
   cin>>str;
    str1=string(str.rbegin(),str.rend());
    cout<<"\n";
    if(str1==str)
    {

        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}
