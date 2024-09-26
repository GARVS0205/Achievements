#include<bits/stdtr1c++.h>
using namespace std;
int Solve(int x,int*arr,int y)
{
    if(x==y)
    return 0;

    int Opt1=abs(arr[x]-arr[x+1])+Solve(x+1,arr,y);

    int Opt2=INT_MAX;
    if(x+2<=y)
    {
        Opt2=abs(arr[x]-arr[x+2]) + Solve(x+2,arr,y);
    }
    
    return min(Opt1,Opt2);
}
int main()
{
    int n;
    cin>>n;
    int height[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>height[i];
    }
    cout<<Solve(1,height,n)<<endl;
}