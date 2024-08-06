#include<iostream>
using namespace std;
void printfunction(int i,int n)
{
    if(i>n)
        return;
    printfunction(i+1,n);
    cout<<i<<endl;
}
int main()
{
    int n;
    cout<<"Enter the nummber: ";
    cin>>n;
    printfunction(1,n);
}