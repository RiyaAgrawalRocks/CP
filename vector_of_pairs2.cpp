#include <bits/stdc++.h>
using namespace std;

void printVec(vector< pair<int,int> > &v)
    {
        cout<<"size: "<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

int main()
{
    vector<pair< int,int> > v;
    printVec(v);
    int n;
    cin>>n;
    for(int i=0;i<3;i++)
    {
        int x=0,y=0;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVec(v);
}