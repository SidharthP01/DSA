#include<iostream>
using namespace std;
void rever(int i,int n,int arr[])
{
    if(i>=n/2) return;
    else
    {
        swap(arr[i],arr[n-i-1]);
        rever(i+1,n,arr);
    }
    
}
int main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    rever(0,n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}