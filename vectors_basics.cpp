#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
    {
        cout<<"size: "<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
    }

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVec(v);

    vector<int> v1(10);
    v1.push_back(7);
    printVec(v1);

    vector<int> v2(5,3);
    printVec(v2);

    v2.pop_back();
    printVec(v2);
    
}