#include<bits/stdc++.h>
#include <iostream>
using namespace std;
const int M=1e9+7;
const int N=1e5;
int main()
{
    long long fact[N];
    fact[0]=1;
    fact[1]=1;
    for(int i=2;i<1e5;i++)
    {
        fact[i]=fact[i-1]*i;
    }
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        cout<<fact[n]%M<<endl;
    }
}