#include<iostream>
using namespace std;
int main()
{
    int a[3]={1,2,3};
    int n=3;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;       
        }
    }
}