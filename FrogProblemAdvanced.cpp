#include<bits/stdtr1c++.h>
using namespace std;
int Solve(int x,int*arr,int y,int k)
//Generalised for Staircase Problem.
{
    if(x==y)
    return 0;

    //This will store my minimum cost out of all paths.
    int ans=INT_MAX;
    /*
    Agar baad mein min nikalna hai toh it's a good practice to 
    initialise with your variable with 0.
    */
    for(int i=1;i<=k;i++)
    {
        int Op=INT_MAX;
        if(x+i<=y)
        {
            Op=abs(arr[x]-arr[x+i])+Solve(x+i,arr,y,k);
        }
        ans=min(ans,Op);
        }
    return ans;
    }

    
  

int main()
{
    int n,k;
    cin>>n>>k;
    int height[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>height[i];
    }
    cout<<Solve(1,height,n,k)<<endl;
}