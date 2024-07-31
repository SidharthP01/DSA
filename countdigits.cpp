#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    // int n=0,d;
    int num;
    cout<<"enter the number: ";
    cin>>num;
    // while(num>0)
    // {
    //     d=num%10;
    //     n++;
    //     num=num/10;
    // }
    // cout<<n;
    int count=log10(num) +1;
    cout<<count;
    
    return 0;
}