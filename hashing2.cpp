#include<bits/stdc++.h>
#include <iostream>
using namespace std;
const int N=10^7+10;

int main()
{   
    int hash[N];
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        hash[a[i]]++;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        cout<<hash[x]<<endl;
    }
}