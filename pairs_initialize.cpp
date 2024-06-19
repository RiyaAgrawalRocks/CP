#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int> p={1,2};
    pair<int,int> p1=p;
    pair<int,int> &p2=p;
    cout<<"p initially "<<p.first<<" "<<p.second<<endl;
    cout<<"p1 initially "<<p1.first<<" "<<p1.second<<endl;
    cout<<"p2 initially "<<p2.first<<" "<<p2.second<<endl;
    p1.first=3;
    cout<<"p after changing p1.first "<<p.first<<" "<<p.second<<endl;
    p2.first=3;
    cout<<"p after changing p2.first "<<p.first<<" "<<p.second<<endl;    
}