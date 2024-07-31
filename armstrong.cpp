#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int sum=0;
    int old=num;
    int len=to_string(num).length();
    cout<<len;
    while(num>0)
    {
        int lastdigit=num%10;
        sum=sum+pow(lastdigit,len);
        num=num/10;
    }
    cout<<sum;
    if(old==sum)
    {
        cout<<"armstrong";
    }
    return 0;
}