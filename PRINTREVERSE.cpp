#include <iostream>

using namespace std;

int main()
{
    int n;
     cout<<"The numbers divisible by 3 between 100 and 0 are : "<<"\n";
    for(int i=100;i>0;i--)
    {
        if(i%3==0)
        {

           cout<<i;
            cout<<"\n";
        }
    }
    return 0;
}
