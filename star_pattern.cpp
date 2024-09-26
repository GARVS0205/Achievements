#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    char arr[n][m]={'\0'};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i>=j)
            cout<<"*";
        }
        cout<<endl;
    }
}
    