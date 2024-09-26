#include<iostream>
using namespace std;
int TotalPaths(int x,int length)
{
    if(x==length)
    {
        return 1;
    }
    int Option1=TotalPaths(x+1,length);
    int Option2=0;
    if(x+2<=length)
    {
         Option2=TotalPaths(x+2,length);
    }
    int ans= Option1+ Option2;
    return ans;
}
int main()
{
    int length;
    cin>>length;

    cout<< TotalPaths(0,length)<<endl;
}