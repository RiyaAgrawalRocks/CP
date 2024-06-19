#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};

    cout<<"Array before swap"<<endl;

    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0],p_array[2]);

    cout<<"Array after swap"<<endl;

    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    pair<int,int> p1;
    cout<<"Enter 2 integers"<<endl;
    cin>>p1.first>>p1.second;
    cout<<"Pair created: "<<p1.first<<" "<<p1.second<<endl;
}