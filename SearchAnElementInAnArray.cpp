#include<iostream>
using namespace std;
bool Search(int*arr,int index,int n,int target)
{
    if(index==n)
    {
        if(arr[index]==target)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    if(arr[index]==target)
    {
        return true;
    }
    bool ans=Search(arr,index+1,n,target);
    return ans;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<Search(arr,0,n-1,target);
}