#include<iostream>
using namespace std;
int gcd(int n1,int n2)
{
    while(n1>0 && n2>0)
    {
        if(n1>n2) n1=n1%n2;
        else n2=n2%n1;
        if(n1=0)
            return n2;
        else
            return n1;
    }
}
int main()
{
    int n1,n2;
    cout<<"Enter the number : ";
    cin>>n1>>n2;
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    cout<<gcd<<endl;
    int gc=gcd(n1,n2);
    cout<<gc<<endl;
    return 0;
}