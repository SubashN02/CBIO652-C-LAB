#include <iostream>

using namespace std;

int main()

{
    int a[50],b[50],n,sum[50];
    cout<<"Enter size of the matrices"<<"\n";
    cin>>n;
    cout<<"Enter matrix A"<<"\n";
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    cout<<"Enter matrix B"<<"\n";
    for(int i=0;i<n;i++)
    {

        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {

        sum[i]=a[i]+b[i];
    }
    cout<<"Sum of matrices A and B is : "<<"\n";
     for(int i=0;i<n;i++)
    {

        cout<<sum[i];
        cout<<"\n";
    }
    return 0;
}
