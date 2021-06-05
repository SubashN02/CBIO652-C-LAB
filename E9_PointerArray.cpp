#include <iostream>

using namespace std;

int main()
{
    int *p,n,arr[100];
    cout<<"Enter size of the array"<<"\n";
    cin>>n;
    cout<<"Enter the array"<<"\n";
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    p=arr;
    cout<<"Array elements:"<<"\n";
    for(int i=0;i<n;i++)
    {
cout<<*(p+i);
cout<<"\n";
    }

    return 0;
}
