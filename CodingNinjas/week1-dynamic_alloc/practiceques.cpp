#include<iostream>
using namespace std;
int main()
{
    int n;
   
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<n;
         int *p;
         int size, nz=0, nnz=0,ele;
         cin>>size;
         p=new int[size];
         for(int j=0;j<size;j++)
         {
             cin>>ele;
             if(ele==0){
                 p[size-1-nz]=0;
                 nz++;
             }
             else{
                 p[nnz]=ele;
                 nnz++;
             }
         }

        for(int k=0;k<size;k++)
        {
            cout<<p[k]<<" ";
        }
        cout<<endl;
        delete[] p;
         
    }
}