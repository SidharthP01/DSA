//#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
void printdivisor(int n)
{
    vector<int> list;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0){
            list.push_back(i);
            if((n/i)!= i)
                list.push_back(n/i);
        }
            
    }
    sort(list.begin(),list.end());
    for(auto it : list) 
        cout<<it<<" ";
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    // for(int i=1;i<=num;i++)
    // {
    //     if(num%i==0)
    //         cout<<i<<endl;
    // }
    printdivisor(num);
    return 0;
}

